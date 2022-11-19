#include<iostream>
#include<stdio.h>
#include "timeSystem.h"

void timeSystem::update()
{
    bool flag = false;

    if (this->ct_second < 59) {
        this->ct_second++;
    } else {
        flag = true;
        this->ct_second = 0;
    }

    if (flag == true) {
        if (this->ct_minute < 59) {
            this->ct_minute++;
            flag = false;
        } else {
            this->ct_minute = 0;
        }
    }

    if (flag == true) {
        if (this->ct_hour < 23) {
            this->ct_hour++;
            flag = false;
        } else {
            this->ct_hour = 0;
        }
    }

    if (flag == true) {
        this->ct_day++;
    }
}

void timeSystem::print()
{
    printf("%d-%.2d:%.2d:%.2d\n", this->ct_day, this->ct_hour, this->ct_minute, this->ct_second);
}

timeSystem::timeSystem(/* args */)
{
    this->ct_day = 0;
    this->ct_hour = 0;
    this->ct_minute = 0;
    this->ct_second = 0;
}

timeSystem::~timeSystem()
{
}
