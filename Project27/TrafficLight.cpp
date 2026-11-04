#include "TrafficLight.h"
#include <chrono>
TrafficLightsState TrafficLight::GetCurrentState()
{
    auto now = std::chrono::system_clock::now();
    auto now_sec = std::chrono::floor<std::chrono::seconds>(now).time_since_epoch();
    int seconds = (now_sec % 60).count();
    if (seconds >= 0 && seconds <= 20)
    {
        return TrafficLightsState::GREEN;
    }
    if (seconds >= 20 && seconds <= 26)
    {
        return TrafficLightsState::YELLOW;
    }
    if (seconds >= 26 && seconds <= 60)
    {
        return TrafficLightsState::RED;
    }
}
void TrafficLight::GetInfo() {
    switch (GetCurrentState()) {
    case TrafficLightsState::GREEN:
        std::cout << "GREEN" << std::endl;
        break;
    case TrafficLightsState::YELLOW:
        std::cout << "YELLOW" << std::endl;
        break;
    case TrafficLightsState::RED:
        std::cout << "RED" << std::endl;
        break;
    }
    std::cout << "Adress: " << adress_1.country << " / " << adress_1.city << " / " << adress_1.street << "\nCoordinates: " << adress_1.longx << " " << adress_1.longy << std::endl;
}