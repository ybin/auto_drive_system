#include <stdio.h>
#include <stdlib.h>
#include "AutoDriveSystem.h"
#include "Audi.h"
#include "Benz.h"
#include "Toyota.h"
#include "Tesla.h"

int main()
{
    struct AutoDriveSystem* ads;
    struct Car *car;
    
    // 0. create auto drive system...
    printf(">>> create auto drive system...\n");
    ads = createAutoDriveSystem();
    
    // 1. run auto drive system on Audi
    printf(">>> run auto drive system on Audi...\n");
    car = (struct Car*)malloc(sizeof(struct Car));
    if(car == NULL) {
        printf("ooops! create car failed.\n");
        return -1;
    }
    car->gear = AudiGear;
    car->fuel = AudiFuel;
    car->brake = AudiBrake;
    setCar(ads, car);
    run(ads);
    
    // 1. run auto drive system on Benz
    printf(">>> run auto drive system on Benz...\n");
    car->gear = BenzGear;
    car->fuel = BenzFuel;
    car->brake = BenzBrake;
    setCar(ads, car);
    run(ads);
    
    // 1. run auto drive system on Toyota
    printf(">>> run auto drive system on Toyota...\n");
    car->gear = ToyotaGear;
    car->fuel = ToyotaFuel;
    car->brake = ToyotaBrake;
    setCar(ads, car);
    run(ads);
    
    // 1. run auto drive system on Tesla
    printf(">>> run auto drive system on Tesla...\n");
    car->gear = TeslaGear;
    car->fuel = TeslaFuel;
    car->brake = TeslaBrake;
    setCar(ads, car);
    run(ads);
    
    // 2. free resources...
    free(ads);
    free(car);
	
	// 3. over test
	printf(">>> test success...\n");
    
    return 0;
}