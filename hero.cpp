#include "hero.h"

Hero::Hero(QString mName, QString mPath, int sila, double increase_sila, int inta, double increase_inta, int agila, double increase_agila)
{
    this->name = mName;
    this->resource_path = mPath;
    this->strength = sila;
    this->increase_strength_per_level = increase_sila;
    this->intelligence = inta;
    this->increase_intellect_per_level = increase_inta;
    this->increase_agility_per_level = increase_agila;
    this->agility = agila;
    this->pair_name_path = {name,resource_path};
}
