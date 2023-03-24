/*
  ___            _     _  __   ___ _     ___  _     _
 |   \ __ _ _ _ (_)___| | \ \ / / | |   / __|| |_ _| |_
 | |) / _` | ' \| / -_) |  \ V /|_  _| | (_|_   _|_   _|
 |___/\__,_|_||_|_\___|_|   |_|   |_|   \___||_|   |_|

 Digital Rain Project
 Started: 20/02/2023
*/

#ifndef DIGITAL_RAIN_H
#define DIGITAL_RAIN_H

#include <iostream>
#include <string>
#include <vector>
#include <chrono>

class DigitalRain {
public:
    //Constructor for width height and speed
    DigitalRain(int width, int height, int speed, int wrap_count);
    void run();
private:
    void change();
    void print();
    int width_;
    int height_;
    int speed_;
    int wrap_count_;

    // variable for the y positions of the rain
    std::vector<int> pos;
    // variable for the characters used in the rain
    std::string chars;

};

#endif // DIGITAL_RAIN_H


