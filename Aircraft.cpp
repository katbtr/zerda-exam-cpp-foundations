
#include "Aircraft.h"

using namespace std;

unsigned int Aircraft::LAST_ID = 0;

Aircraft::Aircraft() {
    this->ammo = 0;
    this->max_ammo;
    this->base_damage;
    this->all_damage = 0;
    this->id = Aircraft::LAST_ID;
    LAST_ID++;
}

int Aircraft::refill() {
    ammo = max_ammo;
    return ammo;
}

int Aircraft::fight() {
    all_damage = base_damage * ammo;
    ammo = 0;
    return all_damage;
}

const unsigned int Aircraft::get_aircraft_by_id() const {
    return id;
}

string Aircraft::get_type() {
    return type_name;
}

string Aircraft::get_status() {
    return "Type: " + type_name + ", Ammo: " + to_string(ammo) + ", Base Damage: " + to_string(base_damage) +
            ", All Damage: " + to_string(all_damage);
}
/*
int Aircraft::get_max_ammo() {
    return max_ammo;
}
 */