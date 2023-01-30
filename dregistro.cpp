
#include "dregistro.h"
#include <QDebug>
#include "dlogin.h"
DRegistro::DRegistro(QWidget *parent): QDialog(parent){
		setupUi(this);
		
	connect(bInicio,SIGNAL(clicked()),
		this,SLOT(slotLogin()));
	
}


void DRegistro::slotEjemplo(){

}

void DRegistro::slotLogin(){
	DLogin *dLogin;
	dLogin = NULL;
	if (dLogin == NULL){
		dLogin = new DLogin();
	dLogin->show();
	}
	this->close();
}

