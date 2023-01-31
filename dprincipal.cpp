
#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QString nombre,QWidget *parent): QDialog(parent){
		setupUi(this);
	nombreSesion->setText(nombre);
	
}

<<<<<<< HEAD
DPrincipal::DPrincipal(Usuario *usuarioPasado,QWidget *parent): QDialog(parent){
		setupUi(this);
	usuarioPasado = usuario;
	QString cadena("Manin");
	nombreSesion->setText(cadena);
	qDebug()<<usuario->toString();
}

=======
>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34

void DPrincipal::slotEjemplo(){

}

