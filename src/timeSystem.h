#ifndef _TIMESYSTEM_H_
#define _TIMESYSTEM_H_
#include "dataFormat.h"

class timeSystem
{
private:
    /* Current time */
    u8 ct_second;
    u8 ct_minute;
    u8 ct_hour;
    u32 ct_day;
public:
    timeSystem(/* args */);
    void update();
    void print();
    ~timeSystem();
};

#endif /* _TIMESYSTEM_H_ */
