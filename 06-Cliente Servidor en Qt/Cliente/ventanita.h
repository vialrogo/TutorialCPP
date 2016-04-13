#ifndef VENTANITA_H
#define VENTANITA_H

#include <QDialog>
#include "Cliente.h"

namespace Ui {
	class Ventanita; //permite usar el archivo ventanita.ui
}

class Ventanita : public QDialog
{
    Q_OBJECT

public:
    explicit Ventanita(QWidget *parent = 0);
    ~Ventanita();

private:
    Ui::Ventanita *ui;
    Cliente* cliente;

private slots:
    void enviarDatos();
};

#endif // VENTANITA_H
