/********************************************************************************
** Form generated from reading UI file 'textotraduzidowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTOTRADUZIDOWIDGET_H
#define UI_TEXTOTRADUZIDOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextoTraduzidoWidget
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel;

    void setupUi(QDialog *TextoTraduzidoWidget)
    {
        if (TextoTraduzidoWidget->objectName().isEmpty())
            TextoTraduzidoWidget->setObjectName(QString::fromUtf8("TextoTraduzidoWidget"));
        TextoTraduzidoWidget->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/guirato.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextoTraduzidoWidget->setWindowIcon(icon);
        pushButton = new QPushButton(TextoTraduzidoWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 260, 75, 23));
        label = new QLabel(TextoTraduzidoWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 81, 16));
        horizontalLayoutWidget = new QWidget(TextoTraduzidoWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 40, 301, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textLabel = new QLabel(horizontalLayoutWidget);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setFocusPolicy(Qt::NoFocus);
        textLabel->setStyleSheet(QString::fromUtf8("text-align: top;"));
        textLabel->setFrameShape(QFrame::NoFrame);
        textLabel->setLineWidth(2);
        textLabel->setTextFormat(Qt::AutoText);
        textLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textLabel->setWordWrap(true);
        textLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(textLabel);


        retranslateUi(TextoTraduzidoWidget);

        QMetaObject::connectSlotsByName(TextoTraduzidoWidget);
    } // setupUi

    void retranslateUi(QDialog *TextoTraduzidoWidget)
    {
        TextoTraduzidoWidget->setWindowTitle(QCoreApplication::translate("TextoTraduzidoWidget", "Tradu\303\247\303\243o", nullptr));
        pushButton->setText(QCoreApplication::translate("TextoTraduzidoWidget", "Ok!", nullptr));
        label->setText(QCoreApplication::translate("TextoTraduzidoWidget", "Texto traduzido:", nullptr));
        textLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TextoTraduzidoWidget: public Ui_TextoTraduzidoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTOTRADUZIDOWIDGET_H
