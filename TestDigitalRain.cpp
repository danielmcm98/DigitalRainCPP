/*
  ___            _     _  __   ___ _     ___  _     _
 |   \ __ _ _ _ (_)___| | \ \ / / | |   / __|| |_ _| |_
 | |) / _` | ' \| / -_) |  \ V /|_  _| | (_|_   _|_   _|
 |___/\__,_|_||_|_\___|_|   |_|   |_|   \___||_|   |_|

 Digital Rain Project
 Started: 20/02/2023
*/

#include "TestDigitalRain.h"
#include <iostream>
#include <thread>

void run_tests()
{
    test_speed_fast();
    test_speed_medium();
    test_speed_slow();
}

void test_speed_fast() {
    system("cls");
    const int width = 120;
    const int height = 60;
    const int rain_speed = 30;

    std::cout << "Running test: Fast Speed" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    DigitalRain digital_rain(width, height, rain_speed, 3);
    digital_rain.run();
}

void test_speed_medium() {
    system("cls");
    const int width = 120;
    const int height = 40;
    const int rain_speed = 100;

    std::cout << "Running test: Medium Speed" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    DigitalRain digital_rain(width, height, rain_speed, 3);
    digital_rain.run();
}

void test_speed_slow() {
    system("cls");
    const int width = 120;
    const int height = 30;
    const int rain_speed = 200;

    std::cout << "Running test: Slow Speed" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    DigitalRain digital_rain(width, height, rain_speed, 3);
    digital_rain.run();
}


