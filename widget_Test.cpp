#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QKeyEvent>
#include<QThread>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mApply=ui->applyView;
    //定义监听
    connect(mApply,SIGNAL(clicked()),SLOT(on_applyView_clicked()));
    mClipBoard=QApplication::clipboard();
}


/**
 * 复制一个字符串，然后启动一个线程，Ctr+V然后 执行ctr+Enter/Enter 每隔300ms 执行一次。
 * 1.把一个字符串复制到粘贴板上。
 * 2.启动线程Ctr+V,然后执行 Enter 每 300ms
 */
Widget::~Widget()
{
    delete ui;
}

void Widget::doWork(bool flag){
    while(flag){
      mClipBoard->setText(tr("test\n"),QClipboard::Clipboard);
      //执行ctr+V
      QKeyEvent ctrVEvent(QEvent::KeyPress,Qt::Key_V,Qt::ControlModifier);
      QCoreApplication::sendEvent(this,&ctrVEvent);
      //执行ctr+Enter/Enter
      //执行延伸300ms
      QThread::msleep(300);
    }
}

void Widget::on_applyView_clicked(){

}











