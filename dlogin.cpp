
#include "dlogin.h"
#include <QDebug>
#include "dregistro.h"
DLogin::DLogin(QWidget *parent): QDialog(parent){
		setupUi(this);
	dRegistro = NULL;
	dPrincipal = NULL;
	connect(bRegistro,SIGNAL(clicked()),
		this,SLOT(slotRegistro()));
	connect(bIniciar,SIGNAL(clicked()),
		this,SLOT(slotIniciar()));
	connect(bInvitado,SIGNAL(clicked()),
		this,SLOT(slotInvitado()));
}


void DLogin::slotEjemplo(){

}

void DLogin::slotRegistro(){
	if (dRegistro == NULL)
		dRegistro = new DRegistro();
	dRegistro->show();
	this->close();
}

void DLogin::slotIniciar(){
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(nombreUsuario->text());
	dPrincipal->show();
	this->close();
}

void DLogin::slotInvitado(){
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(QString("Invitado"));
	dPrincipal->show();
	this->close();
}
