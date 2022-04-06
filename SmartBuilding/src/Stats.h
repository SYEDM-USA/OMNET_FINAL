/*
 * Stats.h
 *
 *  Created on: Apr 6, 2022
 *      Author: gr8ab
 */

#ifndef STATS_H_
#define STATS_H_

class Stats {
public:
    Stats();
    virtual ~Stats();
    double temperature = 0f;
    double co = 0f;
    double humidity = 0f;
    time_t timestamp;
};

#endif /* STATS_H_ */
