/********************************************************************************
** Form generated from reading UI file 'formdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDOC_H
#define UI_FORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *FormDoc)
    {
        if (FormDoc->objectName().isEmpty())
            FormDoc->setObjectName(QStringLiteral("FormDoc"));
        FormDoc->resize(400, 300);
        actOpen = new QAction(FormDoc);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCut = new QAction(FormDoc);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon1);
        actCopy = new QAction(FormDoc);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon2);
        actPaste = new QAction(FormDoc);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon3);
        actFont = new QAction(FormDoc);
        actFont->setObjectName(QStringLiteral("actFont"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon4);
        actClose = new QAction(FormDoc);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon5);
        actUndo = new QAction(FormDoc);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon6);
        actRedo = new QAction(FormDoc);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon7);
        plainTextEdit = new QPlainTextEdit(FormDoc);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(80, 50, 104, 64));

        retranslateUi(FormDoc);

        QMetaObject::connectSlotsByName(FormDoc);
    } // setupUi

    void retranslateUi(QWidget *FormDoc)
    {
        FormDoc->setWindowTitle(QApplication::translate("FormDoc", "Form", Q_NULLPTR));
        actOpen->setText(QApplication::translate("FormDoc", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("FormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("FormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("FormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("FormDoc", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("FormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("FormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("FormDoc", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("FormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("FormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("FormDoc", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFont->setText(QApplication::translate("FormDoc", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("FormDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("FormDoc", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("FormDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setText(QApplication::translate("FormDoc", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("FormDoc", "\346\222\244\351\224\200\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actUndo->setShortcut(QApplication::translate("FormDoc", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actRedo->setText(QApplication::translate("FormDoc", "\351\207\215\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("FormDoc", "\351\207\215\345\244\215\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FormDoc: public Ui_FormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDOC_H
