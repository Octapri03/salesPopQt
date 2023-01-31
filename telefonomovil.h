#include <QDate>
#include <QString>
#include "usuario.h"
#include "producto.h"
class TelefonoMovil : public Producto
{

public:
	TelefonoMovil();
	TelefonoMovil(int id_prod, const QString &name, int price, const QString &description, const QString &ubication, Tipo tipo, const QDate &fechaPubli, Usuario *vendedor);

    int id_prod;
    QString name;
    int price;
    QString description;
    QString ubication;
    Tipo tipo;
    QDate fechaPubli;
    Usuario *vendedor;

    int getId_prod() const;
    void setId_prod(int value);
    QString getName() const;
    void setName(const QString &value);
    int getPrice() const;
    void setPrice(int value);
    QString getDescription() const;
    void setDescription(const QString &value);
    QString getUbication() const;
    void setUbication(const QString &value);
    Tipo getTipo() const;
    void setTipo(const Tipo &value);
    QDate getFechaPubli() const;
    void setFechaPubli(const QDate &value);
    Usuario *getVendedor() const;
    void setVendedor(Usuario *value);
};

TelefonoMovil::TelefonoMovil()
{

}

TelefonoMovil::TelefonoMovil(int id_prod, const QString &name, int price, const QString &description, const QString &ubication, Tipo tipo, const QDate &fechaPubli, Usuario *vendedor) : id_prod(id_prod), name(name), price(price), description(description), ubication(ubication), tipo(tipo), fechaPubli(fechaPubli), vendedor(vendedor)
{

}

int TelefonoMovil::getId_prod() const
{
    return id_prod;
}

void TelefonoMovil::setId_prod(int value)
{
    id_prod = value;
}

QString TelefonoMovil::getName() const
{
    return name;
}

void TelefonoMovil::setName(const QString &value)
{
    name = value;
}

int TelefonoMovil::getPrice() const
{
    return price;
}

void TelefonoMovil::setPrice(int value)
{
    price = value;
}

QString TelefonoMovil::getDescription() const
{
    return description;
}

void TelefonoMovil::setDescription(const QString &value)
{
    description = value;
}

QString TelefonoMovil::getUbication() const
{
    return ubication;
}

void TelefonoMovil::setUbication(const QString &value)
{
    ubication = value;
}

Tipo TelefonoMovil::getTipo() const
{
    return tipo;
}

void TelefonoMovil::setTipo(const Tipo &value)
{
    tipo = value;
}

QDate TelefonoMovil::getFechaPubli() const
{
return fechaPubli;
}

void TelefonoMovil::setFechaPubli(const QDate &value)
{
fechaPubli = value;
}

Usuario *TelefonoMovil::getVendedor() const
{
return vendedor;
}

void TelefonoMovil::setVendedor(Usuario *value)
{
vendedor = value;
}
