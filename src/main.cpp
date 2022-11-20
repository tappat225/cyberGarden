#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "timeSystem.h"

int main()
{
    timeSystem test_time;
    while (1) {
        system("clear");
        test_time.print();
        sleep(1);
        test_time.update();
    }
}
