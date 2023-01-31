
#ifndef DLOGIN_H
#define DLOGIN_H
#include "ui_dlogin.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "dregistro.h"
#include <QAction>
#include "dprincipal.h"
<<<<<<< HEAD
#include "producto.h"
#include "usuario.h"
#include <QDate>
#include <QList>
=======
>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
class DLogin : public QDialog, public Ui::DLogin {
Q_OBJECT

public:
	DLogin(QWidget *parent = NULL);
	DRegistro *dRegistro;
	DPrincipal *dPrincipal;
<<<<<<< HEAD
	Usuario *usuario;
	Producto *producto1,*producto2;
	QList <Producto*> lista;
	QList <Producto*> favs;
=======
>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
public slots:
	void slotEjemplo();
	void slotRegistro();
	void slotIniciar();
	void slotInvitado();
};

#endif 
