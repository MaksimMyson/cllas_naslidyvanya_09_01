#include "Car.h"
#include <iostream>

using namespace std;

void Car::calculateTimeAndCost(int passengers, int cargo) {
    // Assuming a constant speed and cost per kilometer
    const double speed = 60.0; // in km/h
    const double costPerKm = 0.1; // in dollars

    double time = static_cast<double>(cargo) / speed;
    double cost = static_cast<double>(passengers) * time * costPerKm;

    cout << "Car: Time taken for transport = " << time << " hours\n";
    cout << "Car: Cost of transport = $" << cost << "\n";
}