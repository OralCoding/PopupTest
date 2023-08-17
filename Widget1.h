#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "Widget2.h"

class Widget1 : public QWidget {
    Q_OBJECT
private:
    Widget2 *popup;
    QPushButton *toggleButton;

private slots:
    void togglePopup();

public:
    Widget1(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *event) override;
};
