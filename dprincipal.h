
#ifndef DPRINCIPAL_H
#define DPRINCIPAL_H
#include "ui_dprincipal.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "usuario.h"
class DPrincipal : public QDialog, public Ui::DPrincipal {
Q_OBJECT

public:
	DPrincipal(Usuario *,QWidget *parent = NULL);
	DPrincipal(QString,QWidget *parent = NULL);
	Usuario *usuario;
public slots:
	void slotEjemplo();

};

#endif 
