#include "textotraduzidowidget.h"
#include "ui_textotraduzidowidget.h"
#include <iostream>

TextoTraduzidoWidget::TextoTraduzidoWidget(QWidget *parent, QString valor) : QDialog(parent), uitxt(new Ui::TextoTraduzidoWidget){
    uitxt->setupUi(this);
    uitxt->textLabel->setText(valor);
}

TextoTraduzidoWidget::~TextoTraduzidoWidget(){
    delete uitxt;
}

void TextoTraduzidoWidget::on_pushButton_clicked(){
    QWidget::close();
}
