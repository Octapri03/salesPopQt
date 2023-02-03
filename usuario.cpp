#include <QDate>
#include <QString>
#include "usuario.h"
#include <QDebug>
#include <QStringList>
Usuario::Usuario(){
	name = "Pablo";
   	 
}

Usuario::Usuario(int numTelPasado, const QString &namePasado, const QString &userNamePasado, int idPasado, const QString &mailPasado, const QList<Producto*> &enVentaPasado, const QList<Producto*> &favsPasado) : numTel(numTelPasado), name(namePasado), userName(userNamePasado), id(idPasado), mail(mailPasado), enVenta(enVentaPasado), favs(favsPasado)
{

}


QString Usuario::toString() const
{
	
    QStringList enVentaStringList;
    qDebug()<<"test ppp1";
    qDebug()<<enVenta.size();
    for(int i=0; i<enVenta.size();i++){
    	qDebug()<<"test venta";
    }
    for (Producto *producto : enVenta) {
    	    qDebug()<<"test 2";
        enVentaStringList.append(producto->toString());	
    }
    qDebug()<<"test 2,5";
    QStringList favsStringList;
    for (Producto *producto : favs) {
        favsStringList.append(producto->toString());
    }
    return QString("Usuario {numTel: %1, name: %2, userName: %3, id: %4, mail: %5, enVenta: [%6], favs: [%7]}")
        .arg(numTel)
        .arg(name)
        .arg(userName)
        .arg(id)
        .arg(mail)
        .arg(enVentaStringList.join(", "))
        .arg(favsStringList.join(", "));
}

int Usuario::getNumTel() const
{
    return numTel;
}

void Usuario::setNumTel(int value)
{
    numTel = value;
}

QString Usuario::getName() const
{
    return name;
}

void Usuario::setName(const QString &value)
{
    name = value;
}

QString Usuario::getUserName() const
{
    return userName;
}

void Usuario::setUserName(const QString &value)
{
    userName = value;
}

int Usuario::getId() const
{
    return id;
}

void Usuario::setId(int value)
{
    id = value;
}

QString Usuario::getMail() const
{
    return mail;
}

void Usuario::setMail(const QString &value)
{
    mail = value;
}

QList<Producto*> Usuario::getEnVenta() const
{
    return enVenta;
}

void Usuario::setEnVenta(const QList<Producto*> &value)
{
    enVenta = value;
}

QList<Producto*> Usuario::getFavs() const
{
    return favs;
}

void Usuario::setFavs(const QList<Producto*> &value)
{
favs = value;
}
