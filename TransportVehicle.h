#ifndef TRANSPORT_VEHICLE_H
#define TRANSPORT_VEHICLE_H

class TransportVehicle {
public:
    virtual void calculateTimeAndCost(int passengers, int cargo) = 0; // Pure virtual function
};

#endif // TRANSPORT_VEHICLE_H