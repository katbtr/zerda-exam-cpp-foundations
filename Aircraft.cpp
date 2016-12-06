
#include "Aircraft.h"

using namespace std;

Aircraft::Aircraft() {
    this->ammo = 0;
    this->max_ammo;
    this->base_damage;
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

string Aircraft::get_type() {
    return type_name;
}

string Aircraft::get_status() {
    return "Type: " + type_name + ", Ammo: " + to_string(ammo) + ", Base Damage: " + to_string(base_damage) +
            ", All Damage: " + to_string(all_damage);
}
