#ifndef QQMESSAGESEND_H
#define QQMESSAGESEND_H

#include <QWidget>

namespace Ui {
class QQMessageSend;
}

class QQMessageSend : public QWidget
{
    Q_OBJECT

public:
    explicit QQMessageSend(QWidget *parent = 0);
    ~QQMessageSend();

private:
    Ui::QQMessageSend *ui;
};

#endif // QQMESSAGESEND_H
