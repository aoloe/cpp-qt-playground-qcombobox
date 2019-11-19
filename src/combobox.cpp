#include "combobox.h"

#include <QStylePainter>

void ComboBox::paintEvent(QPaintEvent *)
{
    QStylePainter painter(this);
    painter.setPen(palette().color(QPalette::Text));
    // draw the combobox frame, focusrect and selected etc.
    QStyleOptionComboBox opt;
    initStyleOption(&opt);
    opt.currentIcon = QIcon();
    opt.iconSize = QSize();
    painter.drawComplexControl(QStyle::CC_ComboBox, opt);
    // draw the icon and text
    painter.drawControl(QStyle::CE_ComboBoxLabel, opt);
}
