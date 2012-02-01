/********************************************************************************
** Form generated from reading UI file 'qtotherdialog.ui'
**
** Created: Sat Feb 19 22:50:07 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOTHERDIALOG_H
#define UI_QTOTHERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOtherDialog
{
public:
    QWidget *widget;
    QWidget *widget1;
    QWidget *widget2;
    QWidget *widget3;
    QWidget *widget4;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *iconLabel;
    QLineEdit *destLineEdit;
    QLabel *label;
    QLineEdit *sourceLineEdit;
    QLabel *label_3;
    QLabel *messageLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *retryButton;
    QPushButton *skipButton;
    QPushButton *skipAllButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QtOtherDialog)
    {
        if (QtOtherDialog->objectName().isEmpty())
            QtOtherDialog->setObjectName(QString::fromUtf8("QtOtherDialog"));
        QtOtherDialog->resize(267, 100);
        widget = new QWidget(QtOtherDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 83, 519, 33));
        widget1 = new QWidget(QtOtherDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 154, 456, 33));
        widget2 = new QWidget(QtOtherDialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(9, 9, 480, 70));
        widget3 = new QWidget(QtOtherDialog);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(16, 10, 472, 68));
        widget4 = new QWidget(QtOtherDialog);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(10, 10, 331, 94));
        vboxLayout = new QVBoxLayout(QtOtherDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iconLabel = new QLabel(QtOtherDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        gridLayout->addWidget(iconLabel, 0, 0, 2, 1);

        destLineEdit = new QLineEdit(QtOtherDialog);
        destLineEdit->setObjectName(QString::fromUtf8("destLineEdit"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(destLineEdit->sizePolicy().hasHeightForWidth());
        destLineEdit->setSizePolicy(sizePolicy);
        destLineEdit->setFocusPolicy(Qt::NoFocus);
        destLineEdit->setReadOnly(true);

        gridLayout->addWidget(destLineEdit, 1, 2, 1, 1);

        label = new QLabel(QtOtherDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        sourceLineEdit = new QLineEdit(QtOtherDialog);
        sourceLineEdit->setObjectName(QString::fromUtf8("sourceLineEdit"));
        sizePolicy.setHeightForWidth(sourceLineEdit->sizePolicy().hasHeightForWidth());
        sourceLineEdit->setSizePolicy(sizePolicy);
        sourceLineEdit->setFocusPolicy(Qt::NoFocus);
        sourceLineEdit->setReadOnly(true);

        gridLayout->addWidget(sourceLineEdit, 0, 2, 1, 1);

        label_3 = new QLabel(QtOtherDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        messageLabel = new QLabel(QtOtherDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(messageLabel);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(16, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        retryButton = new QPushButton(QtOtherDialog);
        retryButton->setObjectName(QString::fromUtf8("retryButton"));

        hboxLayout->addWidget(retryButton);

        skipButton = new QPushButton(QtOtherDialog);
        skipButton->setObjectName(QString::fromUtf8("skipButton"));

        hboxLayout->addWidget(skipButton);

        skipAllButton = new QPushButton(QtOtherDialog);
        skipAllButton->setObjectName(QString::fromUtf8("skipAllButton"));

        hboxLayout->addWidget(skipAllButton);

        cancelButton = new QPushButton(QtOtherDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(QtOtherDialog);

        QMetaObject::connectSlotsByName(QtOtherDialog);
    } // setupUi

    void retranslateUi(QDialog *QtOtherDialog)
    {
        QtOtherDialog->setWindowTitle(QApplication::translate("QtOtherDialog", "File Already Exists", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
        destLineEdit->setText(QString());
        label->setText(QApplication::translate("QtOtherDialog", "Source", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QtOtherDialog", "Destination", 0, QApplication::UnicodeUTF8));
        messageLabel->setText(QApplication::translate("QtOtherDialog", "Destination file already exists.", 0, QApplication::UnicodeUTF8));
        retryButton->setText(QApplication::translate("QtOtherDialog", "Retry", 0, QApplication::UnicodeUTF8));
        skipButton->setText(QApplication::translate("QtOtherDialog", "Skip", 0, QApplication::UnicodeUTF8));
        skipAllButton->setText(QApplication::translate("QtOtherDialog", "Skip All", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("QtOtherDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtOtherDialog: public Ui_QtOtherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOTHERDIALOG_H
