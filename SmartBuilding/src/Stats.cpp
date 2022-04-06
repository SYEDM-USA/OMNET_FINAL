/*
 * Stats.cpp
 *
 *  Created on: Apr 6, 2022
 *      Author: gr8ab
 */

#include "Stats.h"

Stats::Stats(double t, double c, double h, time_t t) {
    this->temperature = t;
    this->co = c;
    this->humidity = h;
    this->timestamp = t;

}

Stats::Stats(){}

Stats::~Stats() {
}

