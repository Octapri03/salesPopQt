#include <QDate>
#include <QString>
#include "usuario.h"
#include <QDebug>
#include <QStringList>
Usuario::Usuario(){
	name = "Pablo";
   	 
}

Usuario::Usuario(int numTel, const QString &name, const QString &userName, int id, const QString &mail, const QList<Producto*> &enVenta, const QList<Producto*> &favs) : numTel(numTel), name(name), userName(userName), id(id), mail(mail), enVenta(enVenta), favs(favs)
{

}


QString Usuario::toString() const
{
	
    QStringList enVentaStringList;
    for (Producto *producto : enVenta) {
        enVentaStringList.append(producto->toString());	
    }
    
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
