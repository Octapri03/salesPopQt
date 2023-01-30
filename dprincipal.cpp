
#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QString nombre,QWidget *parent): QDialog(parent){
		setupUi(this);
	nombreSesion->setText(nombre);
	
}


void DPrincipal::slotEjemplo(){

}

