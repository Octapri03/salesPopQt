#ifndef _USUARIO_H_
#define _USUARIO_H_
#include <QList>
#include <QString>
#include "producto.h"
class Producto;
class Usuario
{

public:
    Usuario();
    Usuario(int numTel, const QString &name, const QString &userName, int id, const QString &mail, const QList<Producto*> &enVenta, const QList<Producto*> &favs);
	  Usuario(int numTel, const QString &name, const QString &userName, int id, const QString &mail, const QList<Producto*> &enVenta);
    int numTel;
    QString name;
    QString userName;
    int id;
    QString mail;
    QList<Producto*> enVenta;
    QList<Producto*> favs;
    
	QString toString() const;
    int getNumTel() const;
    void setNumTel(int value);
    QString getName() const;
    void setName(const QString &value);
    QString getUserName() const;
    void setUserName(const QString &value);
    int getId() const;
    void setId(int value);
    QString getMail() const;
    void setMail(const QString &value);
    QList<Producto*> getEnVenta() const;
    void setEnVenta(const QList<Producto*> &value);
    QList<Producto*> getFavs() const;
    void setFavs(const QList<Producto*> &value);
};





#endif
