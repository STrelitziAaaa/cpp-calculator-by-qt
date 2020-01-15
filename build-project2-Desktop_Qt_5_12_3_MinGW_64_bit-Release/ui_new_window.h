/********************************************************************************
** Form generated from reading UI file 'new_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_WINDOW_H
#define UI_NEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_new_window
{
public:
    QTextEdit *input;
    QTextEdit *output;
    QPushButton *eval;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *new_window)
    {
        if (new_window->objectName().isEmpty())
            new_window->setObjectName(QString::fromUtf8("new_window"));
        new_window->resize(519, 378);
        new_window->setStyleSheet(QString::fromUtf8("background-color:#dff9fb"));
        input = new QTextEdit(new_window);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(20, 70, 331, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        input->setFont(font);
        input->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        input->setStyleSheet(QString::fromUtf8("background-color:white"));
        input->setFrameShape(QFrame::Box);
        input->setFrameShadow(QFrame::Sunken);
        input->setLineWidth(1);
        input->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        output = new QTextEdit(new_window);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(350, 70, 161, 201));
        output->setFont(font);
        output->setStyleSheet(QString::fromUtf8("background-color:white"));
        output->setFrameShape(QFrame::Box);
        output->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        output->setLineWrapMode(QTextEdit::WidgetWidth);
        output->setReadOnly(true);
        eval = new QPushButton(new_window);
        eval->setObjectName(QString::fromUtf8("eval"));
        eval->setGeometry(QRect(380, 300, 101, 51));
        eval->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border : 0px;\n"
"background-color:#95afc0;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:#c7ecee;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	padding-left:3px;\n"
"    padding-top:3px;\n"
"}"));
        eval->setAutoDefault(false);
        lineEdit = new QLineEdit(new_window);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 331, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        lineEdit->setFont(font1);
        lineEdit->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit->setStyleSheet(QString::fromUtf8("color:#dff9fb;\n"
"background-color:#7ed6df;\n"
"border :1px;\n"
"border-buttom-color:#16a085;\n"
""));
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(new_window);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 30, 161, 41));
        lineEdit_2->setFont(font1);
        lineEdit_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#dff9fb;\n"
"background-color:#7ed6df;\n"
"border :1px;\n"
"border-buttom-color:#16a085;\n"
""));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(true);

        retranslateUi(new_window);

        eval->setDefault(false);


        QMetaObject::connectSlotsByName(new_window);
    } // setupUi

    void retranslateUi(QDialog *new_window)
    {
        new_window->setWindowTitle(QApplication::translate("new_window", "Dialog", nullptr));
        input->setPlaceholderText(QString());
        output->setPlaceholderText(QString());
        eval->setText(QApplication::translate("new_window", "evaluate", nullptr));
        lineEdit->setText(QApplication::translate("new_window", "input", nullptr));
        lineEdit_2->setText(QApplication::translate("new_window", "output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_window: public Ui_new_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_WINDOW_H
