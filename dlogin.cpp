
#include "dlogin.h"
#include <QDebug>
#include "dregistro.h"
DLogin::DLogin(QWidget *parent): QDialog(parent){
		setupUi(this);
	dRegistro = NULL;
	dPrincipal = NULL;
<<<<<<< HEAD
	
	producto1 = new Producto(1, "Chalet", 100000, "4 Habitaciones 2 banyos", "Madrid", Tipo::Immobiliario,QDate::currentDate(), new Usuario());
	producto1 = new Producto(2, "Piso", 80000, "3 Habitaciones 1 banyo", "Barcelona",Tipo::Immobiliario,QDate::currentDate(), new Usuario());
	
	lista.append(producto1);
	lista.append(producto2);
	favs.append(producto2);
	usuario = new Usuario(657483921, "Manolito", "Pablo45", 3, "pablo1234@gmail.com", lista, favs);
=======
>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
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
<<<<<<< HEAD
	QString cadena(nombreUsuario->text());
	usuario->setName(cadena);
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(usuario);
=======
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(nombreUsuario->text());
>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
	dPrincipal->show();
	this->close();
}

void DLogin::slotInvitado(){
	if (dPrincipal == NULL)
		dPrincipal = new DPrincipal(QString("Invitado"));
	dPrincipal->show();
	this->close();
}
