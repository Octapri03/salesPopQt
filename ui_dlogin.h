/********************************************************************************
** Form generated from reading UI file 'dlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLOGIN_H
#define UI_DLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLogin
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *nombreUsuario;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bIniciar;
    QPushButton *bInvitado;
    QPushButton *bRegistro;

    void setupUi(QDialog *DLogin)
    {
        if (DLogin->objectName().isEmpty())
            DLogin->setObjectName(QString::fromUtf8("DLogin"));
        DLogin->resize(382, 344);
        widget = new QWidget(DLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 10, 251, 301));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
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
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        nombreUsuario = new QLineEdit(widget);
        nombreUsuario->setObjectName(QString::fromUtf8("nombreUsuario"));

        verticalLayout->addWidget(nombreUsuario);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bIniciar = new QPushButton(widget);
        bIniciar->setObjectName(QString::fromUtf8("bIniciar"));

        horizontalLayout->addWidget(bIniciar);

        bInvitado = new QPushButton(widget);
        bInvitado->setObjectName(QString::fromUtf8("bInvitado"));

        horizontalLayout->addWidget(bInvitado);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        bRegistro = new QPushButton(widget);
        bRegistro->setObjectName(QString::fromUtf8("bRegistro"));

        verticalLayout_3->addWidget(bRegistro);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(DLogin);

        QMetaObject::connectSlotsByName(DLogin);
    } // setupUi

    void retranslateUi(QDialog *DLogin)
    {
        DLogin->setWindowTitle(QCoreApplication::translate("DLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DLogin", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("DLogin", "Contrase\303\261a", nullptr));
        bIniciar->setText(QCoreApplication::translate("DLogin", "Iniciar sesi\303\263n", nullptr));
        bInvitado->setText(QCoreApplication::translate("DLogin", "Invitado", nullptr));
        bRegistro->setText(QCoreApplication::translate("DLogin", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLogin: public Ui_DLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGIN_H
