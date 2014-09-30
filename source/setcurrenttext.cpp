#include <qcombobox.h>
//implement deprecated qt method

void setCurrentText(QComboBox* c,const QString& text) {
    int i = c->findText(text);
    if (i != -1)
        c->setCurrentIndex(i);
        else if (c->isEditable())
            c->setEditText(text);
        else
            c->setItemText(c->currentIndex(), text);
}
