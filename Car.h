#ifndef CAR_H
#define CAR_H

#include "TransportVehicle.h"

class Car : public TransportVehicle {
public:
    void calculateTimeAndCost(int passengers, int cargo) override;
};

#endif // CAR_H