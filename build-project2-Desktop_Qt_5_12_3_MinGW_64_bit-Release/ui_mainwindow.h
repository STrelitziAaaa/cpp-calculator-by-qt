/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionquick_test;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *old_display_window;
    QLineEdit *display_window;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *op_power;
    QPushButton *op_factorial;
    QPushButton *num_7;
    QPushButton *num_9;
    QPushButton *op_add;
    QPushButton *op_cls;
    QPushButton *op_sin;
    QPushButton *num_2;
    QPushButton *op_left_bracket;
    QPushButton *op_backspace;
    QPushButton *num_0;
    QPushButton *op_cos;
    QPushButton *num_3;
    QPushButton *op_equal;
    QPushButton *op_divide;
    QPushButton *op_multiply;
    QPushButton *num_4;
    QPushButton *op_mod;
    QPushButton *num_5;
    QPushButton *op_minus;
    QPushButton *num_6;
    QPushButton *op_right_bracket;
    QPushButton *num_1;
    QPushButton *num_8;
    QMenuBar *menuBar;
    QMenu *menucalculator;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(444, 600);
        MainWindow->setMinimumSize(QSize(380, 570));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionquick_test = new QAction(MainWindow);
        actionquick_test->setObjectName(QString::fromUtf8("actionquick_test"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        old_display_window = new QLineEdit(centralWidget);
        old_display_window->setObjectName(QString::fromUtf8("old_display_window"));
        old_display_window->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        old_display_window->setFont(font);
        old_display_window->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 179, 200);\n"
""));
        old_display_window->setFrame(false);
        old_display_window->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        old_display_window->setReadOnly(true);

        verticalLayout_3->addWidget(old_display_window);

        display_window = new QLineEdit(centralWidget);
        display_window->setObjectName(QString::fromUtf8("display_window"));
        display_window->setMinimumSize(QSize(0, 70));
        display_window->setSizeIncrement(QSize(0, 0));
        display_window->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(22);
        display_window->setFont(font1);
        display_window->setCursor(QCursor(Qt::IBeamCursor));
        display_window->setLayoutDirection(Qt::LeftToRight);
        display_window->setAutoFillBackground(false);
        display_window->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 179, 200);\n"
