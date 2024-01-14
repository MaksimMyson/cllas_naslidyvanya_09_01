#include "Cart.h"
#include <iostream>

using namespace std;

void Cart::calculateTimeAndCost(int passengers, int cargo) {
    // Assuming a constant speed and cost per kilometer for a cart
    const double speed = 10.0; // in km/h
    const double costPerKm = 0.05; // in dollars

    double time = static_cast<double>(cargo) / speed;
    double cost = static_cast<double>(passengers) * time * costPerKm;

    cout << "Cart: Time taken for transport = " << time << " hours\n";
    cout << "Cart: Cost of transport = $" << cost << "\n";
}