#ifndef DATAITEM_H
#define DATAITEM_H

#include <QWidget>

namespace Ui {
class DataItem;
}

class DataItem : public QWidget
{
    Q_OBJECT

public:
    explicit DataItem(QWidget *parent = 0);
    ~DataItem();

private:
    Ui::DataItem *ui;
};

#endif // DATAITEM_H
