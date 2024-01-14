#ifndef CART_H
#define CART_H

#include "TransportVehicle.h"

class Cart : public TransportVehicle {
public:
    void calculateTimeAndCost(int passengers, int cargo) override;
};

#endif // CART_H