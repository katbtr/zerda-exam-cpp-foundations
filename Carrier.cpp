
#include "Carrier.h"

using namespace std;

Carrier::Carrier(unsigned int ammo) : aircrafts(){
    this->ammo = ammo;
    aircraft_count = 0;
}

void Carrier::add_aircraft(Aircraft& aircraft) {
    aircrafts.push_back(aircraft);
}

void Carrier::fill_aircraft_by_id(unsigned int id) {
    aircrafts[id].refill();
}

void Carrier::fight_aircraft_by_id(unsigned int id) {
    aircrafts[id].fight();
}

Aircraft & Carrier::get_aircraft_by_id(unsigned int id) {
    return aircrafts[id];
}

std::string Carrier::get_status() {
    std::string output = "";
    output += "Ammo storage: " + to_string(ammo) + ", ";
    output += "Total damage: " + to_string(get_all_damages())  + "\n";
    output += "Aircrafts:\n";
    output += get_all_aircraft_status();
    return output;
}

string Carrier::get_all_aircraft_status() {
    std::string aircraft_status = "";
    for (int i = 0; i < aircrafts.size(); ++i) {
        aircraft_status += aircrafts.at(i).get_status() + "\n";
    }
    return aircraft_status;
}



unsigned int Carrier::get_all_damages() {
    unsigned int sum_launches = 0;
    for (int i = 0; i < aircrafts.size(); ++i) {
        sum_launches += aircrafts.at(i).fight();
    }
    return sum_launches;
}

