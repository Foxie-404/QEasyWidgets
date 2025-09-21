#include "Frame.h"


namespace QEW {


/**
 * FrameBase implementation
 */

FrameBase::FrameBase(QWidget *parent)
    : SizableWidget<QFrame>(parent) {
}

void FrameBase::resizeEvent(QResizeEvent *event) {
    emit resized();
    QFrame::resizeEvent(event);
}


} // namespace QEW