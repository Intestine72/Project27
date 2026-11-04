#pragma once
#include "Adress.h"
#include <chrono>
enum TrafficLightsState{RED, YELLOW, GREEN};
class TrafficLight
{
private:
		adress adress_1;
public:
		TrafficLight(adress adress_1) {
			this->adress_1 = adress_1;
		}
		TrafficLightsState GetCurrentState();
		void GetInfo();
};
