#include "PostgreSQLConection.h"
#include <QVector>
#include <QString>

int main (){
	
	PostgreSQLConection* pgconn = new PostgreSQLConection();
	bool ok;
	QVector<QString*> salidaConsulta;
	QString* arregloValores = new QString();
	
	if(pgconn->hayDriver())
	{
		ok = pgconn->conectar("localhost", "prueba", "admin", "admin");
		
		if(ok)
		{
			salidaConsulta = pgconn->consulta("select * from tabla;");
			
			for(int i=0; i<salidaConsulta.size(); i++ )
			{
				arregloValores = salidaConsulta.at(i);
				
				//De la forma como lo implementé hay que saber la cantidad de columnas
				//de salida de antemano, aunque eso se sabe cuando se hace la consulta
				qDebug() << arregloValores[0] << "\t" << arregloValores[1];
			}
			
			pgconn->desconectar();
		}
		else
			qDebug("No se pudo conectar a la base de datos =(");
	}
	else
		qDebug("No encontró el driver =(");
	
	return 0;
}