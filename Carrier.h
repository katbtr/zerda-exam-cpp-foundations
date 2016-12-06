#include <vector>
#include "Aircraft.h"

#ifndef AIRCRAFT_CARRIER_CARRIER_H
#define AIRCRAFT_CARRIER_CARRIER_H


class Carrier {
private:
    std::vector<Aircraft*> aircrafts;
    unsigned int aircraft_count;
    unsigned int ammo;
    unsigned int health_point;
public:
    Carrier(unsigned int ammo_storage);
    ~Carrier();
    std::string get_status();
  //  void add_aircraft(Aircraft& aircraft);
    void add_aircraft(std::string type_of_aircraft);
    void fill_aircraft_by_id(unsigned int id);
    void fight_aircraft_by_id(unsigned int id);
    Aircraft& get_aircraft_by_id(unsigned int id);
    unsigned int get_all_damages();
    std::string get_all_aircraft_status();
    void fight_carrier(Carrier& other_carrier);
    bool is_dead();
};


#endif //AIRCRAFT_CARRIER_CARRIER_H
