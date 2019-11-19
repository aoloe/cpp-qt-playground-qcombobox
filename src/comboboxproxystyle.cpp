#include "comboboxproxystyle.h"

#include <QStyleOptionComboBox>

void ComboBoxProxyStyle::drawControl(QStyle::ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const
{
    if(element == QStyle::CE_ComboBoxLabel){
        if (const QStyleOptionComboBox *cb = qstyleoption_cast<const QStyleOptionComboBox *>(opt)) {
            QStyleOptionComboBox cb_tmp(*cb);
            cb_tmp.currentIcon = QIcon();
            cb_tmp.iconSize = QSize();
            QProxyStyle::drawControl(element, &cb_tmp, p, w);
            return;
        }
    }
    QProxyStyle::drawControl(element, opt, p, w);
}
