#include "Bicycle.h"
#include <iostream>

using namespace std;

void Bicycle::calculateTimeAndCost(int passengers, int cargo) {
    // Assuming a constant speed and no cargo capacity for a bicycle
    const double speed = 20.0; // in km/h

    double time = static_cast<double>(passengers) / speed;
    double cost = 0.0; // Bicycles have no cost

    cout << "Bicycle: Time taken for transport = " << time << " hours\n";
    cout << "Bicycle: Cost of transport = $" << cost << "\n";
}