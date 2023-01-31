
#ifndef DPRINCIPAL_H
#define DPRINCIPAL_H
#include "ui_dprincipal.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
<<<<<<< HEAD
#include "usuario.h"
=======

>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
class DPrincipal : public QDialog, public Ui::DPrincipal {
Q_OBJECT

public:
<<<<<<< HEAD
	DPrincipal(Usuario *,QWidget *parent = NULL);
	DPrincipal(QString,QWidget *parent = NULL);
	Usuario *usuario;
=======
	DPrincipal(QWidget *parent = NULL);
	DPrincipal(QString,QWidget *parent = NULL);

>>>>>>> 8a71468a190c8db99da2c6521b137fd99fa8fd34
public slots:
	void slotEjemplo();

};

#endif 
