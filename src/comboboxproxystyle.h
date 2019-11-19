#ifndef COMBOBOXPROXYSTYLE_H
#define COMBOBOXPROXYSTYLE_H

#include <QProxyStyle>

class ComboBoxProxyStyle : public QProxyStyle
{
public:
    using QProxyStyle::QProxyStyle;
    void drawControl(ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const override;
};

#endif // COMBOBOXPROXYSTYLE_H
