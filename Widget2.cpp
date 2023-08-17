#include "Widget2.h"

Widget2::Widget2(QWidget *parent) : QWidget(parent) {
    setAutoFillBackground(true);
    setPalette(Qt::yellow);
    setFixedSize(100, 100);

    QGraphicsOpacityEffect* effect = new QGraphicsOpacityEffect(this);
    setGraphicsEffect(effect);
    effect->setOpacity(0.5);
}

void Widget2::enterEvent(QEvent *event) {
    auto effect = static_cast<QGraphicsOpacityEffect*>(graphicsEffect());
    effect->setOpacity(1.0);
    QWidget::enterEvent(event);
}

void Widget2::leaveEvent(QEvent *event) {
    auto effect = static_cast<QGraphicsOpacityEffect*>(graphicsEffect());
    effect->setOpacity(0.5);
    QWidget::leaveEvent(event);
}
