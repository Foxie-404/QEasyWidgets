#include "ProgressBar.h"

#include "../Common/StyleSheet.h"


namespace QEW {


/**
 * ProgressBarBase implementation
 */

ProgressBarBase::ProgressBarBase(QWidget *parent)
    : SizableWidget<QProgressBar>(parent) {
    init();
}

void ProgressBarBase::init() {
    StyleSheetBase::apply(this, StyleSheetBase::ProgressBar);
}

void ProgressBarBase::setBorderless(bool borderless) {
    setProperty("isBorderless", borderless);
}

void ProgressBarBase::setTransparent(bool transparent) {
    setProperty("isTransparent", transparent);
}

void ProgressBarBase::clearDefaultStyleSheet() {
    SyleSheetBase::deregistrate(this);
}


} // namespace QEW