/* 
 * File:   PostgreSQLConection.h
 * Author: vialrogo
 * 
 */

#ifndef _POSTGRESQLCONECTION_H
#define	_POSTGRESQLCONECTION_H

#include <QtSql>
#include <QVector>

class PostgreSQLConection
{
    public:
        PostgreSQLConection();
        virtual ~PostgreSQLConection();
        bool hayDriver();
        bool conectar(QString hostname, QString Database, QString username, QString passwd);
        void desconectar();
        QVector<QString*> consulta(QString consulta,bool debug=false);
        bool insercion(QString insertion,bool debug=false);
        bool actualizacion(QString insertion,bool debug=false);
        bool eliminacion(QString deletion,bool debug=false);
        QString ultimoId();
    private:
        QSqlDatabase db;
        QSqlQuery* query;
};

#endif	/* _POSTGRESQLCONECTION_H */

