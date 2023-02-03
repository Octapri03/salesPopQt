#include <QString>
#include "producto.h"

Producto::Producto()
{

}

Producto::Producto(int id_prodPasado, const QString &namePasado, int pricePasado, const QString &descriptionPasado, const QString &ubicationPasado, Tipo tipoPasado, const QDate &fechaPubliPasado, Usuario *vendedorPasado) : id_prod(id_prodPasado), name(namePasado), price(pricePasado), description(descriptionPasado), ubication(ubicationPasado), tipo(tipoPasado), fechaPubli(fechaPubliPasado), vendedor(vendedorPasado)
{

}

QString Producto::toString() const
{
    
    
    return QString("Producto {id_prod: %1, name: %2, price: %3}")
        .arg(id_prod)
        .arg(name)
        .arg(price);
}
