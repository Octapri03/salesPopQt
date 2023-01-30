#include <QApplication>
#include <QLabel>
#include <unistd.h>
#include <QLineEdit>
#include <QDialog>
#include "dlogin.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
    	
     DLogin *dLogin = new DLogin();
     
     dLogin->show();
     
    
     return app.exec();
 }

