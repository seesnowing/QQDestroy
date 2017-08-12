#ifndef WIDGET_H
#define WIDGET_H
#include<QClipboard>
#include <QWidget>
#include<QPushButton>
#include<QtConcurrent/QtConcurrent>
namespace Ui {
class Widget;
}


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public:
    void doWork(bool);
    QPushButton *mApply;
private slots:
    void on_applyView_clicked();
private:
    QClipboard *mClipBoard;
    Ui::Widget *ui;
};

#endif // WIDGET_H