""));
        display_window->setFrame(false);
        display_window->setEchoMode(QLineEdit::Normal);
        display_window->setCursorPosition(1);
        display_window->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        display_window->setReadOnly(true);
        display_window->setCursorMoveStyle(Qt::LogicalMoveStyle);
        display_window->setClearButtonEnabled(false);

        verticalLayout_3->addWidget(display_window);

        horizontalSpacer = new QSpacerItem(419, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, -1, 0, 0);
        op_power = new QPushButton(centralWidget);
        op_power->setObjectName(QString::fromUtf8("op_power"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(op_power->sizePolicy().hasHeightForWidth());
        op_power->setSizePolicy(sizePolicy);
        op_power->setMinimumSize(QSize(50, 50));
        op_power->setMaximumSize(QSize(5555, 5555));
        op_power->setFont(font);
        op_power->setAutoFillBackground(false);
        op_power->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_power->setCheckable(false);
        op_power->setAutoDefault(false);
        op_power->setFlat(false);

        gridLayout_2->addWidget(op_power, 0, 1, 1, 1);

        op_factorial = new QPushButton(centralWidget);
        op_factorial->setObjectName(QString::fromUtf8("op_factorial"));
        sizePolicy.setHeightForWidth(op_factorial->sizePolicy().hasHeightForWidth());
        op_factorial->setSizePolicy(sizePolicy);
        op_factorial->setMinimumSize(QSize(50, 50));
        op_factorial->setMaximumSize(QSize(5555, 5555));
        op_factorial->setFont(font);
        op_factorial->setAutoFillBackground(false);
        op_factorial->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_factorial->setCheckable(false);
        op_factorial->setAutoDefault(false);
        op_factorial->setFlat(false);

        gridLayout_2->addWidget(op_factorial, 0, 0, 1, 1);

        num_7 = new QPushButton(centralWidget);
        num_7->setObjectName(QString::fromUtf8("num_7"));
        num_7->setMinimumSize(QSize(50, 50));
        num_7->setMaximumSize(QSize(5555, 5555));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(20);
        num_7->setFont(font2);
        num_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_7, 5, 0, 1, 1);

        num_9 = new QPushButton(centralWidget);
        num_9->setObjectName(QString::fromUtf8("num_9"));
        num_9->setMinimumSize(QSize(50, 50));
        num_9->setMaximumSize(QSize(5555, 5555));
        num_9->setFont(font2);
        num_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_9, 5, 2, 1, 1);

        op_add = new QPushButton(centralWidget);
        op_add->setObjectName(QString::fromUtf8("op_add"));
        sizePolicy.setHeightForWidth(op_add->sizePolicy().hasHeightForWidth());
        op_add->setSizePolicy(sizePolicy);
        op_add->setMinimumSize(QSize(50, 50));
        op_add->setMaximumSize(QSize(5555, 5555));
        op_add->setFont(font);
        op_add->setAutoFillBackground(false);
        op_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_add->setCheckable(false);
        op_add->setAutoDefault(false);
        op_add->setFlat(false);

        gridLayout_2->addWidget(op_add, 1, 0, 1, 1);

        op_cls = new QPushButton(centralWidget);
        op_cls->setObjectName(QString::fromUtf8("op_cls"));
        sizePolicy.setHeightForWidth(op_cls->sizePolicy().hasHeightForWidth());
        op_cls->setSizePolicy(sizePolicy);
        op_cls->setMinimumSize(QSize(50, 50));
        op_cls->setMaximumSize(QSize(5555, 5555));
        op_cls->setFont(font);
        op_cls->setAutoFillBackground(false);
        op_cls->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_cls->setCheckable(false);
        op_cls->setAutoDefault(false);
        op_cls->setFlat(false);

        gridLayout_2->addWidget(op_cls, 0, 3, 1, 1);

        op_sin = new QPushButton(centralWidget);
        op_sin->setObjectName(QString::fromUtf8("op_sin"));
        op_sin->setMinimumSize(QSize(50, 50));
        op_sin->setMaximumSize(QSize(5555, 5555));
        op_sin->setStyleSheet(QString::fromUtf8("margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"\n"
"hover{\n"
"	background-color:#535c68;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_sin, 2, 0, 1, 1);

        num_2 = new QPushButton(centralWidget);
        num_2->setObjectName(QString::fromUtf8("num_2"));
        num_2->setMinimumSize(QSize(50, 50));
        num_2->setMaximumSize(QSize(5555, 5555));
        num_2->setFont(font2);
        num_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_2, 3, 1, 1, 1);

        op_left_bracket = new QPushButton(centralWidget);
        op_left_bracket->setObjectName(QString::fromUtf8("op_left_bracket"));
        op_left_bracket->setMinimumSize(QSize(50, 50));
        op_left_bracket->setMaximumSize(QSize(5555, 5555));
        op_left_bracket->setFont(font);
        op_left_bracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_left_bracket, 4, 3, 1, 1);

        op_backspace = new QPushButton(centralWidget);
        op_backspace->setObjectName(QString::fromUtf8("op_backspace"));
        sizePolicy.setHeightForWidth(op_backspace->sizePolicy().hasHeightForWidth());
        op_backspace->setSizePolicy(sizePolicy);
        op_backspace->setMinimumSize(QSize(50, 50));
        op_backspace->setMaximumSize(QSize(5555, 5555));
        op_backspace->setFont(font);
        op_backspace->setAutoFillBackground(false);
        op_backspace->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/backspace_outline_128px_1158538_easyicon.net.ico"), QSize(), QIcon::Normal, QIcon::Off);
        op_backspace->setIcon(icon);
        op_backspace->setIconSize(QSize(25, 25));
        op_backspace->setCheckable(false);
        op_backspace->setAutoDefault(false);
        op_backspace->setFlat(false);

        gridLayout_2->addWidget(op_backspace, 0, 2, 1, 1);

        num_0 = new QPushButton(centralWidget);
        num_0->setObjectName(QString::fromUtf8("num_0"));
        num_0->setMinimumSize(QSize(50, 50));
        num_0->setMaximumSize(QSize(5555, 5555));
        num_0->setFont(font2);
        num_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_0, 2, 1, 1, 1);

        op_cos = new QPushButton(centralWidget);
        op_cos->setObjectName(QString::fromUtf8("op_cos"));
        op_cos->setMinimumSize(QSize(50, 50));
        op_cos->setMaximumSize(QSize(5555, 5555));
        op_cos->setStyleSheet(QString::fromUtf8("margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"hover{\n"
"	background-color:#535c68;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_cos, 2, 2, 1, 1);

        num_3 = new QPushButton(centralWidget);
        num_3->setObjectName(QString::fromUtf8("num_3"));
        num_3->setMinimumSize(QSize(50, 50));
        num_3->setMaximumSize(QSize(5555, 5555));
        num_3->setFont(font2);
        num_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_3, 3, 2, 1, 1);

        op_equal = new QPushButton(centralWidget);
        op_equal->setObjectName(QString::fromUtf8("op_equal"));
        op_equal->setMinimumSize(QSize(50, 50));
        op_equal->setMaximumSize(QSize(5555, 5555));
        op_equal->setFont(font);
        op_equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_equal, 5, 3, 1, 1);

        op_divide = new QPushButton(centralWidget);
        op_divide->setObjectName(QString::fromUtf8("op_divide"));
        op_divide->setMinimumSize(QSize(50, 50));
        op_divide->setMaximumSize(QSize(5555, 5555));
        op_divide->setFont(font);
        op_divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_divide, 1, 3, 1, 1);

        op_multiply = new QPushButton(centralWidget);
        op_multiply->setObjectName(QString::fromUtf8("op_multiply"));
        sizePolicy.setHeightForWidth(op_multiply->sizePolicy().hasHeightForWidth());
        op_multiply->setSizePolicy(sizePolicy);
        op_multiply->setMinimumSize(QSize(50, 50));
        op_multiply->setMaximumSize(QSize(5555, 5555));
        op_multiply->setFont(font);
        op_multiply->setAutoFillBackground(false);
        op_multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_multiply->setCheckable(false);
        op_multiply->setAutoDefault(false);
        op_multiply->setFlat(false);

        gridLayout_2->addWidget(op_multiply, 1, 2, 1, 1);

        num_4 = new QPushButton(centralWidget);
        num_4->setObjectName(QString::fromUtf8("num_4"));
        num_4->setMinimumSize(QSize(50, 50));
        num_4->setMaximumSize(QSize(5555, 5555));
        num_4->setFont(font2);
        num_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_4, 4, 0, 1, 1);

        op_mod = new QPushButton(centralWidget);
        op_mod->setObjectName(QString::fromUtf8("op_mod"));
        op_mod->setMinimumSize(QSize(50, 50));
        op_mod->setMaximumSize(QSize(5555, 5555));
        op_mod->setFont(font);
        op_mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_mod, 2, 3, 1, 1);

        num_5 = new QPushButton(centralWidget);
        num_5->setObjectName(QString::fromUtf8("num_5"));
        num_5->setMinimumSize(QSize(50, 50));
        num_5->setMaximumSize(QSize(5555, 5555));
        num_5->setFont(font2);
        num_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_5, 4, 1, 1, 1);

        op_minus = new QPushButton(centralWidget);
        op_minus->setObjectName(QString::fromUtf8("op_minus"));
        sizePolicy.setHeightForWidth(op_minus->sizePolicy().hasHeightForWidth());
        op_minus->setSizePolicy(sizePolicy);
        op_minus->setMinimumSize(QSize(50, 50));
        op_minus->setMaximumSize(QSize(5555, 5555));
        op_minus->setFont(font);
        op_minus->setAutoFillBackground(false);
        op_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));
        op_minus->setInputMethodHints(Qt::ImhNone);
        op_minus->setCheckable(false);
        op_minus->setAutoRepeat(false);
        op_minus->setAutoExclusive(false);
        op_minus->setAutoDefault(false);
        op_minus->setFlat(false);

        gridLayout_2->addWidget(op_minus, 1, 1, 1, 1);

        num_6 = new QPushButton(centralWidget);
        num_6->setObjectName(QString::fromUtf8("num_6"));
        num_6->setMinimumSize(QSize(50, 50));
        num_6->setMaximumSize(QSize(5555, 5555));
        num_6->setFont(font2);
        num_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_6, 4, 2, 1, 1);

        op_right_bracket = new QPushButton(centralWidget);
        op_right_bracket->setObjectName(QString::fromUtf8("op_right_bracket"));
        op_right_bracket->setMinimumSize(QSize(50, 50));
        op_right_bracket->setMaximumSize(QSize(5555, 5555));
        op_right_bracket->setFont(font);
        op_right_bracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:1px;\n"
