
/*
--------------------------------------------------
Program : Average Speed of Car
Purpose : Calculates the average speed of a car
          over 5 time intervals and displays the
          results in a formatted ASCII table.
 
Author  : RedeX110
Date    : 29 March 2026
 
Input   : None (predefined distance values in KM)
Output  : A table of time and distance per interval,
          followed by the calculated average speed
          in KMH.
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
    float distence_per_hour[5] = {10, 20, 45, 69, 75};
    float speed, avarage_speed = 0;

    printf("--------------------------------\n");
    printf("      Avarage Speed of Car      \n");
    printf("--------------------------------\n");
    printf("   |   Time   |   Distence  |   \n");

    for(int i = 0; i < 4 ; i++) {
        speed = distence_per_hour[i] / (i + 1);
    printf("   |   %.1fH   |   %.2f KM  |   \n", (float)i+1,
        distence_per_hour[i]);
        avarage_speed = avarage_speed + speed;
    }
    avarage_speed = avarage_speed / 5;

    printf("--------------------------------\n");
    printf("    Avarage Speed : %.1f KMH    \n", avarage_speed);
    printf("--------------------------------\n");
    return 0;
}


