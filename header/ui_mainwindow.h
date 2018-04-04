/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *fenetres;
    QWidget *accueil;
    QPushButton *demarrer;
    QPushButton *source;
    QLabel *txtAcceuil;
    QWidget *source1;
    QWidget *widget;
    QTextBrowser *textBrowser;
    QPushButton *suite;
    QLabel *chat;
    QWidget *source2;
    QLabel *label_2;
    QLabel *label_4;
    QListView *patronus_norm;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QListView *patronus_rares;
    QWidget *fin;
    QLabel *text_fin;
    QLabel *titre_fin;
    QLabel *image_fin;
    QWidget *quiz;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *choix3;
    QPushButton *choix1;
    QPushButton *choix2;
    QPushButton *son;
    QPushButton *accueil1;
    QPushButton *quitter;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 470);
        QPalette palette;
        QBrush brush(QColor(48, 48, 48, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(72, 72, 72, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(243, 243, 243, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(211, 215, 207, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        QBrush brush4(QColor(238, 238, 236, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(190, 190, 190, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fenetres = new QStackedWidget(centralWidget);
        fenetres->setObjectName(QStringLiteral("fenetres"));
        fenetres->setGeometry(QRect(0, 0, 591, 441));
        QPalette palette1;
        QBrush brush6(QColor(0, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        fenetres->setPalette(palette1);
        accueil = new QWidget();
        accueil->setObjectName(QStringLiteral("accueil"));
        demarrer = new QPushButton(accueil);
        demarrer->setObjectName(QStringLiteral("demarrer"));
        demarrer->setGeometry(QRect(230, 190, 121, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        demarrer->setPalette(palette2);
        source = new QPushButton(accueil);
        source->setObjectName(QStringLiteral("source"));
        source->setGeometry(QRect(490, 410, 88, 27));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        source->setPalette(palette3);
        txtAcceuil = new QLabel(accueil);
        txtAcceuil->setObjectName(QStringLiteral("txtAcceuil"));
        txtAcceuil->setEnabled(true);
        txtAcceuil->setGeometry(QRect(120, 10, 321, 191));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        txtAcceuil->setPalette(palette4);
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(20);
        txtAcceuil->setFont(font);
        txtAcceuil->setScaledContents(false);
        txtAcceuil->setAlignment(Qt::AlignCenter);
        txtAcceuil->setWordWrap(true);
        fenetres->addWidget(accueil);
        source1 = new QWidget();
        source1->setObjectName(QStringLiteral("source1"));
        widget = new QWidget(source1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 0, 221, 151));
        textBrowser = new QTextBrowser(source1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 531, 351));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        textBrowser->setPalette(palette5);
        QFont font1;
        font1.setFamily(QStringLiteral("Monotype Corsiva"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        textBrowser->setFont(font1);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setFrameShape(QFrame::VLine);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(0);
        suite = new QPushButton(source1);
        suite->setObjectName(QStringLiteral("suite"));
        suite->setGeometry(QRect(490, 410, 88, 27));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        suite->setPalette(palette6);
        chat = new QLabel(source1);
        chat->setObjectName(QStringLiteral("chat"));
        chat->setGeometry(QRect(270, 30, 271, 231));
        chat->setPixmap(QPixmap(QString::fromUtf8("../../temp_dir/data/images/chat.png")));
        chat->setScaledContents(true);
        fenetres->addWidget(source1);
        textBrowser->raise();
        widget->raise();
        suite->raise();
        chat->raise();
        source2 = new QWidget();
        source2->setObjectName(QStringLiteral("source2"));
        label_2 = new QLabel(source2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 461, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Monotype Corsiva"));
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_4 = new QLabel(source2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 171, 21));
        label_4->setFont(font2);
        patronus_norm = new QListView(source2);
        patronus_norm->setObjectName(QStringLiteral("patronus_norm"));
        patronus_norm->setGeometry(QRect(20, 90, 151, 271));
        QPalette palette7;
        patronus_norm->setPalette(palette7);
        patronus_norm->setFont(font2);
        patronus_norm->setStyleSheet(QStringLiteral(""));
        patronus_norm->setLineWidth(1);
        patronus_norm->setEditTriggers(QAbstractItemView::NoEditTriggers);
        patronus_norm->setProperty("showDropIndicator", QVariant(false));
        patronus_norm->setProperty("isWrapping", QVariant(true));
        patronus_norm->setWordWrap(true);
        label_5 = new QLabel(source2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 131, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Monotype Corsiva"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_6 = new QLabel(source2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 60, 131, 21));
        label_6->setFont(font3);
        textBrowser_2 = new QTextBrowser(source2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(210, 380, 351, 61));
        textBrowser_2->setFont(font2);
        patronus_rares = new QListView(source2);
        patronus_rares->setObjectName(QStringLiteral("patronus_rares"));
        patronus_rares->setGeometry(QRect(190, 90, 371, 271));
        QPalette palette8;
        patronus_rares->setPalette(palette8);
        patronus_rares->setFont(font2);
        patronus_rares->setStyleSheet(QStringLiteral(""));
        patronus_rares->setLineWidth(2);
        patronus_rares->setEditTriggers(QAbstractItemView::NoEditTriggers);
        patronus_rares->setProperty("showDropIndicator", QVariant(false));
        patronus_rares->setWordWrap(true);
        fenetres->addWidget(source2);
        patronus_rares->raise();
        label_2->raise();
        label_4->raise();
        patronus_norm->raise();
        label_5->raise();
        label_6->raise();
        textBrowser_2->raise();
        fin = new QWidget();
        fin->setObjectName(QStringLiteral("fin"));
        text_fin = new QLabel(fin);
        text_fin->setObjectName(QStringLiteral("text_fin"));
        text_fin->setGeometry(QRect(280, 60, 301, 371));
        QPalette palette9;
        QBrush brush8(QColor(168, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        text_fin->setPalette(palette9);
        text_fin->setFont(font2);
        text_fin->setScaledContents(false);
        text_fin->setWordWrap(true);
        titre_fin = new QLabel(fin);
        titre_fin->setObjectName(QStringLiteral("titre_fin"));
        titre_fin->setGeometry(QRect(30, 40, 471, 61));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        titre_fin->setPalette(palette10);
        titre_fin->setFont(font);
        image_fin = new QLabel(fin);
        image_fin->setObjectName(QStringLiteral("image_fin"));
        image_fin->setGeometry(QRect(10, 100, 271, 261));
        image_fin->setPixmap(QPixmap(QString::fromUtf8("../../temp_dir/data/ImPatronus/mono.png")));
        fenetres->addWidget(fin);
        quiz = new QWidget();
        quiz->setObjectName(QStringLiteral("quiz"));
        label = new QLabel(quiz);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 351, 31));
        layoutWidget = new QWidget(quiz);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(111, 111, 391, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        choix3 = new QPushButton(layoutWidget);
        choix3->setObjectName(QStringLiteral("choix3"));
        choix3->setMinimumSize(QSize(0, 40));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        choix3->setPalette(palette11);

        verticalLayout->addWidget(choix3);

        choix1 = new QPushButton(layoutWidget);
        choix1->setObjectName(QStringLiteral("choix1"));
        choix1->setMinimumSize(QSize(0, 40));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        choix1->setPalette(palette12);

        verticalLayout->addWidget(choix1);

        choix2 = new QPushButton(layoutWidget);
        choix2->setObjectName(QStringLiteral("choix2"));
        choix2->setMinimumSize(QSize(0, 40));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        choix2->setPalette(palette13);

        verticalLayout->addWidget(choix2);

        fenetres->addWidget(quiz);
        son = new QPushButton(centralWidget);
        son->setObjectName(QStringLiteral("son"));
        son->setGeometry(QRect(510, 10, 51, 27));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        son->setPalette(palette14);
        accueil1 = new QPushButton(centralWidget);
        accueil1->setObjectName(QStringLiteral("accueil1"));
        accueil1->setGeometry(QRect(110, 410, 80, 23));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        accueil1->setPalette(palette15);
        quitter = new QPushButton(centralWidget);
        quitter->setObjectName(QStringLiteral("quitter"));
        quitter->setGeometry(QRect(20, 410, 80, 23));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        quitter->setPalette(palette16);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        fenetres->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        demarrer->setText(QApplication::translate("MainWindow", "Demarrer", nullptr));
        source->setText(QApplication::translate("MainWindow", "Source", nullptr));
        txtAcceuil->setText(QApplication::translate("MainWindow", "Des questions vont vous \303\252tre pos\303\251es afin de determiner votre patronus", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:9pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal; text-decoration: underline;\">Je remercie : </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Ines de Kerangal</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Thiebaut d'Augustin</s"
                        "pan></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Manon Dalaison</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Roland Maleville</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">OiseauRoch</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Alicia Capitani</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style="
                        "\" font-size:18pt; font-weight:400; font-style:normal;\">Mayeul d'Augustin</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:400; font-style:normal;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:400; font-style:normal;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:400; font-style:normal;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400; font-style:normal;\">Sans qui je n'aurais sans doute jamais fini ce projet =)</span></p></body></html>", nullptr));
        suite->setText(QApplication::translate("MainWindow", "Suite", nullptr));
        chat->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "D'apr\303\250s l'illustration d'Alicia Braumberger et le logiciel du site Pottermore", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Sources images modifi\303\251es :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Patronus normaux", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Patronus rares", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Vectorisation via le logiciel Inkscape</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">L'objectif de ce projet est de cr\303\251er un executable fonctionnel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Il est r\303\251serv\303\251 \303\240 un usage personel</span></p></body></html>", nullptr));
        text_fin->setText(QApplication::translate("MainWindow", "initialisation et test divers pour savoir si \303\247a marche oup pas", nullptr));
        titre_fin->setText(QApplication::translate("MainWindow", "Titre", nullptr));
        image_fin->setText(QString());
        label->setText(QString());
        choix3->setText(QApplication::translate("MainWindow", "choix3", nullptr));
        choix1->setText(QApplication::translate("MainWindow", "un texte tre long pour obliger le bouton \303\240 \303\252tre plus grand", nullptr));
        choix2->setText(QApplication::translate("MainWindow", "choix2", nullptr));
        son->setText(QApplication::translate("MainWindow", "mute", nullptr));
        accueil1->setText(QApplication::translate("MainWindow", "Accueil", nullptr));
        quitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
