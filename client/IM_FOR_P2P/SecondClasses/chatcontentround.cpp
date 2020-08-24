#include "chatcontentround.h"
#include <QPainter>
#include <QRect>
#include <QPen>
#include <QTextOption>
#include <QFont>
#include <QColor>
#include <QFontMetricsF>
#include <QDebug>

ChatContentRound::ChatContentRound(QWidget *parent):UserChatContentInterface(parent)
{
    //this->setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    plug_name="round rectangle chat content";  //设置插件信息
    plug_version=1.0;

    show_type=SHOW_TYPE_MIN;  //设置变量的初始值
    window_height=10;
    begin_width_spacing=20;
    begin_height_spacing=10;
    icon_width=40;
    icon_height=40;
    text_width_spacing=12;
    text_height_spacing=10;
    triangle_width=6;
    triangle_height=10;
    triangle_height_spacing=10;

    QFont text_font = this->font();
    text_font.setFamily("新宋体");
    text_font.setPointSize(10);
    this->setFont(text_font);
}

ChatContentRound::~ChatContentRound()
{

}

QString ChatContentRound::getname()
{
    return this->plug_name;
}

qint32 ChatContentRound::getverison()
{
    return this->plug_version;
}

qint32 ChatContentRound::getwindowHeight()
{
    return this->window_height;
}

QString ChatContentRound::getuserIconName()
{
    return this->user_icon_name;
}

QString ChatContentRound::getuserChatContent()
{
    return this->user_chat_content;
}

QDateTime ChatContentRound::gettalkTime()
{
    return this->talk_time;
}

void ChatContentRound::setuserIconName(QString namestr)
{
    this->user_icon_name=namestr;
}

void ChatContentRound::setuserChatContent(QString usertext)
{
    this->user_chat_content=usertext;
    this->calc_text_size();
}

void ChatContentRound::settalkTime(QDateTime talktime)
{
    this->talk_time=talktime;
}

void ChatContentRound::run(show_type_enum type)
{
    show_type=type;
    this->update();
}

