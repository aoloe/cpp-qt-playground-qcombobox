#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QComboBox>

class ComboBox : public QComboBox
{
public:
    using QComboBox::QComboBox;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // COMBOBOX_H
