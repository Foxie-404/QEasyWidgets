#include "Menu.h"

#include "../Common/StyleSheet.h"


namespace QEW {


/**
 * MenuBase implementation
 */

MenuBase::MenuBase(QWidget *parent)
    : QMenu(parent) {
    init();
}

void MenuBase::init() {
    StyleSheetBase::apply(this, StyleSheetBase::Menu);
}

void MenuBase::clearDefaultStyleSheet() {
    StyleSheetBase::deregistrate(this);
}


} // namespace QEW