#ifndef PROPERTYTABLEVIEW_H
#define PROPERTYTABLEVIEW_H

#include <QTableView>
#include <QHeaderView>
#include <QFocusEvent>
#include <QEvent>
#include "propertymodel.h"
#include "propertydelegate.h"

class PropertyTableView : public QTableView
{
public:
    PropertyTableView(PropertyModel *model,QWidget *parent = 0);

    void init();
    void setPropertyKeyColumnWidth(int width);
    void setPropertyValueColumnWidth(int width);

private:
    void setPropertyValue();

protected:
    void focusOutEvent(QFocusEvent *event);
    void leaveEvent(QEvent *event);

private:
    PropertyDelegate *delegate_;
};

#endif // PROPERTYTABLEVIEW_H
