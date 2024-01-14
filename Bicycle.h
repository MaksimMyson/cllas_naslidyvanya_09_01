#ifndef BICYCLE_H
#define BICYCLE_H

#include "TransportVehicle.h"

class Bicycle : public TransportVehicle {
public:
    void calculateTimeAndCost(int passengers, int cargo) override;
};

#endif // BICYCLE_H