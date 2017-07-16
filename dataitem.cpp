#include "dataitem.h"
#include "ui_dataitem.h"

DataItem::DataItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataItem)
{
    ui->setupUi(this);
}

DataItem::~DataItem()
{
    delete ui;
}