"border:0px;\n"
"background-color:#dfe4ea;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#ced6e0;\n"
"}\n"
""));

        gridLayout_2->addWidget(op_right_bracket, 3, 3, 1, 1);

        num_1 = new QPushButton(centralWidget);
        num_1->setObjectName(QString::fromUtf8("num_1"));
        num_1->setMinimumSize(QSize(50, 50));
        num_1->setMaximumSize(QSize(5555, 5555));
        num_1->setFont(font2);
        num_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_1, 3, 0, 1, 1);

        num_8 = new QPushButton(centralWidget);
        num_8->setObjectName(QString::fromUtf8("num_8"));
        num_8->setMinimumSize(QSize(50, 50));
        num_8->setMaximumSize(QSize(5555, 5555));
        num_8->setFont(font2);
        num_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"margin:3px;\n"
"border:0px;\n"
"border-color:rgb(232, 232, 232);\n"
"background-color:#f5f6fa;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#dfe6e9;\n"
"}"));

        gridLayout_2->addWidget(num_8, 5, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 444, 26));
        menucalculator = new QMenu(menuBar);
        menucalculator->setObjectName(QString::fromUtf8("menucalculator"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menucalculator->menuAction());
        menucalculator->addAction(actionquick_test);

        retranslateUi(MainWindow);

        op_power->setDefault(false);
        op_factorial->setDefault(false);
        op_add->setDefault(false);
        op_cls->setDefault(false);
        op_backspace->setDefault(false);
        op_divide->setDefault(false);
        op_multiply->setDefault(false);
        op_minus->setDefault(false);
        num_1->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator 1.0", nullptr));
        actionquick_test->setText(QApplication::translate("MainWindow", "quick_test", nullptr));
        old_display_window->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        display_window->setText(QApplication::translate("MainWindow", "0", nullptr));
        display_window->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        op_power->setText(QApplication::translate("MainWindow", "^", nullptr));
        op_factorial->setText(QApplication::translate("MainWindow", "!", nullptr));
        num_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        num_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        op_add->setText(QApplication::translate("MainWindow", "+", nullptr));
        op_cls->setText(QApplication::translate("MainWindow", "CLS", nullptr));
        op_sin->setText(QString());
        num_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        op_left_bracket->setText(QApplication::translate("MainWindow", ")", nullptr));
        op_backspace->setText(QString());
        num_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        op_cos->setText(QString());
        num_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        op_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        op_divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        op_multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        num_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        op_mod->setText(QApplication::translate("MainWindow", "%", nullptr));
        num_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        op_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        num_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        op_right_bracket->setText(QApplication::translate("MainWindow", "(", nullptr));
        num_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        num_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        menucalculator->setTitle(QApplication::translate("MainWindow", "quick_test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
