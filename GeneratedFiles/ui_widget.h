/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Mon Jul 2 12:27:40 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *fontsizecomboBox;
    QToolButton *textbold;
    QToolButton *textitalic;
    QToolButton *textUnderline;
    QToolButton *textcolor;
    QToolButton *sendfile;
    QToolButton *save;
    QToolButton *clear;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QPushButton *send;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *onlineUser;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(788, 468);
        horizontalLayout_4 = new QHBoxLayout(Widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setFrameShadow(QFrame::Sunken);
        textBrowser->setOpenExternalLinks(false);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy1);
        fontComboBox->setMinimumSize(QSize(1, 25));

        horizontalLayout->addWidget(fontComboBox);

        fontsizecomboBox = new QComboBox(Widget);
        fontsizecomboBox->setObjectName(QString::fromUtf8("fontsizecomboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontsizecomboBox->sizePolicy().hasHeightForWidth());
        fontsizecomboBox->setSizePolicy(sizePolicy2);
        fontsizecomboBox->setMinimumSize(QSize(0, 25));
        fontsizecomboBox->setEditable(true);

        horizontalLayout->addWidget(fontsizecomboBox);

        textbold = new QToolButton(Widget);
        textbold->setObjectName(QString::fromUtf8("textbold"));
        textbold->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        textbold->setIcon(icon);
        textbold->setIconSize(QSize(24, 24));
        textbold->setCheckable(true);
        textbold->setAutoRaise(true);

        horizontalLayout->addWidget(textbold);

        textitalic = new QToolButton(Widget);
        textitalic->setObjectName(QString::fromUtf8("textitalic"));
        textitalic->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        textitalic->setIcon(icon1);
        textitalic->setIconSize(QSize(24, 24));
        textitalic->setCheckable(true);
        textitalic->setAutoRaise(true);

        horizontalLayout->addWidget(textitalic);

        textUnderline = new QToolButton(Widget);
        textUnderline->setObjectName(QString::fromUtf8("textUnderline"));
        textUnderline->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        textUnderline->setIcon(icon2);
        textUnderline->setIconSize(QSize(24, 24));
        textUnderline->setCheckable(true);
        textUnderline->setAutoRaise(true);

        horizontalLayout->addWidget(textUnderline);

        textcolor = new QToolButton(Widget);
        textcolor->setObjectName(QString::fromUtf8("textcolor"));
        textcolor->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/textcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        textcolor->setIcon(icon3);
        textcolor->setIconSize(QSize(24, 24));
        textcolor->setCheckable(false);
        textcolor->setAutoRaise(true);

        horizontalLayout->addWidget(textcolor);

        sendfile = new QToolButton(Widget);
        sendfile->setObjectName(QString::fromUtf8("sendfile"));
        sendfile->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendfile->setIcon(icon4);
        sendfile->setIconSize(QSize(24, 24));
        sendfile->setCheckable(false);
        sendfile->setAutoRaise(true);

        horizontalLayout->addWidget(sendfile);

        save = new QToolButton(Widget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/Floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon5);
        save->setIconSize(QSize(24, 24));
        save->setCheckable(false);
        save->setAutoRaise(true);

        horizontalLayout->addWidget(save);

        clear = new QToolButton(Widget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setAutoFillBackground(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/Bin (empty).png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon6);
        clear->setIconSize(QSize(24, 24));
        clear->setCheckable(false);
        clear->setAutoRaise(true);

        horizontalLayout->addWidget(clear);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        close = new QPushButton(Widget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(close);

        send = new QPushButton(Widget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(send);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/User.png"), QSize(), QIcon::Normal, QIcon::On);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setIcon(icon7);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        onlineUser = new QLabel(Widget);
        onlineUser->setObjectName(QString::fromUtf8("onlineUser"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(onlineUser->sizePolicy().hasHeightForWidth());
        onlineUser->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(onlineUser);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        retranslateUi(Widget);

        fontsizecomboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\261\200\345\237\237\347\275\221\350\201\212\345\244\251", 0, QApplication::UnicodeUTF8));
        fontsizecomboBox->clear();
        fontsizecomboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "22", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        textbold->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textbold->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textitalic->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textitalic->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textUnderline->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textUnderline->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textcolor->setToolTip(QApplication::translate("Widget", "\345\255\227\344\275\223\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textcolor->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendfile->setToolTip(QApplication::translate("Widget", "\344\274\240\351\200\201\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sendfile->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        save->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        save->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clear->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("Widget", "\345\205\263\351\227\255(&C)", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201(&S)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\344\277\241\346\201\257\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        onlineUser->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
