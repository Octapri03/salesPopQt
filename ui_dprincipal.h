/********************************************************************************
** Form generated from reading UI file 'dprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPRINCIPAL_H
#define UI_DPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DPrincipal
{
public:
    QLabel *nombreSesion;

    void setupUi(QDialog *DPrincipal)
    {
        if (DPrincipal->objectName().isEmpty())
            DPrincipal->setObjectName(QString::fromUtf8("DPrincipal"));
        DPrincipal->resize(651, 437);
        nombreSesion = new QLabel(DPrincipal);
        nombreSesion->setObjectName(QString::fromUtf8("nombreSesion"));
        nombreSesion->setGeometry(QRect(526, 10, 111, 20));

        retranslateUi(DPrincipal);

        QMetaObject::connectSlotsByName(DPrincipal);
    } // setupUi

    void retranslateUi(QDialog *DPrincipal)
    {
        DPrincipal->setWindowTitle(QCoreApplication::translate("DPrincipal", "Dialog", nullptr));
        nombreSesion->setText(QCoreApplication::translate("DPrincipal", "Hola", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPrincipal: public Ui_DPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPRINCIPAL_H
