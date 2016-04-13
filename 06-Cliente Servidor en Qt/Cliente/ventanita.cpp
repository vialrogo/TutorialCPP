#include "ventanita.h"
#include "ui_ventanita.h"

Ventanita::Ventanita(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventanita)
{
    ui->setupUi(this);

	//Los datos de puerto y IP se definen de manera directa aquí dada la sencillez del ejemplo, sin embargo en una
	//buena implementación es aconsejable que sean ingresados por el usuario.
	cliente = new Cliente(5500, QHostAddress("127.0.0.1"));

    connect(ui->botonEnviar,SIGNAL(clicked()),SLOT(enviarDatos()));
    connect(ui->botonCerrar,SIGNAL(clicked()),SLOT(close()));
}

Ventanita::~Ventanita()
{
    delete ui;
}

void Ventanita::enviarDatos()
{
    QString entrada = ui->lineaEntrada->text();
    cliente->enviarPeticion(QString(entrada));
}
