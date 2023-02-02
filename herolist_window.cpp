#include "herolist_window.h"
#include "ui_HeroList_window.h"
#include <QPixmap>
#include <QDebug>
#include "heropage.h"
HeroList_window::HeroList_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HeroList_window)
{
    ui->setupUi(this);
    AddAllHeroesToList();
    button_list.push_back(ui->pushButton_axe);
    button_list.push_back(ui->pushButton_abaddon);
    button_list.push_back(ui->pushButton_apparat);
    button_list.push_back(ui->pushButton_antimage);
    button_list.push_back(ui->pushButton_alchemist);
    button_list.push_back(ui->pushButton_arc);
    connectImageWithButtons();

    for(auto x : button_list)
    {
        connect(x, SIGNAL(clicked()), SLOT(openPage()));
    }
}

void HeroList_window::connectImageWithButtons()
{
    for(QPushButton * x : button_list)
    {
        for(Hero * item : list_of_heroes)
        {
            if (x->property("NICKNAME") == item->pair_name_path.first)
            {
                x->setIcon(QIcon(item->pair_name_path.second));
            }
        }
    }
}

HeroList_window::~HeroList_window()
{
    delete ui;
}

void HeroList_window::openPage()
{
    QString sender_path = sender()->property("NICKNAME").toString();
    for(Hero * item : list_of_heroes)
    {
        if(sender_path == item->pair_name_path.first)
        {
            QString path = item->pair_name_path.second;
            HeroPage *page = new HeroPage(item);
            page->exec();
        }
    }

}

void HeroList_window::AddAllHeroesToList()
{
    Hero *axe = new Hero("AXE",":/resources/images/axe_logo.jpg",25,2.8,18,1.6,20,2.0);
    list_of_heroes.push_back(axe);
    Hero *abaddon = new Hero("ABADDON",":/resources/images/abaddon.png",22,2.6,18,2.0,23,1.5);
    list_of_heroes.push_back(abaddon);
    Hero * apparat = new Hero("APPARAT",":/resources/images/apparat.jpg",20,1.9,23,3.4,20,2.2);
    list_of_heroes.push_back(apparat);
    Hero * antimage = new Hero("ANTIMAGE",":/resources/images/anti-mage.jpg",21,1.6,12,1.8,24,2.8);
    list_of_heroes.push_back(antimage);
    Hero *alchemist = new Hero("ALCHEMIST",":/resources/images/alchemist.png",23,2.7,25,1.8,22,1.5);
    list_of_heroes.push_back(alchemist);
    Hero *arc = new Hero("ARCWARDEN",":/resources/images/arc.jpg",22,2.6,24,2.6,20,3.0);
    list_of_heroes.push_back(arc);
}
