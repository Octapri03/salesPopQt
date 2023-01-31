/********************************************************************************
** Form generated from reading UI file 'dregistro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DREGISTRO_H
#define UI_DREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DRegistro
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *bRegistro;
    QPushButton *bInicio;

    void setupUi(QDialog *DRegistro)
    {
        if (DRegistro->objectName().isEmpty())
            DRegistro->setObjectName(QString::fromUtf8("DRegistro"));
        DRegistro->resize(413, 437);
        layoutWidget = new QWidget(DRegistro);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 251, 361));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frame);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        bRegistro = new QPushButton(layoutWidget);
        bRegistro->setObjectName(QString::fromUtf8("bRegistro"));

        verticalLayout_3->addWidget(bRegistro);

        bInicio = new QPushButton(layoutWidget);
        bInicio->setObjectName(QString::fromUtf8("bInicio"));

        verticalLayout_3->addWidget(bInicio);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(DRegistro);

        QMetaObject::connectSlotsByName(DRegistro);
    } // setupUi

    void retranslateUi(QDialog *DRegistro)
    {
        DRegistro->setWindowTitle(QCoreApplication::translate("DRegistro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DRegistro", "E-Mail", nullptr));
        label_2->setText(QCoreApplication::translate("DRegistro", "Usuario", nullptr));
        label_3->setText(QCoreApplication::translate("DRegistro", "Contrase\303\261a", nullptr));
        label_4->setText(QCoreApplication::translate("DRegistro", "Repite contrase\303\261a", nullptr));
        bRegistro->setText(QCoreApplication::translate("DRegistro", "Registrarse", nullptr));
        bInicio->setText(QCoreApplication::translate("DRegistro", "Volver a Iniciar Sesi\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DRegistro: public Ui_DRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DREGISTRO_H
