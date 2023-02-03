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
    Usuario(int , const QString &, const QString &, int , const QString &, const QList<Producto*> &, const QList<Producto*> &);
	Usuario(int , const QString &, const QString &, int , const QString &, const QList<Producto*> &);
    int numTel;
    QString name;
    QString userName;
    int id;
    QString mail;
    QList<Producto*> enVenta;
    QList<Producto*> favs;
    
	QString toString() const;
    int getNumTel() const;
    void setNumTel(int);
    QString getName() const;
    void setName(const QString &);
    QString getUserName() const;
    void setUserName(const QString &);
    int getId() const;
    void setId(int);
    QString getMail() const;
    void setMail(const QString &);
    QList<Producto*> getEnVenta() const;
    void setEnVenta(const QList<Producto*> &);
    QList<Producto*> getFavs() const;
    void setFavs(const QList<Producto*> &);
};





#endif
