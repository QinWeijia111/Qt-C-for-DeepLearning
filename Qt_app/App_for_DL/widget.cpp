#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QProcess>
#include <QProgressDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MySaoGang)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushBtn_choose_csv_clicked()
{
    QString curDir=QDir::currentPath();
    QString aFile=QFileDialog::getOpenFileName(this,"打开一个文件",curDir,"所有文件(*.*)");
    ui->plainTextEdit->appendPlainText("你选择的文件是：");
    ui->plainTextEdit->appendPlainText(aFile);
    ui->plainTextEdit->appendPlainText("\n");
    QString pythonProgram = "python";
    QStringList arguments;
    arguments << "C:/Users/25811/Desktop/Qt_app/Qt_app/test.py" << aFile;

    QProgressDialog progressDialog("执行中...", "取消", 0, 0, this);
    progressDialog.setWindowModality(Qt::WindowModal);
    progressDialog.show();
    QProcess pythonProcess;
    pythonProcess.start(pythonProgram,arguments);
    if(!pythonProcess.waitForStarted()){
        qDebug() << "Failed to start Python process";
        return;
    }
    if (!pythonProcess.waitForFinished()) {
        qDebug() << "Python process finished with error";
        return;
    }
    QString result = pythonProcess.readAllStandardOutput();
    ui->plainTextEdit->appendPlainText("Python program output:\n" + result);

}


void Widget::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_2_clicked()
{
    QString str=QCoreApplication::applicationFilePath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

