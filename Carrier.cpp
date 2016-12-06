
#include "Carrier.h"
#include "F16.h"
#include "F35.h"
#include "Aircraft.h"
#include <vector>

using namespace std;

Carrier::Carrier(unsigned int ammo_storage) {
    this->ammo = ammo;
    aircraft_count = 0;
    this->health_point = 500;
}
Carrier::~Carrier() {

}
/*
void Carrier::add_aircraft(Aircraft& aircraft) {
    aircrafts.push_back(aircraft);
}
*/
void Carrier::add_aircraft(std::string type_of_aircraft) {

    if (type_of_aircraft == "F16") {
        aircrafts.push_back(new F16);
        return;
    }
    else if (type_of_aircraft == "F35") {
        aircrafts.push_back(new F35);
        return;
    }

}

void Carrier::fill_aircraft_by_id(unsigned int id) {
/*
    try {
        if (ammo > aircrafts[id].refill()) {
            aircrafts[id].refill();
            ammo -= aircrafts[id].refill();
        } else
            throw "Not enough emmo to fill aircrafts";
    } catch (const char* error);
*/
    aircrafts[id]->refill();
}


void Carrier::fight_aircraft_by_id(unsigned int id) {
    aircrafts[id]->fight();
}
/*
Aircraft & Carrier::get_aircraft_by_id(unsigned int id) {
    return aircrafts[id];
}
*/
std::string Carrier::get_status() {
    std::string output = "";
    output += "Aircraft count: " + to_string(aircrafts.size()) + ", ";
    output += "Ammo storage: " + to_string(ammo) + ", ";
    output += "Total damage: " + to_string(get_all_damages())  + "\n";
    output += "Aircrafts:\n";
    output += get_all_aircraft_status();
    if (is_dead()) {
        cout << "It's dead Jim :(" << endl;
    }
    return output;
}

string Carrier::get_all_aircraft_status() {
    std::string aircraft_status = "";
    for (unsigned int i = 0; i < aircrafts.size(); ++i) {
        aircraft_status += aircrafts.at(i)->get_status() + "\n";
    }
    return aircraft_status;
}

unsigned int Carrier::get_all_damages() {
    unsigned int all_damages = 0;
    for (unsigned int i = 0; i < aircrafts.size(); ++i) {
        all_damages += aircrafts.at(i)->fight();
    }
    return all_damages;
}

void Carrier::fight_carrier(Carrier& other_carrier) {
    health_point -= get_all_damages();
    ammo = 0;
}

bool Carrier::is_dead() {
    return health_point == 0 ? true : false;
}