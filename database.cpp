#include "database.h"
#include <QVariant>

Database::Database()
{

}



bool Database::connect()
{
	db = QSqlDatabase::addDatabase("QPSQL");
	db.setHostName("192.168.8.231");
	db.setDatabaseName("wallapop");
	db.setUserName("wallapop");
	db.setPassword("1234");
	
	if(!db.open()) {
		qDebug()<<"Conectado correctamente!!!";
		return false;
	}
	
	return true;
}

void Database::close()
{
	db.close();
}

bool Database::insert(const QString &name, const QString &email)
{
	QSqlQuery query;
	query.prepare("INSERT INTO personas (nombre,email) VALUES (:name, :email)");
	query.bindValue(":name", QVariant(name));
	query.bindValue(":email", QVariant(email));
	return query.exec();	
}

bool Database::update(const QString &name, int id, int age)
{
		
}

bool Database::remove(const QString &name)
{
	QSqlQuery query;
	query.prepare("DELETE FROM persona WHERE name = :name");
	
	return query.exec();	
}
void selectAll(){
	


}

