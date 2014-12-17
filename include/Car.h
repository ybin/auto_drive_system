#ifndef CAR_H
#define CAR_H
typedef char CHAR;
typedef CHAR (*gear_t)();
typedef CHAR (*fuel_t)();
typedef CHAR (*brake_t)();

struct Car {
    gear_t gear;
    fuel_t fuel;
    brake_t brake;
};

#endif