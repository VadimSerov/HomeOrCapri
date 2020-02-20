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


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        //I want to buy a house
        ui->label_2->setText("Ваши действия");
        if(ui->checkBox->isChecked()&&ui->checkBox_2->isChecked()){
            ui->label_2->setText("Иду покупать дом!");
        }else{
            ui->label_2->setText("Хожу по улице - мечтаю о доме.");
        }
    } else if(ui->radioButton_2->isChecked()){
        //I want to buy a goat
        if(ui->checkBox->isChecked()&&ui->checkBox_2->isChecked()){
            ui->label_2->setText("Иду покупать козу.");
        } else {
            ui->label_2->setText("Хожу по улице - мечтаю о козе.");
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked()){
        //I want to buy a house
        ui->label_2->setText("Ваши действия");
        if(ui->checkBox->isChecked()||ui->checkBox_2->isChecked()){
            ui->label_2->setText("Иду покупать дом!");
        }else{
            ui->label_2->setText("А вот такой я загадочный!");
        }
    } else if(ui->radioButton_2->isChecked()){
        //I want to buy a goat
        if(ui->checkBox->isChecked()||ui->checkBox_2->isChecked()){
            ui->label_2->setText("Иду покупать козу.");
        } else {
            ui->label_2->setText("Что со мной происходит? Сам не пойму.");
        }
    }
}
