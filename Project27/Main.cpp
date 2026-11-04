#include "TrafficLight.h"
#include "Adress.h"
#include <string>
#include <iostream>
#include <thread>
#include <chrono>

int main() {
	adress adress_1;
	adress_1.country = "Moon";
	adress_1.city = "Kentucki";
	adress_1.street = "Frizbino";
	adress_1.longx = 50.74255647658435;
	adress_1.longy = 41.8658797601755;
TrafficLight Bonj = TrafficLight(adress_1);
	
	 while(true){
		 Bonj.GetInfo();
		 std::this_thread::sleep_for(std::chrono::milliseconds(23000));
		 
	 }
}