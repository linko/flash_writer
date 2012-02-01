/********************************************************************************
** Form generated from reading UI file 'qtcopydialog.ui'
**
** Created: Sat Feb 19 22:50:07 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCOPYDIALOG_H
#define UI_QTCOPYDIALOG_H

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
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtCopyDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *destLabel;
    QLineEdit *sourceLineEdit;
    QLabel *sourceLabel;
    QLineEdit *destLineEdit;
    QProgressBar *currentProgressBar;
    QProgressBar *totalProgressBar;
    QGridLayout *gridLayout1;
    QLabel *completedLabel;
    QLabel *filesLabel;
    QLabel *remainingLabel;
    QLabel *dirsLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *cancelButton;
    QPushButton *closeButton;

    void setupUi(QDialog *QtCopyDialog)
    {
        if (QtCopyDialog->objectName().isEmpty())
            QtCopyDialog->setObjectName(QString::fromUtf8("QtCopyDialog"));
        QtCopyDialog->resize(428, 147);
        QtCopyDialog->setMaximumSize(QSize(16777215, 16777215));
        vboxLayout = new QVBoxLayout(QtCopyDialog);
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
        destLabel = new QLabel(QtCopyDialog);
        destLabel->setObjectName(QString::fromUtf8("destLabel"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(destLabel->sizePolicy().hasHeightForWidth());
        destLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(destLabel, 1, 0, 1, 1);

        sourceLineEdit = new QLineEdit(QtCopyDialog);
        sourceLineEdit->setObjectName(QString::fromUtf8("sourceLineEdit"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sourceLineEdit->sizePolicy().hasHeightForWidth());
        sourceLineEdit->setSizePolicy(sizePolicy1);
        sourceLineEdit->setFocusPolicy(Qt::NoFocus);
        sourceLineEdit->setReadOnly(true);

        gridLayout->addWidget(sourceLineEdit, 0, 1, 1, 1);

        sourceLabel = new QLabel(QtCopyDialog);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));
        sizePolicy.setHeightForWidth(sourceLabel->sizePolicy().hasHeightForWidth());
        sourceLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sourceLabel, 0, 0, 1, 1);

        destLineEdit = new QLineEdit(QtCopyDialog);
        destLineEdit->setObjectName(QString::fromUtf8("destLineEdit"));
        sizePolicy1.setHeightForWidth(destLineEdit->sizePolicy().hasHeightForWidth());
        destLineEdit->setSizePolicy(sizePolicy1);
        destLineEdit->setFocusPolicy(Qt::NoFocus);
        destLineEdit->setReadOnly(true);

        gridLayout->addWidget(destLineEdit, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        currentProgressBar = new QProgressBar(QtCopyDialog);
        currentProgressBar->setObjectName(QString::fromUtf8("currentProgressBar"));
        currentProgressBar->setValue(24);

        vboxLayout->addWidget(currentProgressBar);

        totalProgressBar = new QProgressBar(QtCopyDialog);
        totalProgressBar->setObjectName(QString::fromUtf8("totalProgressBar"));
        totalProgressBar->setValue(24);

        vboxLayout->addWidget(totalProgressBar);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        completedLabel = new QLabel(QtCopyDialog);
        completedLabel->setObjectName(QString::fromUtf8("completedLabel"));

        gridLayout1->addWidget(completedLabel, 0, 0, 1, 1);

        filesLabel = new QLabel(QtCopyDialog);
        filesLabel->setObjectName(QString::fromUtf8("filesLabel"));
        filesLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(filesLabel, 0, 1, 1, 1);

        remainingLabel = new QLabel(QtCopyDialog);
        remainingLabel->setObjectName(QString::fromUtf8("remainingLabel"));

        gridLayout1->addWidget(remainingLabel, 1, 0, 1, 1);

        dirsLabel = new QLabel(QtCopyDialog);
        dirsLabel->setObjectName(QString::fromUtf8("dirsLabel"));
        dirsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(dirsLabel, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(221, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cancelButton = new QPushButton(QtCopyDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setEnabled(false);

        hboxLayout->addWidget(cancelButton);

        closeButton = new QPushButton(QtCopyDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        hboxLayout->addWidget(closeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(QtCopyDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), QtCopyDialog, SLOT(reject()));
        QObject::connect(closeButton, SIGNAL(clicked()), QtCopyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtCopyDialog);
    } // setupUi

    void retranslateUi(QDialog *QtCopyDialog)
    {
        QtCopyDialog->setWindowTitle(QApplication::translate("QtCopyDialog", "24% of 100MB (Copying...)", 0, QApplication::UnicodeUTF8));
        destLabel->setText(QApplication::translate("QtCopyDialog", "Destination", 0, QApplication::UnicodeUTF8));
        sourceLabel->setText(QApplication::translate("QtCopyDialog", "Source", 0, QApplication::UnicodeUTF8));
        destLineEdit->setText(QString());
        completedLabel->setText(QApplication::translate("QtCopyDialog", "10 MB of 100 MB completed", 0, QApplication::UnicodeUTF8));
        filesLabel->setText(QApplication::translate("QtCopyDialog", "2 / 5 files", 0, QApplication::UnicodeUTF8));
        remainingLabel->setText(QApplication::translate("QtCopyDialog", "5 MB/s (00:00:15 remaining)", 0, QApplication::UnicodeUTF8));
        dirsLabel->setText(QApplication::translate("QtCopyDialog", "0 / 1 dirs", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("QtCopyDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("QtCopyDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtCopyDialog: public Ui_QtCopyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCOPYDIALOG_H
