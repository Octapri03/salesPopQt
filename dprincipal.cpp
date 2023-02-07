
#include "dprincipal.h"
#include <QDebug>
#include "database.h"
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
	Database db;
	if(!db.connect())
	{
		qDebug()<<"NO SE PUDO CONECTAR";
		
	} else {
		
	}
	
	
	db.close();
}


void DPrincipal::slotEjemplo(){

}

