#ifndef QEASYWIDGETS_STYLESHEET_H
#define QEASYWIDGETS_STYLESHEET_H

#include <QString>
#include <QWidget>
#include <QMap>
#include <QPointer>

#include "Theme.h"


namespace QEW {


/**
 * StyleSheet manager for widgets
 */
class StyleSheetBase {
private:
    static QString loadStyleSheet(const QString &fileName, Theme theme);
    static QMap<QString, QString> m_styleSheetCache;
    static QMap<QPointer<QWidget>, StyleType> m_registeredWidgets;

public:
    enum StyleType {
        Label,
        Button,
        CheckBox,
        ScrollArea,
        Tree,
        List,
        ToolBox,
        GroupBox,
        Slider,
        SpinBox,
        ComboBox,
        Edit,
        Browser,
        ProgressBar,
        Player,
        Tab,
        Table,
        ChatWidget,
        Bar,
        DockWidget,
        Menu,
    };

    static QString getStyleSheet(StyleType type, Theme theme = LIGHT);
    
    // Widget registration for theme updates
    static void registrate(QWidget *widget, StyleType type);
    static void deregistrate(QWidget *widget);
    static void apply(QWidget *widget, StyleType type, Theme theme = LIGHT, bool registrate = true);

    static void updateAllStyleSheets(Theme theme);
};


} // namespace QEW


#endif // QEASYWIDGETS_STYLESHEET_H