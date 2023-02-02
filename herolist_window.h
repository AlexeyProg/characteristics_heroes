#ifndef HEROLIST_WINDOW_H
#define HEROLIST_WINDOW_H

#include <QDialog>
#include "hero.h"
#include <QList>

namespace Ui {
class HeroList_window;
}

class HeroList_window : public QDialog
{
    Q_OBJECT

public:
    explicit HeroList_window(QWidget *parent = nullptr);
    void connectImageWithButtons();

    QList<QPushButton*> button_list;


    ~HeroList_window();
public slots:
    void openPage();

private:
    void AddAllHeroesToList();
    QList<Hero*> list_of_heroes;
    Ui::HeroList_window *ui;
};

#endif // HEROLIST_WINDOW_H
