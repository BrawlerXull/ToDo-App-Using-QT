#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addBtn_clicked()
{
    QString text = ui->lineEdit->text();
    if(text.isEmpty()){

    }
    else{

        QListWidgetItem* item = new QListWidgetItem(ui->lineEdit->text(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags()|Qt::ItemIsEditable);
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
}


void MainWindow::on_removeBtn_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_removeAllBtn_clicked()
{
    ui->listWidget->clear();
}

