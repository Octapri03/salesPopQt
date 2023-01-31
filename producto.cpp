#include <QString>
#include "producto.h"

Producto::Producto()
{

}

Producto::Producto(int id_prod, const QString &name, int price, const QString &description, const QString &ubication, Tipo tipo, const QDate &fechaPubli, Usuario *vendedor) : id_prod(id_prod), name(name), price(price), description(description), ubication(ubication), tipo(tipo), fechaPubli(fechaPubli), vendedor(vendedor)
{

}

QString Producto::toString() const
{
    
    
    return QString("Producto {id_prod: %1, name: %2, price: %3}")
        .arg(id_prod)
        .arg(name)
        .arg(price);
}
