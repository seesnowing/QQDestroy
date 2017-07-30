#include "qqmessagesend.h"
#include "ui_qqmessagesend.h"

QQMessageSend::QQMessageSend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QQMessageSend)
{
    ui->setupUi(this);
}

QQMessageSend::~QQMessageSend()
{
    delete ui;
}
