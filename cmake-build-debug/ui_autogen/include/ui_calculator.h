/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button7;
    QPushButton *Button5;
    QPushButton *SMath4;
    QPushButton *SMath3;
    QPushButton *Button9;
    QPushButton *SMath2;
    QPushButton *Button1;
    QPushButton *Button8;
    QPushButton *Equals;
    QPushButton *Button4;
    QPushButton *Button6;
    QPushButton *Sign;
    QPushButton *SMath5;
    QPushButton *Root;
    QPushButton *Button0;
    QPushButton *PrimeCheck;
    QPushButton *Button3;
    QPushButton *SMath1;
    QLineEdit *ResultDisp;
    QPushButton *Button2;
    QPushButton *Clear;
    QPushButton *Point;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(363, 376);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	color: black;\n"
"	background-color: black;\n"
"}"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Symbol")});
        font.setPointSize(14);
        font.setBold(false);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button7, 4, 1, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button5, 5, 2, 1, 1);

        SMath4 = new QPushButton(centralwidget);
        SMath4->setObjectName("SMath4");
        sizePolicy1.setHeightForWidth(SMath4->sizePolicy().hasHeightForWidth());
        SMath4->setSizePolicy(sizePolicy1);
        SMath4->setFont(font);
        SMath4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(SMath4, 6, 4, 1, 1);

        SMath3 = new QPushButton(centralwidget);
        SMath3->setObjectName("SMath3");
        sizePolicy1.setHeightForWidth(SMath3->sizePolicy().hasHeightForWidth());
        SMath3->setSizePolicy(sizePolicy1);
        SMath3->setFont(font);
        SMath3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(SMath3, 8, 4, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button9, 4, 3, 1, 1);

        SMath2 = new QPushButton(centralwidget);
        SMath2->setObjectName("SMath2");
        sizePolicy1.setHeightForWidth(SMath2->sizePolicy().hasHeightForWidth());
        SMath2->setSizePolicy(sizePolicy1);
        SMath2->setFont(font);
        SMath2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(SMath2, 5, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button1, 6, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button8, 4, 2, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #33C971;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #6dd196;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3fcc79;\n"
"}"));

        gridLayout->addWidget(Equals, 8, 6, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button4, 5, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button6, 5, 3, 1, 1);

        Sign = new QPushButton(centralwidget);
        Sign->setObjectName("Sign");
        sizePolicy1.setHeightForWidth(Sign->sizePolicy().hasHeightForWidth());
        Sign->setSizePolicy(sizePolicy1);
        Sign->setFont(font);
        Sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(Sign, 8, 5, 1, 1);

        SMath5 = new QPushButton(centralwidget);
        SMath5->setObjectName("SMath5");
        sizePolicy1.setHeightForWidth(SMath5->sizePolicy().hasHeightForWidth());
        SMath5->setSizePolicy(sizePolicy1);
        SMath5->setFont(font);
        SMath5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(SMath5, 4, 5, 1, 2);

        Root = new QPushButton(centralwidget);
        Root->setObjectName("Root");
        sizePolicy1.setHeightForWidth(Root->sizePolicy().hasHeightForWidth());
        Root->setSizePolicy(sizePolicy1);
        Root->setFont(font);
        Root->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(Root, 5, 5, 1, 2);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button0, 8, 1, 1, 1);

        PrimeCheck = new QPushButton(centralwidget);
        PrimeCheck->setObjectName("PrimeCheck");
        sizePolicy1.setHeightForWidth(PrimeCheck->sizePolicy().hasHeightForWidth());
        PrimeCheck->setSizePolicy(sizePolicy1);
        PrimeCheck->setFont(font);
        PrimeCheck->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(PrimeCheck, 6, 5, 1, 2);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button3, 6, 3, 1, 1);

        SMath1 = new QPushButton(centralwidget);
        SMath1->setObjectName("SMath1");
        sizePolicy1.setHeightForWidth(SMath1->sizePolicy().hasHeightForWidth());
        SMath1->setSizePolicy(sizePolicy1);
        SMath1->setFont(font);
        SMath1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: #FD9505;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #fcb751;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffaa2e;\n"
"}"));

        gridLayout->addWidget(SMath1, 4, 4, 1, 1);

        ResultDisp = new QLineEdit(centralwidget);
        ResultDisp->setObjectName("ResultDisp");
        sizePolicy.setHeightForWidth(ResultDisp->sizePolicy().hasHeightForWidth());
        ResultDisp->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Symbol")});
        font1.setPointSize(20);
        ResultDisp->setFont(font1);
        ResultDisp->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: black;\n"
"	border-radius: 5px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}"));
        ResultDisp->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(ResultDisp, 0, 1, 1, 6);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Button2, 6, 2, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setFont(font);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #B65163;\n"
"	background-color: #301B1E;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #211315;\n"
"	background-color: #8f515a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #63383e;\n"
"}"));

        gridLayout->addWidget(Clear, 8, 3, 1, 1);

        Point = new QPushButton(centralwidget);
        Point->setObjectName("Point");
        sizePolicy1.setHeightForWidth(Point->sizePolicy().hasHeightForWidth());
        Point->setSizePolicy(sizePolicy1);
        Point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #232529;	\n"
"	border-radius: 15px;\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: black;\n"
"	background-color: #808796;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: white;\n"
"	background-color: #43474f;\n"
"}"));

        gridLayout->addWidget(Point, 8, 2, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        ResultDisp->raise();
        Button9->raise();
        Button6->raise();
        Button1->raise();
        Button2->raise();
        SMath4->raise();
        Button7->raise();
        SMath1->raise();
        SMath5->raise();
        SMath2->raise();
        Button4->raise();
        Button8->raise();
        Button5->raise();
        Button3->raise();
        Equals->raise();
        Root->raise();
        PrimeCheck->raise();
        SMath3->raise();
        Sign->raise();
        Button0->raise();
        Clear->raise();
        Point->raise();
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 363, 22));
        Calculator->setMenuBar(menubar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        SMath4->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        SMath3->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        SMath2->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Sign->setText(QCoreApplication::translate("Calculator", "\302\261", nullptr));
        SMath5->setText(QCoreApplication::translate("Calculator", "x\342\201\277", nullptr));
        Root->setText(QCoreApplication::translate("Calculator", "\342\210\232x", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        PrimeCheck->setText(QCoreApplication::translate("Calculator", "prime-check", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        SMath1->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        ResultDisp->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Point->setText(QCoreApplication::translate("Calculator", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
