#include <iostream>

#ifndef AIRCRAFT_CARRIER_AIRCRAFT_H
#define AIRCRAFT_CARRIER_AIRCRAFT_H


class Aircraft {
private:

    int ammo;

protected:
    std::string type_name;
    int max_ammo;
    int base_damage;
    int all_damage;
public:
    Aircraft();
    int refill();
    int fight();
    std::string get_type();
    std::string get_status();
};


#endif //AIRCRAFT_CARRIER_AIRCRAFT_H
