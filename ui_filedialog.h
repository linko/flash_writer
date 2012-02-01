/********************************************************************************
** Form generated from reading UI file 'filedialog.ui'
**
** Created: Sat Feb 19 22:50:07 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIALOG_H
#define UI_FILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *checkMediaButton;
    QLabel *label;
    QPushButton *formatButton;
    QLabel *label_3;
    QPushButton *copyFilesButton;
    QLabel *label_4_2;
    QPushButton *formatAndCopyButton;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *openFolder;
    QPushButton *runAll;
    QGroupBox *groupBox;
    QTextEdit *logArea;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeButton_2_2;
    QPushButton *unmountAllAndCloseButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *mount_mediaCount;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *selectAllUmountButton;
    QPushButton *uncheckAllUmount;
    QPushButton *clearLogButton;
    QPushButton *mountButton;
    QPushButton *umountButton;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *selectAllMountButton;
    QPushButton *uncheckAllMount;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *umount_mediaCount;
    QFrame *line;

    void setupUi(QDialog *FileDialog)
    {
        if (FileDialog->objectName().isEmpty())
            FileDialog->setObjectName(QString::fromUtf8("FileDialog"));
        FileDialog->resize(1014, 626);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FileDialog->sizePolicy().hasHeightForWidth());
        FileDialog->setSizePolicy(sizePolicy);
        FileDialog->setModal(true);
        formLayoutWidget = new QWidget(FileDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 462, 261));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_4);

        checkMediaButton = new QPushButton(formLayoutWidget);
        checkMediaButton->setObjectName(QString::fromUtf8("checkMediaButton"));
        checkMediaButton->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, checkMediaButton);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(3, QFormLayout::FieldRole, label);

        formatButton = new QPushButton(formLayoutWidget);
        formatButton->setObjectName(QString::fromUtf8("formatButton"));
        formatButton->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, formatButton);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_3);

        copyFilesButton = new QPushButton(formLayoutWidget);
        copyFilesButton->setObjectName(QString::fromUtf8("copyFilesButton"));
        copyFilesButton->setEnabled(false);

        formLayout->setWidget(5, QFormLayout::LabelRole, copyFilesButton);

        label_4_2 = new QLabel(formLayoutWidget);
        label_4_2->setObjectName(QString::fromUtf8("label_4_2"));

        formLayout->setWidget(5, QFormLayout::FieldRole, label_4_2);

        formatAndCopyButton = new QPushButton(formLayoutWidget);
        formatAndCopyButton->setObjectName(QString::fromUtf8("formatAndCopyButton"));
        formatAndCopyButton->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::LabelRole, formatAndCopyButton);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, label_5);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        openFolder = new QPushButton(formLayoutWidget);
        openFolder->setObjectName(QString::fromUtf8("openFolder"));

        formLayout->setWidget(0, QFormLayout::LabelRole, openFolder);

        runAll = new QPushButton(formLayoutWidget);
        runAll->setObjectName(QString::fromUtf8("runAll"));
        runAll->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::LabelRole, runAll);

        groupBox = new QGroupBox(FileDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(660, 10, 351, 571));
        logArea = new QTextEdit(groupBox);
        logArea->setObjectName(QString::fromUtf8("logArea"));
        logArea->setGeometry(QRect(0, 20, 351, 551));
        logArea->setReadOnly(true);
        verticalLayoutWidget = new QWidget(FileDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 300, 281, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(FileDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(710, 590, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        closeButton_2_2 = new QPushButton(horizontalLayoutWidget);
        closeButton_2_2->setObjectName(QString::fromUtf8("closeButton_2_2"));

        horizontalLayout->addWidget(closeButton_2_2);

        unmountAllAndCloseButton = new QPushButton(horizontalLayoutWidget);
        unmountAllAndCloseButton->setObjectName(QString::fromUtf8("unmountAllAndCloseButton"));
        unmountAllAndCloseButton->setEnabled(false);

        horizontalLayout->addWidget(unmountAllAndCloseButton);

        horizontalLayoutWidget_2 = new QWidget(FileDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(370, 280, 281, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        mount_mediaCount = new QLabel(horizontalLayoutWidget_2);
        mount_mediaCount->setObjectName(QString::fromUtf8("mount_mediaCount"));

        horizontalLayout_2->addWidget(mount_mediaCount);

        horizontalLayoutWidget_3 = new QWidget(FileDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 590, 281, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        selectAllUmountButton = new QPushButton(horizontalLayoutWidget_3);
        selectAllUmountButton->setObjectName(QString::fromUtf8("selectAllUmountButton"));
        selectAllUmountButton->setEnabled(false);

        horizontalLayout_3->addWidget(selectAllUmountButton);

        uncheckAllUmount = new QPushButton(horizontalLayoutWidget_3);
        uncheckAllUmount->setObjectName(QString::fromUtf8("uncheckAllUmount"));
        uncheckAllUmount->setEnabled(false);

        horizontalLayout_3->addWidget(uncheckAllUmount);

        clearLogButton = new QPushButton(FileDialog);
        clearLogButton->setObjectName(QString::fromUtf8("clearLogButton"));
        clearLogButton->setGeometry(QRect(500, 20, 158, 26));
        mountButton = new QPushButton(FileDialog);
        mountButton->setObjectName(QString::fromUtf8("mountButton"));
        mountButton->setEnabled(false);
        mountButton->setGeometry(QRect(290, 380, 80, 26));
        umountButton = new QPushButton(FileDialog);
        umountButton->setObjectName(QString::fromUtf8("umountButton"));
        umountButton->setEnabled(false);
        umountButton->setGeometry(QRect(290, 410, 80, 26));
        horizontalLayoutWidget_4 = new QWidget(FileDialog);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(370, 590, 281, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        selectAllMountButton = new QPushButton(horizontalLayoutWidget_4);
        selectAllMountButton->setObjectName(QString::fromUtf8("selectAllMountButton"));
        selectAllMountButton->setEnabled(false);

        horizontalLayout_6->addWidget(selectAllMountButton);

        uncheckAllMount = new QPushButton(horizontalLayoutWidget_4);
        uncheckAllMount->setObjectName(QString::fromUtf8("uncheckAllMount"));
        uncheckAllMount->setEnabled(false);

        horizontalLayout_6->addWidget(uncheckAllMount);

        verticalLayoutWidget_2 = new QWidget(FileDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 300, 281, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_5 = new QWidget(FileDialog);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 280, 281, 21));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        umount_mediaCount = new QLabel(horizontalLayoutWidget_5);
        umount_mediaCount->setObjectName(QString::fromUtf8("umount_mediaCount"));

        horizontalLayout_7->addWidget(umount_mediaCount);

        line = new QFrame(FileDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(7, 270, 651, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(FileDialog);
        QObject::connect(closeButton_2_2, SIGNAL(clicked()), FileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FileDialog);
    } // setupUi

    void retranslateUi(QDialog *FileDialog)
    {
        FileDialog->setWindowTitle(QApplication::translate("FileDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FileDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Step by step</span> --------------------------------------------------------------------------------------------</p></body></html>", 0, QApplication::UnicodeUTF8));
        checkMediaButton->setText(QApplication::translate("FileDialog", "Check", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FileDialog", "for all media devices", 0, QApplication::UnicodeUTF8));
        formatButton->setText(QApplication::translate("FileDialog", "Format", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FileDialog", "checked media", 0, QApplication::UnicodeUTF8));
        copyFilesButton->setText(QApplication::translate("FileDialog", "Copy", 0, QApplication::UnicodeUTF8));
        label_4_2->setText(QApplication::translate("FileDialog", "all files from src dir to selected media", 0, QApplication::UnicodeUTF8));
        formatAndCopyButton->setText(QApplication::translate("FileDialog", "Format and Copy", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FileDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Make all with one click </span>--------------------------------------------------------------------------</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FileDialog", "source folder:", 0, QApplication::UnicodeUTF8));
        openFolder->setText(QApplication::translate("FileDialog", "Open", 0, QApplication::UnicodeUTF8));
        runAll->setText(QApplication::translate("FileDialog", "GO", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FileDialog", "Log", 0, QApplication::UnicodeUTF8));
        closeButton_2_2->setText(QApplication::translate("FileDialog", "Close", 0, QApplication::UnicodeUTF8));
        unmountAllAndCloseButton->setText(QApplication::translate("FileDialog", "Unmount all media and Close", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FileDialog", "Total mounted count: ", 0, QApplication::UnicodeUTF8));
        mount_mediaCount->setText(QApplication::translate("FileDialog", "0", 0, QApplication::UnicodeUTF8));
        selectAllUmountButton->setText(QApplication::translate("FileDialog", "Select All", 0, QApplication::UnicodeUTF8));
        uncheckAllUmount->setText(QApplication::translate("FileDialog", "Uncheck All", 0, QApplication::UnicodeUTF8));
        clearLogButton->setText(QApplication::translate("FileDialog", "Clear Log", 0, QApplication::UnicodeUTF8));
        mountButton->setText(QApplication::translate("FileDialog", "Mount >>", 0, QApplication::UnicodeUTF8));
        umountButton->setText(QApplication::translate("FileDialog", "<< Umount", 0, QApplication::UnicodeUTF8));
        selectAllMountButton->setText(QApplication::translate("FileDialog", "Select All", 0, QApplication::UnicodeUTF8));
        uncheckAllMount->setText(QApplication::translate("FileDialog", "Uncheck All", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FileDialog", "Total unmounted count: ", 0, QApplication::UnicodeUTF8));
        umount_mediaCount->setText(QApplication::translate("FileDialog", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileDialog: public Ui_FileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIALOG_H
