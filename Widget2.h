#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QGraphicsOpacityEffect>

class Widget2 : public QWidget {
    Q_OBJECT
public:
    Widget2(QWidget *parent = nullptr);

protected:
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;
};
