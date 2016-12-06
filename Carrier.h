#include <vector>
#include "Aircraft.h"

#ifndef AIRCRAFT_CARRIER_CARRIER_H
#define AIRCRAFT_CARRIER_CARRIER_H


class Carrier {
private:
    std::vector<Aircraft> aircrafts;
    unsigned int aircraft_count;
    unsigned int ammo;
public:
    Carrier(unsigned int ammo);
    std::string get_status();
    void add_aircraft(Aircraft& aircraft);
    void fill_aircraft_by_id(unsigned int id);
    void fight_aircraft_by_id(unsigned int id);
    Aircraft& get_aircraft_by_id(unsigned int id);
    unsigned int get_all_damages();
    std::string get_all_aircraft_status();
};


#endif //AIRCRAFT_CARRIER_CARRIER_H
