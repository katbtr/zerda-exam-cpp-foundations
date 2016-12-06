#include <iostream>

#ifndef AIRCRAFT_CARRIER_AIRCRAFT_H
#define AIRCRAFT_CARRIER_AIRCRAFT_H


class Aircraft {
private:
    static unsigned int LAST_ID;
    int ammo;
    unsigned int id;

protected:
    std::string type_name;
    int max_ammo;
    int base_damage;
    int all_damage;
public:
    Aircraft();
    int refill();
    int fight();
    const unsigned int get_aircraft_by_id() const;
    std::string get_type();
    std::string get_status();
//    int Aircraft::get_max_ammo();
};


#endif //AIRCRAFT_CARRIER_AIRCRAFT_H
