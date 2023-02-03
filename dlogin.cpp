
#include "dlogin.h"
#include <QDebug>
#include "dregistro.h"
DLogin::DLogin(QWidget *parent): QDialog(parent){
		setupUi(this);
	dRegistro = NULL;
	dPrincipal = NULL;
	
	producto1 = new Producto(1, "Chalet", 100000, "4 Habitaciones 2 banyos", "Madrid", Tipo::Immobiliario,QDate::currentDate(), new Usuario());
	producto2 = new Producto(2, "Piso", 80000, "3 Habitaciones 1 banyo", "Barcelona",Tipo::Immobiliario,QDate::currentDate(), new Usuario());
	
	lista.append(producto1);
	lista.append(producto2);
	favs.append(producto2);
	usuario = new Usuario(657483921, "Manolito", "Pablo45", 3, "pablo1234@gmail.com", lista, favs);
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
	QString cadena(nombreUsuario->text());
	usuario->setName(cadena);
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(usuario);
	dPrincipal->show();
	this->close();
}

void DLogin::slotInvitado(){
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(QString("Invitado"));
	dPrincipal->show();
	this->close();
}
