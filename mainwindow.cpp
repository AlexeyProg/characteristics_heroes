#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_hero_stats, SIGNAL(clicked()), SLOT(hero_stats_window()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hero_stats_window()
{
    HeroList_window *WindowStats = new HeroList_window();
    this->close();
    WindowStats->exec();
}

