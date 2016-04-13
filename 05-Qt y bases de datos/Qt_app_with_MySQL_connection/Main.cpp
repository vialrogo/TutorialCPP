#include "MysqlConection.h"
#include <QVector>
#include <QString>

int main (){
	
	MysqlConection* myconn = new MysqlConection();
	bool ok;
	QVector<QString*> salidaConsulta;
	QString* arregloValores = new QString();
	
	if(myconn->hayDriver())
	{
		ok = myconn->conectar("localhost", "prueba", "root", "root");
		
		if(ok)
		{
			salidaConsulta = myconn->consulta("select * from tabla;");
			
			for(int i=0; i<salidaConsulta.size(); i++ )
			{
				arregloValores = salidaConsulta.at(i);
				
				//De la forma como lo implementé hay que saber la cantidad de columnas
				//de salida de antemano, aunque eso se sabe cuando se hace la consulta
				qDebug() << arregloValores[0] << "\t" << arregloValores[1];
			}
			
			myconn->desconectar();
		}
		else
			qDebug("No se pudo conectar a la base de datos =(");
	}
	else
		qDebug("No encontró el driver =(");
	
	return 0;
}