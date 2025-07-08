#include "login.h"
#include "ui_login.h"
#include<iostream>
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    std::cout <<"hi";
}

login::~login()
{
    delete ui;
}

