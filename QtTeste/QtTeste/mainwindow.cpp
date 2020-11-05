#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <random>
#define high 8
#define low 0

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

QString MainWindow::GeradorCaracter(){
    std::vector<QString> list2 = {"kk", "er", "eo", "gh", "kl", "po", "ko", "lu", "aum"};
    int k = rand()%high;
    //int d;
    //d = rand () / (RAND_MAX + 1);
    //int k = d * (high - low + 1);
    return list2[low + k];
}

QString MainWindow::TraduzTexto(QString text){
    std::vector<QString> list = {
        "ão", "oi", "ei", "uo", "ou", "do", "fi", "pu", "ui", "op", "er" "ia", "om", "la", "co",
        "cu", "tu", "ca", "ce", "ci", "os", "ós", "le", "li", "lo", "lu" // 21
    };
    for(int i = 0; i < text.size(); i++){
        for(int j = 0; j < (int) list.size(); j++){
            if(text.toLower().contains(list[j])){
                text.replace(list[j], GeradorCaracter());
            }
            else{
                text.replace(list[j], GeradorCaracter());
            }
        }
    }
    return text;
}

void MainWindow::on_pushButton_clicked(){
    //QSound::play(":/sounds/entraagoragui.wav");
    //QSound *music = new QSound("qrc:/sounds/entraagoragui.wav");
    // music->play();
    QMediaPlayer* player = new QMediaPlayer();
    //player->setMedia(QUrl::fromLocalFile("//Users//T-Gamer//Documents//Coding//QtTeste//QtTeste//entraagoragui.wav"));
    static int counter = 0;
    QString text = ui->lineEdit->text();
    if(text == "\0"){
        player->setMedia(QUrl("qrc:/sounds/mandadnv.wav"));
        player->setVolume(200);
        player->play();
        QMessageBox::warning(this, "Erro", "Pooh cara, cadê o texto?");
    }
    else{
        text = TraduzTexto(text);
        TextWidget = new TextoTraduzidoWidget(nullptr, text);
        player->setMedia(QUrl("qrc:/sounds/entraagoragui.wav"));
        player->setVolume(100);
        player->play();
        QMessageBox::information(this, "Info", "Deu tudo certo!");
        ++counter;
        ui->TentativasNumber->setText(QString::number(counter));
        TextWidget->exec();
    }
}
