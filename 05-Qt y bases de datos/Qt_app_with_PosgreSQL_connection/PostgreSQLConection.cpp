/* 
 * File:   PostgreSQLConection.cpp
 * Author: vialrogo
 * 
 */

#include "PostgreSQLConection.h"

PostgreSQLConection::PostgreSQLConection()
{
}

PostgreSQLConection::~PostgreSQLConection()
{
    delete query;
}

bool PostgreSQLConection::hayDriver()
{
	return QSqlDatabase::isDriverAvailable("QPSQL");
}

bool PostgreSQLConection::conectar(QString hostname, QString Database, QString username, QString passwd)
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(hostname);
    db.setDatabaseName(Database);
    db.setUserName(username);
    db.setPassword(passwd);
    bool ok = db.open();
    query = new QSqlQuery(db);

    return ok;
}

void PostgreSQLConection::desconectar()
{
    QString nombreConeccion = db.connectionName();
    db.close();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(nombreConeccion);
}

QVector<QString*> PostgreSQLConection::consulta(QString consulta,bool debug)
{
//    qDebug(qPrintable(consulta));

    if(debug)
        qDebug() << "SQL > " << consulta;
    bool ok = query->exec(consulta);
    int size = query->size();
    int columnas = query->record().count();

    QVector<QString*> vector(0);

    if(ok)
    {
        for (int i = 0; i < size; i++)
        {
            QString* arreglo = new QString[columnas];
            query->next();
            for (int j = 0; j < columnas; j++)
            {
                arreglo[j] = query->value(j).toString();
            }
            vector.append(arreglo);
        }
    }
    else
        qDebug("Error, no pudo realizar la consulta");

    
    return vector;
}
bool PostgreSQLConection::insercion(QString insertion,bool debug)
{
    insertion.replace(QString("''"), QString("NULL"));
//    qDebug(qPrintable(insertion));
    if(debug)
        qDebug() << "SQL=>" << insertion;
    return query->exec(insertion);
}

QString PostgreSQLConection::ultimoId(){
    QVariant v = query->lastInsertId();
    if(!v.isNull())
        return v.toString();
    return 0;
}

bool PostgreSQLConection::eliminacion(QString deletion,bool debug)
{
    if(debug)
        qDebug() << "SQL=>" << deletion;
    return query->exec(deletion);
}

bool PostgreSQLConection::actualizacion(QString insertion,bool debug)
{
    insertion.replace(QString("''"), QString("NULL"));
//    qDebug(qPrintable(insertion));
    if(debug)
        qDebug() << "SQL=>" << insertion;
    return query->exec(insertion);
}