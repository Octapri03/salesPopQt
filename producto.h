#ifndef _PRODUCTO_H_
#define _PRODUCTO_H_
#include <QDate>
#include <QString>
#include "usuario.h"
enum Tipo {Immobiliario, Motor, Moda, Informatica};
class Usuario;
class Producto
{

public:
    Producto();
    Producto(int, const QString &, int , const QString &, const QString &, Tipo , const QDate &, Usuario *);

    int id_prod;
    QString name;
    int price;
    QString description;
    QString ubication;
    Tipo tipo;
    QDate fechaPubli;
    Usuario *vendedor;
QString toString() const;
    int getId_prod() const;
    void setId_prod(int);
    QString getName() const;
    void setName(const QString &);
    int getPrice() const;
    void setPrice(int);
    QString getDescription() const;
    void setDescription(const QString &);
    QString getUbication() const;
    void setUbication(const QString &);
    Tipo getTipo() const;
    void setTipo(const Tipo &);
    QDate getFechaPubli() const;
    void setFechaPubli(const QDate &);
    Usuario *getVendedor() const;
    void setVendedor(Usuario *);
};



/*int Producto::getId_prod() const
{
    return id_prod;
}

void Producto::setId_prod(int value)
{
    id_prod = value;
}

QString Producto::getName() const
{
    return name;
}

void Producto::setName(const QString &value)
{
    name = value;
}

int Producto::getPrice() const
{
    return price;
}

void Producto::setPrice(int value)
{
    price = value;
}

QString Producto::getDescription() const
{
    return description;
}

void Producto::setDescription(const QString &value)
{
    description = value;
}

QString Producto::getUbication() const
{
    return ubication;
}

void Producto::setUbication(const QString &value)
{
    ubication = value;
}

Tipo Producto::getTipo() const
{
    return tipo;
}

void Producto::setTipo(const Tipo &value)
{
    tipo = value;
}

QDate Producto::getFechaPubli() const
{
return fechaPubli;
}

void Producto::setFechaPubli(const QDate &value)
{
fechaPubli = value;
}

Usuario *Producto::getVendedor() const
{
return vendedor;
}

void Producto::setVendedor(Usuario *value)
{
vendedor = value;
}*/
#endif
