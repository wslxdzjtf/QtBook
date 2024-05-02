#include "qintdelegate.h"
#include <QSpinBox>
QIntDelegate::QIntDelegate()
{

}

QWidget *QIntDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QSpinBox *editor = new QSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(1000);
    editor->setFrame(false);
    return editor;
}

void QIntDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    int value = index.model()->data(index,Qt::EditRole).toInt();
    QSpinBox *spinBox =static_cast<QSpinBox *>(editor);
    spinBox->setValue(value);
}

void QIntDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QSpinBox *spinBox =static_cast<QSpinBox *>(editor);
    spinBox->interpretText();
    int value=spinBox->value();
    model->setData(index,value,Qt::EditRole);
}

void QIntDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
