#include "Widget1.h"
#include <QResizeEvent>

Widget1::Widget1(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout;
    toggleButton = new QPushButton("Toggle Popup", this);
    layout->addWidget(toggleButton);

    popup = new Widget2(this);
    popup->hide(); // Initially hidden

    connect(toggleButton, &QPushButton::clicked, this, &Widget1::togglePopup);

    setLayout(layout);
}

void Widget1::togglePopup() {
    if(popup->isVisible())
        popup->hide();
    else
        popup->show();
}

void Widget1::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);
    popup->move((width() - popup->width()) / 2, (height() - popup->height()) / 2);
}
