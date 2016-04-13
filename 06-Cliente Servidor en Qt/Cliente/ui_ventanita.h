/********************************************************************************
** Form generated from reading UI file 'ventanita.ui'
**
** Created: Thu Aug 11 14:23:49 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANITA_H
#define UI_VENTANITA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ventanita
{
public:
    QPushButton *botonCerrar;
    QPushButton *botonEnviar;
    QLineEdit *lineaEntrada;

    void setupUi(QDialog *Ventanita)
    {
        if (Ventanita->objectName().isEmpty())
            Ventanita->setObjectName(QString::fromUtf8("Ventanita"));
        Ventanita->resize(331, 117);
        botonCerrar = new QPushButton(Ventanita);
        botonCerrar->setObjectName(QString::fromUtf8("botonCerrar"));
        botonCerrar->setGeometry(QRect(50, 70, 93, 29));
        botonEnviar = new QPushButton(Ventanita);
        botonEnviar->setObjectName(QString::fromUtf8("botonEnviar"));
        botonEnviar->setGeometry(QRect(190, 70, 93, 29));
        lineaEntrada = new QLineEdit(Ventanita);
        lineaEntrada->setObjectName(QString::fromUtf8("lineaEntrada"));
        lineaEntrada->setGeometry(QRect(20, 20, 291, 31));

        retranslateUi(Ventanita);

        QMetaObject::connectSlotsByName(Ventanita);
    } // setupUi

    void retranslateUi(QDialog *Ventanita)
    {
        Ventanita->setWindowTitle(QApplication::translate("Ventanita", "Dialog", 0, QApplication::UnicodeUTF8));
        botonCerrar->setText(QApplication::translate("Ventanita", "Cerrar", 0, QApplication::UnicodeUTF8));
        botonEnviar->setText(QApplication::translate("Ventanita", "Enviar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ventanita: public Ui_Ventanita {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANITA_H
