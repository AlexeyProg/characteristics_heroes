#ifndef HEROPAGE_H
#define HEROPAGE_H

#include <QDialog>
#include "hero.h"

namespace Ui {
class HeroPage;
}

class HeroPage : public QDialog
{
    Q_OBJECT

public:
    explicit HeroPage(Hero *item,QWidget *parent = nullptr);
    void addAttributes();
    ~HeroPage();

private:
    Ui::HeroPage *ui;
};

#endif // HEROPAGE_H