void ChatContentRound::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);//消锯齿
    painter.setFont(this->font());

    if(this->show_type==SHOW_TYPE_LEFT)//左边的图像和内容显示
    {
        //画图像
        framework_border_color=QColor(195, 195, 195);   //设置颜色
        framework_background_color=QColor(255,255,255);
        text_color=QColor(0,0,0);
        time_color=QColor(153,153,153);
        this->calc_text_size();

        QRect icon_rect=QRect(begin_width_spacing,begin_height_spacing,icon_width,icon_height);
        painter.setPen(Qt::NoPen);
        painter.setBrush(QBrush(Qt::gray));
        painter.drawPixmap(icon_rect,QPixmap(user_icon_name));
        //画框架
        QRect bubbleRect=QRect(begin_width_spacing+icon_width,begin_height_spacing,triangle_width+text_width_spacing+text_max_width+text_width_spacing,text_height_spacing+text_height+text_height_spacing);
        //框,重叠后取边
        painter.setPen(Qt::NoPen);
        painter.setBrush(QBrush(framework_border_color));
        painter.drawRoundedRect(bubbleRect.x()+triangle_width,bubbleRect.y(),bubbleRect.width()-triangle_width,bubbleRect.height(),8,8);
        //框,重叠后取框内
        painter.setBrush(QBrush(framework_background_color));
        painter.drawRoundedRect(bubbleRect.x()+triangle_width+1,bubbleRect.y()+1,bubbleRect.width()-triangle_width-2,bubbleRect.height()-2,8,8);

        //三角，重叠后取框内
        QPointF points[3] = {
            QPointF(bubbleRect.x(), bubbleRect.y()+triangle_height_spacing+triangle_height/2),
            QPointF(bubbleRect.x()+triangle_width+1, bubbleRect.y()+triangle_height_spacing),
            QPointF(bubbleRect.x()+triangle_width+1, bubbleRect.y()+triangle_height_spacing+triangle_height),
        };
        painter.setPen(QPen(framework_background_color));
        painter.drawPolygon(points, 3);

        //画三角的两个边
        painter.setPen(QPen(framework_border_color));
        painter.drawLine(QPointF(bubbleRect.x(), bubbleRect.y()+triangle_height_spacing+triangle_height/2), QPointF(bubbleRect.x()+triangle_width, bubbleRect.y()+triangle_height_spacing));
        painter.drawLine(QPointF(bubbleRect.x(), bubbleRect.y()+triangle_height_spacing+triangle_height/2), QPointF(bubbleRect.x()+triangle_width, bubbleRect.y()+triangle_height_spacing+triangle_height));
        //text
        QPen penText;
        penText.setColor(text_color);
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        painter.drawText(QRect(bubbleRect.x()+triangle_width+text_width_spacing,bubbleRect.y()+text_height_spacing,text_max_width,text_height), user_chat_content,option);
    }
    else if(this->show_type==SHOW_TYPE_RIGHT)//右边的图像和内容显示
    {
        //icon
        framework_border_color=QColor(195, 195, 195);   //设置颜色
        framework_background_color=QColor(158,234,106);
        text_color=QColor(0,0,0);
        time_color=QColor(153,153,153);
        this->calc_text_size();
        QRect icon_rect=QRect(this->width()-begin_width_spacing-icon_width,begin_height_spacing,icon_width,icon_height);
        painter.setPen(Qt::NoPen);
        painter.setBrush(QBrush(Qt::gray));
        painter.drawPixmap(icon_rect,QPixmap(user_icon_name));
        //framework
        QRect bubbleRect=QRect(this->width()-(triangle_width+text_width_spacing+text_max_width+text_width_spacing+icon_width+begin_width_spacing),begin_height_spacing,triangle_width+text_width_spacing+text_max_width+text_width_spacing,text_height_spacing+text_height+text_height_spacing);

        //框,重叠后取边
        painter.setPen(Qt::NoPen);
        painter.setBrush(QBrush(framework_border_color));
        painter.drawRoundedRect(bubbleRect.x(),bubbleRect.y(),bubbleRect.width()-triangle_width,bubbleRect.height(),8,8);
        //框,重叠后取框内
        painter.setBrush(QBrush(framework_background_color));
        painter.drawRoundedRect(bubbleRect.x()+1,bubbleRect.y()+1,bubbleRect.width()-triangle_width-2,bubbleRect.height()-2,8,8);

        //三角，重叠后取框内
        QPointF points[3] = {
            QPointF(bubbleRect.x()+bubbleRect.width(), bubbleRect.y()+triangle_height_spacing+triangle_height/2),
            QPointF(bubbleRect.x()+bubbleRect.width()-triangle_width-1, bubbleRect.y()+triangle_height_spacing),
            QPointF(bubbleRect.x()+bubbleRect.width()-triangle_width-1, bubbleRect.y()+triangle_height_spacing+triangle_height),
        };
        painter.setPen(QPen(framework_background_color));
        painter.drawPolygon(points, 3);

        //画三角的两个边
        painter.setPen(QPen(framework_border_color));
        painter.drawLine(QPointF(bubbleRect.x()+bubbleRect.width(), bubbleRect.y()+triangle_height_spacing+triangle_height/2), QPointF(bubbleRect.x()+bubbleRect.width()-triangle_width, bubbleRect.y()+triangle_height_spacing));
        painter.drawLine(QPointF(bubbleRect.x()+bubbleRect.width(), bubbleRect.y()+triangle_height_spacing+triangle_height/2), QPointF(bubbleRect.x()+bubbleRect.width()-triangle_width, bubbleRect.y()+triangle_height_spacing+triangle_height));

        //text
        QPen penText;
        penText.setColor(text_color);
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        painter.drawText(QRect(bubbleRect.x()+text_width_spacing,bubbleRect.y()+text_height_spacing,text_max_width,text_height), user_chat_content,option);
    }
    else if(this->show_type==SHOW_TYPE_TIME)//时间显示
    {
        QPen time_pen;
        time_pen.setColor(time_color);
        painter.setPen(time_pen);

        QTextOption time_option(Qt::AlignCenter);
        time_option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);

        QFont time_font = painter.font();
        time_font.setFamily("MicrosoftYaHei");
        time_font.setPointSize(9);
        painter.setFont(time_font);

        painter.drawText(this->rect(),talk_time.toString("yyyy-MM-dd HH:mm:ss"),time_option);
    }
}

void ChatContentRound::calc_text_size()
{
    QFontMetrics metrics = QFontMetrics(this->font());

    text_min_width=metrics.width("A")*2;

    qint32 min_width=begin_width_spacing+icon_width+triangle_width+text_width_spacing+text_width_spacing+icon_width+begin_width_spacing;

    if(this->width()<min_width+text_min_width)
    {
        this->setMinimumWidth(min_width+text_min_width);
    }

    text_max_width=this->width()-min_width;//框架的最大文字宽度

    qint32 real_width=metrics.width(this->user_chat_content);

    if(real_width<text_max_width)
    {
        text_max_width=real_width;
        text_height=text_height_spacing+metrics.height()+text_height_spacing>triangle_height_spacing+triangle_height+triangle_height_spacing? metrics.height() : triangle_height_spacing+triangle_height+triangle_height_spacing;
    }
    else
    {
        QRect textRect=QRect(0,0,text_max_width,0);
        int flags = Qt::TextWordWrap; // 自动换行
        textRect=metrics.boundingRect(textRect, flags, user_chat_content);
        text_height=textRect.height();
    }
    window_height=text_height_spacing+text_height+text_height_spacing>icon_height? text_height_spacing+text_height+text_height_spacing: icon_height;
    window_height=begin_height_spacing+window_height+begin_height_spacing;

}
