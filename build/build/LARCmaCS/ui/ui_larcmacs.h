/********************************************************************************
** Form generated from reading UI file 'larcmacs.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LARCMACS_H
#define UI_LARCMACS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LARCmaCS
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QGraphicsView *fieldView;
    QSlider *sceneslider;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *but_reference;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox_SimEnable;
    QLabel *label;
    QLineEdit *lineEditSimIP;
    QLabel *label_2;
    QLineEdit *lineEditSimPort;
    QLabel *label_7;
    QLineEdit *lineEditSimPortYellow;
    QLabel *label_2_1;
    QLineEdit *lineEditNetInterface;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *num1;
    QLabel *connection1;
    QLabel *battery1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *num2;
    QLabel *connection2;
    QLabel *battery2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *num3;
    QLabel *connection3;
    QLabel *battery3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *num4;
    QLabel *connection4;
    QLabel *battery4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *num5;
    QLabel *connection5;
    QLabel *battery5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *num6;
    QLabel *connection6;
    QLabel *battery6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *matlabConsoleLabel;
    QLineEdit *matlabOutputFrequencyLineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *matlabConsole;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_SetMLdir;
    QPushButton *pushButton_Pause;
    QLabel *label_Pause;
    QLineEdit *lineEditRobotIp;
    QPushButton *pushButton_RemoteControl;
    QHBoxLayout *horizontalLayout_15;
    QLabel *StatusLabel;
    QLabel *label_SSL_FPS;
    QLabel *labelscenesize;

    void setupUi(QWidget *LARCmaCS)
    {
        if (LARCmaCS->objectName().isEmpty())
            LARCmaCS->setObjectName(QString::fromUtf8("LARCmaCS"));
        LARCmaCS->resize(1080, 810);
        LARCmaCS->setToolTipDuration(-1);
        verticalLayout = new QVBoxLayout(LARCmaCS);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(11, -1, 11, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fieldView = new QGraphicsView(LARCmaCS);
        fieldView->setObjectName(QString::fromUtf8("fieldView"));

        verticalLayout_5->addWidget(fieldView);

        sceneslider = new QSlider(LARCmaCS);
        sceneslider->setObjectName(QString::fromUtf8("sceneslider"));
        sceneslider->setMinimum(1);
        sceneslider->setMaximum(20);
        sceneslider->setValue(8);
        sceneslider->setSliderPosition(8);
        sceneslider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(sceneslider);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        but_reference = new QPushButton(LARCmaCS);
        but_reference->setObjectName(QString::fromUtf8("but_reference"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(but_reference->sizePolicy().hasHeightForWidth());
        but_reference->setSizePolicy(sizePolicy);
        but_reference->setMinimumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../bin/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        but_reference->setIcon(icon);

        horizontalLayout_2->addWidget(but_reference);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        checkBox_SimEnable = new QCheckBox(LARCmaCS);
        checkBox_SimEnable->setObjectName(QString::fromUtf8("checkBox_SimEnable"));
        checkBox_SimEnable->setEnabled(true);
        checkBox_SimEnable->setChecked(false);

        verticalLayout_7->addWidget(checkBox_SimEnable);

        label = new QLabel(LARCmaCS);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        lineEditSimIP = new QLineEdit(LARCmaCS);
        lineEditSimIP->setObjectName(QString::fromUtf8("lineEditSimIP"));

        verticalLayout_7->addWidget(lineEditSimIP);

        label_2 = new QLabel(LARCmaCS);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_7->addWidget(label_2);

        lineEditSimPort = new QLineEdit(LARCmaCS);
        lineEditSimPort->setObjectName(QString::fromUtf8("lineEditSimPort"));

        verticalLayout_7->addWidget(lineEditSimPort);

        label_7 = new QLabel(LARCmaCS);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        lineEditSimPortYellow = new QLineEdit(LARCmaCS);
        lineEditSimPortYellow->setObjectName(QString::fromUtf8("lineEditSimPortYellow"));

        verticalLayout_7->addWidget(lineEditSimPortYellow);

        label_2_1 = new QLabel(LARCmaCS);
        label_2_1->setObjectName(QString::fromUtf8("label_2_1"));

        verticalLayout_7->addWidget(label_2_1);

        lineEditNetInterface = new QLineEdit(LARCmaCS);
        lineEditNetInterface->setObjectName(QString::fromUtf8("lineEditNetInterface"));

        verticalLayout_7->addWidget(lineEditNetInterface);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(LARCmaCS);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        label_6 = new QLabel(LARCmaCS);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        label_5 = new QLabel(LARCmaCS);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_11->addWidget(label_5);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        num1 = new QLabel(LARCmaCS);
        num1->setObjectName(QString::fromUtf8("num1"));

        horizontalLayout->addWidget(num1);

        connection1 = new QLabel(LARCmaCS);
        connection1->setObjectName(QString::fromUtf8("connection1"));

        horizontalLayout->addWidget(connection1);

        battery1 = new QLabel(LARCmaCS);
        battery1->setObjectName(QString::fromUtf8("battery1"));

        horizontalLayout->addWidget(battery1);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        num2 = new QLabel(LARCmaCS);
        num2->setObjectName(QString::fromUtf8("num2"));

        horizontalLayout_6->addWidget(num2);

        connection2 = new QLabel(LARCmaCS);
        connection2->setObjectName(QString::fromUtf8("connection2"));

        horizontalLayout_6->addWidget(connection2);

        battery2 = new QLabel(LARCmaCS);
        battery2->setObjectName(QString::fromUtf8("battery2"));

        horizontalLayout_6->addWidget(battery2);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        num3 = new QLabel(LARCmaCS);
        num3->setObjectName(QString::fromUtf8("num3"));

        horizontalLayout_10->addWidget(num3);

        connection3 = new QLabel(LARCmaCS);
        connection3->setObjectName(QString::fromUtf8("connection3"));

        horizontalLayout_10->addWidget(connection3);

        battery3 = new QLabel(LARCmaCS);
        battery3->setObjectName(QString::fromUtf8("battery3"));

        horizontalLayout_10->addWidget(battery3);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        num4 = new QLabel(LARCmaCS);
        num4->setObjectName(QString::fromUtf8("num4"));

        horizontalLayout_9->addWidget(num4);

        connection4 = new QLabel(LARCmaCS);
        connection4->setObjectName(QString::fromUtf8("connection4"));

        horizontalLayout_9->addWidget(connection4);

        battery4 = new QLabel(LARCmaCS);
        battery4->setObjectName(QString::fromUtf8("battery4"));

        horizontalLayout_9->addWidget(battery4);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        num5 = new QLabel(LARCmaCS);
        num5->setObjectName(QString::fromUtf8("num5"));

        horizontalLayout_8->addWidget(num5);

        connection5 = new QLabel(LARCmaCS);
        connection5->setObjectName(QString::fromUtf8("connection5"));

        horizontalLayout_8->addWidget(connection5);

        battery5 = new QLabel(LARCmaCS);
        battery5->setObjectName(QString::fromUtf8("battery5"));

        horizontalLayout_8->addWidget(battery5);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        num6 = new QLabel(LARCmaCS);
        num6->setObjectName(QString::fromUtf8("num6"));

        horizontalLayout_7->addWidget(num6);

        connection6 = new QLabel(LARCmaCS);
        connection6->setObjectName(QString::fromUtf8("connection6"));

        horizontalLayout_7->addWidget(connection6);

        battery6 = new QLabel(LARCmaCS);
        battery6->setObjectName(QString::fromUtf8("battery6"));

        horizontalLayout_7->addWidget(battery6);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(0, 10);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        matlabConsoleLabel = new QLabel(LARCmaCS);
        matlabConsoleLabel->setObjectName(QString::fromUtf8("matlabConsoleLabel"));

        horizontalLayout_3->addWidget(matlabConsoleLabel);

        matlabOutputFrequencyLineEdit = new QLineEdit(LARCmaCS);
        matlabOutputFrequencyLineEdit->setObjectName(QString::fromUtf8("matlabOutputFrequencyLineEdit"));
        matlabOutputFrequencyLineEdit->setMaximumSize(QSize(50, 16777215));
        matlabOutputFrequencyLineEdit->setMaxLength(20);

        horizontalLayout_3->addWidget(matlabOutputFrequencyLineEdit);

        label_3 = new QLabel(LARCmaCS);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        matlabConsole = new QPlainTextEdit(LARCmaCS);
        matlabConsole->setObjectName(QString::fromUtf8("matlabConsole"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(matlabConsole->sizePolicy().hasHeightForWidth());
        matlabConsole->setSizePolicy(sizePolicy1);
        matlabConsole->setContextMenuPolicy(Qt::CustomContextMenu);
        matlabConsole->setReadOnly(true);

        verticalLayout_4->addWidget(matlabConsole);


        horizontalLayout_13->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_SetMLdir = new QPushButton(LARCmaCS);
        pushButton_SetMLdir->setObjectName(QString::fromUtf8("pushButton_SetMLdir"));

        verticalLayout_3->addWidget(pushButton_SetMLdir);

        pushButton_Pause = new QPushButton(LARCmaCS);
        pushButton_Pause->setObjectName(QString::fromUtf8("pushButton_Pause"));

        verticalLayout_3->addWidget(pushButton_Pause);

        label_Pause = new QLabel(LARCmaCS);
        label_Pause->setObjectName(QString::fromUtf8("label_Pause"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Pause->sizePolicy().hasHeightForWidth());
        label_Pause->setSizePolicy(sizePolicy2);
        label_Pause->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(18);
        label_Pause->setFont(font);
        label_Pause->setFocusPolicy(Qt::NoFocus);
        label_Pause->setLayoutDirection(Qt::LeftToRight);
        label_Pause->setFrameShape(QFrame::WinPanel);
        label_Pause->setTextFormat(Qt::AutoText);
        label_Pause->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_Pause);

        lineEditRobotIp = new QLineEdit(LARCmaCS);
        lineEditRobotIp->setObjectName(QString::fromUtf8("lineEditRobotIp"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditRobotIp->sizePolicy().hasHeightForWidth());
        lineEditRobotIp->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(lineEditRobotIp);

        pushButton_RemoteControl = new QPushButton(LARCmaCS);
        pushButton_RemoteControl->setObjectName(QString::fromUtf8("pushButton_RemoteControl"));

        verticalLayout_3->addWidget(pushButton_RemoteControl);


        horizontalLayout_13->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        StatusLabel = new QLabel(LARCmaCS);
        StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
        StatusLabel->setFrameShape(QFrame::Box);
        StatusLabel->setFrameShadow(QFrame::Plain);

        horizontalLayout_15->addWidget(StatusLabel);

        label_SSL_FPS = new QLabel(LARCmaCS);
        label_SSL_FPS->setObjectName(QString::fromUtf8("label_SSL_FPS"));
        label_SSL_FPS->setFrameShape(QFrame::Box);
        label_SSL_FPS->setFrameShadow(QFrame::Plain);

        horizontalLayout_15->addWidget(label_SSL_FPS);

        labelscenesize = new QLabel(LARCmaCS);
        labelscenesize->setObjectName(QString::fromUtf8("labelscenesize"));

        horizontalLayout_15->addWidget(labelscenesize);

        horizontalLayout_15->setStretch(0, 10);
        horizontalLayout_15->setStretch(1, 10);
        horizontalLayout_15->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_15);

        verticalLayout->setStretch(0, 50);
        verticalLayout->setStretch(3, 1);

        retranslateUi(LARCmaCS);
        QObject::connect(sceneslider, SIGNAL(valueChanged(int)), labelscenesize, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(LARCmaCS);
    } // setupUi

    void retranslateUi(QWidget *LARCmaCS)
    {
        LARCmaCS->setWindowTitle(QCoreApplication::translate("LARCmaCS", "LARCmaCS", nullptr));
        but_reference->setText(QString());
        checkBox_SimEnable->setText(QCoreApplication::translate("LARCmaCS", "Enable Simulator", nullptr));
        label->setText(QCoreApplication::translate("LARCmaCS", "Simulator IP", nullptr));
        lineEditSimIP->setText(QCoreApplication::translate("LARCmaCS", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("LARCmaCS", "Blue port", nullptr));
        lineEditSimPort->setText(QCoreApplication::translate("LARCmaCS", "10301", nullptr));
        label_7->setText(QCoreApplication::translate("LARCmaCS", "Yellow port", nullptr));
        lineEditSimPortYellow->setText(QCoreApplication::translate("LARCmaCS", "10302", nullptr));
        label_2_1->setText(QCoreApplication::translate("LARCmaCS", "Network interface", nullptr));
        lineEditNetInterface->setText(QCoreApplication::translate("LARCmaCS", "eth0", nullptr));
        label_4->setText(QCoreApplication::translate("LARCmaCS", "Robot", nullptr));
        label_6->setText(QCoreApplication::translate("LARCmaCS", "Connection", nullptr));
        label_5->setText(QCoreApplication::translate("LARCmaCS", "Charge", nullptr));
        num1->setText(QCoreApplication::translate("LARCmaCS", "1", nullptr));
        connection1->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery1->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        num2->setText(QCoreApplication::translate("LARCmaCS", "2", nullptr));
        connection2->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery2->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        num3->setText(QCoreApplication::translate("LARCmaCS", "3", nullptr));
        connection3->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery3->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        num4->setText(QCoreApplication::translate("LARCmaCS", "4", nullptr));
        connection4->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery4->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        num5->setText(QCoreApplication::translate("LARCmaCS", "5", nullptr));
        connection5->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery5->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        num6->setText(QCoreApplication::translate("LARCmaCS", "6", nullptr));
        connection6->setText(QCoreApplication::translate("LARCmaCS", "No", nullptr));
        battery6->setText(QCoreApplication::translate("LARCmaCS", "0", nullptr));
        matlabConsoleLabel->setText(QCoreApplication::translate("LARCmaCS", "Matlab Console |  Update every", nullptr));
        matlabOutputFrequencyLineEdit->setText(QCoreApplication::translate("LARCmaCS", "100", nullptr));
        label_3->setText(QCoreApplication::translate("LARCmaCS", "frame(s)", nullptr));
        pushButton_SetMLdir->setText(QCoreApplication::translate("LARCmaCS", "Set MatLab Directory", nullptr));
        pushButton_Pause->setText(QCoreApplication::translate("LARCmaCS", "Matlab_Pause", nullptr));
        label_Pause->setText(QCoreApplication::translate("LARCmaCS", "---", nullptr));
        lineEditRobotIp->setInputMask(QString());
        lineEditRobotIp->setText(QCoreApplication::translate("LARCmaCS", "192.168.43.10", nullptr));
        pushButton_RemoteControl->setText(QCoreApplication::translate("LARCmaCS", "Remote control", nullptr));
        StatusLabel->setText(QString());
        label_SSL_FPS->setText(QString());
        labelscenesize->setText(QCoreApplication::translate("LARCmaCS", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LARCmaCS: public Ui_LARCmaCS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LARCMACS_H
