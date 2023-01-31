
#ifndef DLOGIN_H
#define DLOGIN_H
#include "ui_dlogin.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "dregistro.h"
#include <QAction>
#include "dprincipal.h"
#include "producto.h"
#include "usuario.h"
#include <QDate>
#include <QList>
class DLogin : public QDialog, public Ui::DLogin {
Q_OBJECT

public:
	DLogin(QWidget *parent = NULL);
	DRegistro *dRegistro;
	DPrincipal *dPrincipal;
	Usuario *usuario;
	Producto *producto1,*producto2;
	QList <Producto*> lista;
	QList <Producto*> favs;
public slots:
	void slotEjemplo();
	void slotRegistro();
	void slotIniciar();
	void slotInvitado();
};

#endif 
