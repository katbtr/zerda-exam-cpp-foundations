#include <iostream>
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"
#include "Carrier.h"

using namespace std;

int main() {

    Carrier carrier(1000);
    F16 ac1;
    F35 ac2;

    carrier.add_aircraft(ac1);
    carrier.add_aircraft(ac2);

    carrier.fill_aircraft_by_id(0);
    carrier.fill_aircraft_by_id(1);
    carrier.fight_aircraft_by_id(0);
    carrier.fight_aircraft_by_id(1);


    cout << carrier.get_status() << endl;

    cout << ac1.get_status() << endl;
    cout << "used ammo: " << ac1.refill() << endl;
    cout << ac1.get_status() << endl;
    cout << ac2.get_status() << endl;
  //  cout << ac2.get_id() << endl;
}