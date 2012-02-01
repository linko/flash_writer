/********************************************************************************
** Form generated from reading UI file 'qtoverwritedialog.ui'
**
** Created: Sat Feb 19 22:50:07 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOVERWRITEDIALOG_H
#define UI_QTOVERWRITEDIALOG_H

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

class Ui_QtOverwriteDialog
{
public:
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *iconLabel;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *sourceFileLabel;
    QLabel *destinationFileLabel;
    QLineEdit *destLineEdit;
    QLineEdit *sourceLineEdit;
    QLabel *label_2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *skipButton;
    QPushButton *skipAllButton;
    QPushButton *overwriteButton;
    QPushButton *overwriteAllButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QtOverwriteDialog)
    {
        if (QtOverwriteDialog->objectName().isEmpty())
            QtOverwriteDialog->setObjectName(QString::fromUtf8("QtOverwriteDialog"));
        QtOverwriteDialog->resize(305, 83);
        widget = new QWidget(QtOverwriteDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 83, 519, 33));
        vboxLayout = new QVBoxLayout(QtOverwriteDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        iconLabel = new QLabel(QtOverwriteDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        hboxLayout->addWidget(iconLabel);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(QtOverwriteDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(QtOverwriteDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sourceFileLabel = new QLabel(QtOverwriteDialog);
        sourceFileLabel->setObjectName(QString::fromUtf8("sourceFileLabel"));

        gridLayout->addWidget(sourceFileLabel, 0, 2, 1, 1);

        destinationFileLabel = new QLabel(QtOverwriteDialog);
        destinationFileLabel->setObjectName(QString::fromUtf8("destinationFileLabel"));

        gridLayout->addWidget(destinationFileLabel, 1, 2, 1, 1);

        destLineEdit = new QLineEdit(QtOverwriteDialog);
        destLineEdit->setObjectName(QString::fromUtf8("destLineEdit"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(destLineEdit->sizePolicy().hasHeightForWidth());
        destLineEdit->setSizePolicy(sizePolicy);
        destLineEdit->setFocusPolicy(Qt::NoFocus);
        destLineEdit->setReadOnly(true);

        gridLayout->addWidget(destLineEdit, 1, 1, 1, 1);

        sourceLineEdit = new QLineEdit(QtOverwriteDialog);
        sourceLineEdit->setObjectName(QString::fromUtf8("sourceLineEdit"));
        sizePolicy.setHeightForWidth(sourceLineEdit->sizePolicy().hasHeightForWidth());
        sourceLineEdit->setSizePolicy(sizePolicy);
        sourceLineEdit->setFocusPolicy(Qt::NoFocus);
        sourceLineEdit->setReadOnly(true);

        gridLayout->addWidget(sourceLineEdit, 0, 1, 1, 1);


        hboxLayout->addLayout(gridLayout);


        vboxLayout->addLayout(hboxLayout);

        label_2 = new QLabel(QtOverwriteDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label_2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(48, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        skipButton = new QPushButton(QtOverwriteDialog);
        skipButton->setObjectName(QString::fromUtf8("skipButton"));

        hboxLayout1->addWidget(skipButton);

        skipAllButton = new QPushButton(QtOverwriteDialog);
        skipAllButton->setObjectName(QString::fromUtf8("skipAllButton"));

        hboxLayout1->addWidget(skipAllButton);

        overwriteButton = new QPushButton(QtOverwriteDialog);
        overwriteButton->setObjectName(QString::fromUtf8("overwriteButton"));

        hboxLayout1->addWidget(overwriteButton);

        overwriteAllButton = new QPushButton(QtOverwriteDialog);
        overwriteAllButton->setObjectName(QString::fromUtf8("overwriteAllButton"));

        hboxLayout1->addWidget(overwriteAllButton);

        cancelButton = new QPushButton(QtOverwriteDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(QtOverwriteDialog);

        QMetaObject::connectSlotsByName(QtOverwriteDialog);
    } // setupUi

    void retranslateUi(QDialog *QtOverwriteDialog)
    {
        QtOverwriteDialog->setWindowTitle(QApplication::translate("QtOverwriteDialog", "Copy Warning", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
        label_3->setText(QApplication::translate("QtOverwriteDialog", "Destination", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QtOverwriteDialog", "Source", 0, QApplication::UnicodeUTF8));
        sourceFileLabel->setText(QApplication::translate("QtOverwriteDialog", "[sourceFile]", 0, QApplication::UnicodeUTF8));
        destinationFileLabel->setText(QApplication::translate("QtOverwriteDialog", "[destinationFile]", 0, QApplication::UnicodeUTF8));
        destLineEdit->setText(QString());
        label_2->setText(QApplication::translate("QtOverwriteDialog", "Destination already exists.", 0, QApplication::UnicodeUTF8));
        skipButton->setText(QApplication::translate("QtOverwriteDialog", "Skip", 0, QApplication::UnicodeUTF8));
        skipAllButton->setText(QApplication::translate("QtOverwriteDialog", "Skip All", 0, QApplication::UnicodeUTF8));
        overwriteButton->setText(QApplication::translate("QtOverwriteDialog", "Overwrite", 0, QApplication::UnicodeUTF8));
        overwriteAllButton->setText(QApplication::translate("QtOverwriteDialog", "Overwrite All", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("QtOverwriteDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtOverwriteDialog: public Ui_QtOverwriteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOVERWRITEDIALOG_H
