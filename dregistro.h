
#ifndef DREGISTRO_H
#define DREGISTRO_H
#include "ui_dregistro.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
class DRegistro : public QDialog, public Ui::DRegistro {
Q_OBJECT

public:
	DRegistro(QWidget *parent = NULL);
	
public slots:
	void slotEjemplo();
	void slotLogin();
};

#endif 
