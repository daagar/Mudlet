/********************************************************************************
** Form generated from reading UI file 'composer.ui'
**
** Created: Sun Aug 21 15:41:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPOSER_H
#define UI_COMPOSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_composer
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *titel;
    QPlainTextEdit *edit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *composer)
    {
        if (composer->objectName().isEmpty())
            composer->setObjectName(QString::fromUtf8("composer"));
        composer->resize(588, 424);
        centralwidget = new QWidget(composer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titel = new QLineEdit(centralwidget);
        titel->setObjectName(QString::fromUtf8("titel"));
        QPalette palette;
        QBrush brush(QColor(255, 241, 199, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        titel->setPalette(palette);
        titel->setAutoFillBackground(true);
        titel->setAlignment(Qt::AlignCenter);
        titel->setReadOnly(true);

        verticalLayout->addWidget(titel);

        edit = new QPlainTextEdit(centralwidget);
        edit->setObjectName(QString::fromUtf8("edit"));

        verticalLayout->addWidget(edit);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(375, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cancelButton);

        saveButton = new QPushButton(widget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(saveButton);


        verticalLayout->addWidget(widget);

        composer->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(composer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        composer->setStatusBar(statusbar);

        retranslateUi(composer);

        QMetaObject::connectSlotsByName(composer);
    } // setupUi

    void retranslateUi(QMainWindow *composer)
    {
        composer->setWindowTitle(QApplication::translate("composer", "News & Message Composer", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("composer", "Cancel", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("composer", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class composer: public Ui_composer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPOSER_H
