
#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QString nombre,QWidget *parent): QDialog(parent){
		setupUi(this);
	nombreSesion->setText(nombre);
	
}

DPrincipal::DPrincipal(Usuario *usuarioPasado,QWidget *parent): QDialog(parent){
		setupUi(this);
	usuarioPasado = usuario;
	QString cadena("Manin");
	nombreSesion->setText(cadena);
	qDebug()<<usuario->toString();
}


void DPrincipal::slotEjemplo(){

}

