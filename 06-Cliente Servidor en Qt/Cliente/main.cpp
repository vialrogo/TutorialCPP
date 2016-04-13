/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail:     vialrogo@gmail.com		|
	+---------------------------------------+

	Archivo main de ejemplo Cliente-Servidor, lado del Cliente

	En este ejemplo se ve una implementación simple del esquema Cliente-Servidor a través de una conexión udp mediante
	sockets. El lado del cliente posee una interfáz gráfica mediante la cual puede mandar mensajes que posteriormente
	serán recibidos por el servidor, el cual mostrará el mensaje recibido por consola. Note que:

	- El servidor debe ESTAR CORRIENDO cuando se ejecute el cliente para que se establezca la comunicación

	- El puerto de comunicación desta definido de manera hardcode como 5500.

	- No hay distinción para múltiples clientes, aunque Qt lo permite (para esto se puede remitir a los ejemplos
	  incluidos en QtDemo, los cuales contienen un servidor completo).

	- Es muy importante recordar que para poder compilar este proyecto, en los archivos .pro tanto del cliente, como
	  del servidor hay que incluir la opción network en las librerías de compilación al final de la lista, así:

			QT += ... network

	  Si esto no se hace, el compilador no encontrará las clases relacionadas con sockets.

 */

#include "ventanita.h"

 int main(int argc, char **argv)
 {
     QApplication app(argc, argv);

     Ventanita ventana;
     ventana.show();

     return app.exec();
 }
