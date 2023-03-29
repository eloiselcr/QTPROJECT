/********************************************************************************
** Form generated from reading UI file 'QtWidgets_Projet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETS_PROJET_H
#define UI_QTWIDGETS_PROJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgets_ProjetClass
{
public:
    QWidget *centralWidget;
    QPushButton *AfficheMessage;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Connexion;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QLabel *connectionStatusLabel;
    QPushButton *Envoyer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgets_ProjetClass)
    {
        if (QtWidgets_ProjetClass->objectName().isEmpty())
            QtWidgets_ProjetClass->setObjectName(QString::fromUtf8("QtWidgets_ProjetClass"));
        QtWidgets_ProjetClass->resize(627, 400);
        centralWidget = new QWidget(QtWidgets_ProjetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AfficheMessage = new QPushButton(centralWidget);
        AfficheMessage->setObjectName(QString::fromUtf8("AfficheMessage"));
        AfficheMessage->setGeometry(QRect(440, 240, 121, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 270, 121, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 30, 21, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 60, 31, 16));
        Connexion = new QPushButton(centralWidget);
        Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->setGeometry(QRect(70, 90, 131, 23));
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(90, 30, 113, 20));
        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(90, 60, 113, 20));
        connectionStatusLabel = new QLabel(centralWidget);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        connectionStatusLabel->setGeometry(QRect(270, 30, 341, 16));
        Envoyer = new QPushButton(centralWidget);
        Envoyer->setObjectName(QString::fromUtf8("Envoyer"));
        Envoyer->setGeometry(QRect(70, 160, 131, 23));
        QtWidgets_ProjetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgets_ProjetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 21));
        QtWidgets_ProjetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgets_ProjetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgets_ProjetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgets_ProjetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgets_ProjetClass->setStatusBar(statusBar);

        retranslateUi(QtWidgets_ProjetClass);
        QObject::connect(AfficheMessage, SIGNAL(clicked()), QtWidgets_ProjetClass, SLOT(OnDisplayMessageButtonClicked()));
        QObject::connect(Connexion, SIGNAL(clicked()), QtWidgets_ProjetClass, SLOT(OnConnectButtonClicked()));
        QObject::connect(Envoyer, SIGNAL(clicked()), QtWidgets_ProjetClass, SLOT(OnSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(QtWidgets_ProjetClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgets_ProjetClass)
    {
        QtWidgets_ProjetClass->setWindowTitle(QCoreApplication::translate("QtWidgets_ProjetClass", "QtWidgets_Projet", nullptr));
        AfficheMessage->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "Afficher Message", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "IP :", nullptr));
        label_3->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "Port : ", nullptr));
        Connexion->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "Connexion", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "Status connexion : D\303\251connect\303\251", nullptr));
        Envoyer->setText(QCoreApplication::translate("QtWidgets_ProjetClass", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgets_ProjetClass: public Ui_QtWidgets_ProjetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETS_PROJET_H
