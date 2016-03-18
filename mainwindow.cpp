#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //FileMover::moveFile(ui->textEdit->toPlainText(),ui->textEdit_2->toPlainText());
    Element a1(1,1,"D:/univer/qt/moveproject/from/ses.txt","D:/univer/qt/moveproject/to/ses.txt"),
            a2(1,1,"D:/univer/qt/moveproject/from/sos.txt","D:/univer/qt/moveproject/to/sos.txt"),
            a3(1,1,"D:/univer/qt/moveproject/from/sis.exe","D:/univer/qt/moveproject/to/sis.exe");
    QVector<Element> elements;
    ui->textEdit->setText("asdasd");
    elements.append(a1);
    elements.append(a2);
    elements.append(a3);
    ui->textEdit_2->setText("asdssasd");
    FileMover::moveFileByVector(elements);
}
