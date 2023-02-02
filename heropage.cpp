#include "heropage.h"
#include "ui_heropage.h"

HeroPage::HeroPage(Hero *item, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HeroPage)
{
    ui->setupUi(this);
    QPixmap map(item->resource_path);
    int w = ui->label_icon->width();
    int h = ui->label_icon->height();
    ui->label_icon->setPixmap(map.scaled(w,h,Qt::KeepAspectRatio));
}

void HeroPage::addAttributes()
{

}


HeroPage::~HeroPage()
{
    delete ui;
}
