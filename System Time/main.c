/*
--------------------------------------------------
Program : System Time
Purpose :

Author  : RedeX110
Date    : 26 March 2026

Input   :
Output  :
--------------------------------------------------
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
    printf("---------------------------------------\n");
    printf("System Date & Time\n");
    printf("---------------------------------------\n");
    time_t second;
    time(&second);

    printf("Date & Time : %s", asctime(localtime(&second)));
    printf("---------------------------------------\n");
    return 0;
}
