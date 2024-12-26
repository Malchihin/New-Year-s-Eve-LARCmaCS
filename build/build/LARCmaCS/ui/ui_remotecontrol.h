/********************************************************************************
** Form generated from reading UI file 'remotecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTECONTROL_H
#define UI_REMOTECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteControl
{
public:
    QGroupBox *GB_remote;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_state;
    QLabel *label_2;

    void setupUi(QWidget *RemoteControl)
    {
        if (RemoteControl->objectName().isEmpty())
            RemoteControl->setObjectName(QString::fromUtf8("RemoteControl"));
        RemoteControl->resize(227, 132);
        GB_remote = new QGroupBox(RemoteControl);
        GB_remote->setObjectName(QString::fromUtf8("GB_remote"));
        GB_remote->setGeometry(QRect(0, 0, 221, 121));
        GB_remote->setFlat(false);
        label_3 = new QLabel(GB_remote);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 201, 20));
        label = new QLabel(GB_remote);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 24, 14));
        label_4 = new QLabel(GB_remote);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 60, 27, 14));
        label_5 = new QLabel(GB_remote);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 60, 18, 14));
        label_6 = new QLabel(GB_remote);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 60, 111, 16));
        label_state = new QLabel(GB_remote);
        label_state->setObjectName(QString::fromUtf8("label_state"));
        label_state->setGeometry(QRect(20, 20, 191, 16));
        label_2 = new QLabel(GB_remote);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 111, 16));

        retranslateUi(RemoteControl);

        QMetaObject::connectSlotsByName(RemoteControl);
    } // setupUi

    void retranslateUi(QWidget *RemoteControl)
    {
        RemoteControl->setWindowTitle(QCoreApplication::translate("RemoteControl", "Form", nullptr));
        GB_remote->setTitle(QCoreApplication::translate("RemoteControl", "Remote control", nullptr));
        label_3->setText(QCoreApplication::translate("RemoteControl", "space - \"kick\", shift+\342\206\221\342\206\223 - \"effort\"", nullptr));
        label->setText(QCoreApplication::translate("RemoteControl", "\342\206\221 - w", nullptr));
        label_4->setText(QCoreApplication::translate("RemoteControl", "\342\206\220 - a", nullptr));
        label_5->setText(QCoreApplication::translate("RemoteControl", "\342\206\223- s", nullptr));
        label_6->setText(QCoreApplication::translate("RemoteControl", "\342\206\222 - d  ", nullptr));
        label_state->setText(QCoreApplication::translate("RemoteControl", "state", nullptr));
        label_2->setText(QCoreApplication::translate("RemoteControl", "r, f - rotate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoteControl: public Ui_RemoteControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTECONTROL_H
