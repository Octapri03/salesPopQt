#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>

class Database
{
public:
	Database();
	

	bool connect();
	void close();
	bool insert(const QString &, const QString &);
	bool update(const QString &, int, int);
	bool remove(const QString &);
	void selectAll();
	
private:
	QSqlDatabase db;
};

#endif
