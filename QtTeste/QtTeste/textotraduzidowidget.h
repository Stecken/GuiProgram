#ifndef TEXTOTRADUZIDOWIDGET_H
#define TEXTOTRADUZIDOWIDGET_H

#include <QDialog>

namespace Ui {
class TextoTraduzidoWidget;
}

class TextoTraduzidoWidget : public QDialog
{
    Q_OBJECT

public:
    QString valorText;
    explicit TextoTraduzidoWidget(QWidget *parent = nullptr, QString valor = "");
    ~TextoTraduzidoWidget();
    Ui::TextoTraduzidoWidget *uitxt;
private slots:
    void on_pushButton_clicked();

private:

};

#endif // TEXTOTRADUZIDOWIDGET_H
