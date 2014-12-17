#include <stdio.h>
#include "AutoDriveSystem.h"
#include "Car.h"

struct AutoDriveSystem* createAutoDriveSystem() {
    struct AutoDriveSystem* autoDriveSystem = (struct AutoDriveSystem*)malloc(sizeof(struct AutoDriveSystem));
    if (autoDriveSystem == NULL) {
        printf("create AutoDriveSystem failed!\n");
        return;
    }
    return autoDriveSystem;
}

void setCar(struct AutoDriveSystem* autoDriveSystem, struct Car* car) {
    autoDriveSystem->car = car;
}

void run(struct AutoDriveSystem* autoDriveSystem) {
    // now you can control the system.
    // do what you like ...
    // e.g.
    autoDriveSystem->car->fuel();
    autoDriveSystem->car->gear();
    autoDriveSystem->car->brake();
}