#ifndef AUTO_DRIVE_SYSTEM_H
#define AUTO_DRIVE_SYSTEM_H

#include "Car.h"

struct AutoDriveSystem {
    struct Car* car;
};

struct AutoDriveSystem *createAutoDriveSystem();
void setCar(struct AutoDriveSystem* autoDriveSystem, struct Car* car);
void run(struct AutoDriveSystem* autoDriveSystem);

#endif