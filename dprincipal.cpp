
#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QString nombre,QWidget *parent): QDialog(parent){
		setupUi(this);
	nombreSesion->setText(nombre);
	
}

DPrincipal::DPrincipal(Usuario *usuarioPasado,QWidget *parent): QDialog(parent){
		setupUi(this);
		qDebug()<<"Test1";
	usuario = usuarioPasado;
	qDebug()<<"Test2";
	QString cadena=usuario->mail;
	qDebug()<<"Test3";
	nombreSesion->setText(cadena);
	qDebug()<<usuario->toString();
	qDebug()<<"Test4";
}


void DPrincipal::slotEjemplo(){

}

