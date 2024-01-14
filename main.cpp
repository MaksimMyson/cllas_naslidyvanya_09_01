#include "Car.h"
#include "Bicycle.h"
#include "Cart.h"
#include <iostream>

using namespace std;

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    cout << "Transport Vehicle 1 (Car):\n";
    car.calculateTimeAndCost(4, 300);

    cout << "\nTransport Vehicle 2 (Bicycle):\n";
    bicycle.calculateTimeAndCost(1, 50);

    cout << "\nTransport Vehicle 3 (Cart):\n";
    cart.calculateTimeAndCost(2, 100);

    return 0;
}