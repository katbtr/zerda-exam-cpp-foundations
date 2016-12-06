#include <iostream>
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"
#include "Carrier.h"

using namespace std;

int main() {

    F16 ac1;
    F35 ac2;


    Carrier carrier1(1000);


    carrier1.add_aircraft(ac1);
    carrier1.add_aircraft(ac2);

    carrier1.fill_aircraft_by_id(0);
    carrier1.fill_aircraft_by_id(1);


    cout << "Carrier 1:" << endl << carrier1.get_status() << endl;


    Carrier carrier2(1000);

    carrier2.add_aircraft(ac1);
    carrier2.add_aircraft(ac2);

    carrier2.fill_aircraft_by_id(0);
    carrier2.fill_aircraft_by_id(1);



    cout << "Carrier 2:" << endl << carrier2.get_status() << endl;


    carrier1.fight_carrier(carrier2);

    cout << "Carrier 1:" << endl << carrier1.get_status() << endl;
}