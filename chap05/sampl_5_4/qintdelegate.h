#ifndef QINTDELEGATE_H
#define QINTDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class QIntDelegate : public QStyledItemDelegate
{
public:
    QIntDelegate();
    // editing
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE;

    void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor,
                      QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;

    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;

};

#endif // QINTDELEGATE_H
