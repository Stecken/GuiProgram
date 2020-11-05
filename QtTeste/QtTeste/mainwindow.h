#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>
#include <QtMultimedia/QSound>
#include "textotraduzidowidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString GeradorCaracter();
    QString TraduzTexto(QString text);

public slots:

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    TextoTraduzidoWidget *TextWidget;
};
#endif // MAINWINDOW_H
