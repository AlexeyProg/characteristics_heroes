#ifndef HERO_H
#define HERO_H

#include <QObject>


class Hero
{
public:
    Hero(QString mName, QString mPath, int sila, double increase_sila, int inta, double increase_inta,
         int agila, double increase_agila);
    QString name;
    QString resource_path;
    int strength;
    double increase_strength_per_level;
    int intelligence;
    double increase_intellect_per_level;
    int agility;
    double increase_agility_per_level;

    std::pair<QString,QString> pair_name_path;
};

#endif // HERO_H
