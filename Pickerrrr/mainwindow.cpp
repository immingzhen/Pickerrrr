#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setMinimumDate(QDate::currentDate().addDays(-365));
    ui->dateEdit->setMaximumDate(QDate::currentDate().addDays(365));
    ui->dateEdit->setDisplayFormat("yyyy.MM.dd");
    ui->dateEdit_2->setDate(QDate::currentDate());
    ui->dateEdit_2->setMinimumDate(QDate::currentDate().addDays(-365));
    ui->dateEdit_2->setMaximumDate(QDate::currentDate().addDays(365));
    ui->dateEdit_2->setDisplayFormat("yyyy.MM.dd");



    //ui->label_3->set
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dateEdit_dateChanged(const QDate &date)
{
    QString str;
    str = date.toString("dd.MM.yyyy");
    str = str.trimmed();
    QDate bb = QDate::fromString(str,"dd.MM.yyyy");

    ui->dateEdit_2->setDate(bb);
    ui->dateEdit_2->setMinimumDate(bb);
    ui->label_3->setText(str);
}


void MainWindow::on_dateEdit_2_dateChanged(const QDate &date)
{
    QString str2;
    str2 = date.toString("dd.MM.yyyy");
    ui->label_4->setText(str2);

}

