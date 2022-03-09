#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(){
    
    int hour;
    int minute;
    int second;
    scanf("%d", &hour);
    scanf("%d", &minute);
    scanf("%d", &second);
    while(1){
        system("clear");
        if(hour >= 0  && hour <= 9){
            if(minute >= 0 && minute <=9){
                if(second >= 0 && second <= 9){
                    printf("time = 0%d : 0%d : 0%d\n", hour, minute, second);
                }
                else printf("time = 0%d : 0%d : %d\n", hour, minute, second);
            }
            else{
                if(second >= 0 && second <= 9){
                    printf("time = 0%d : %d : 0%d\n", hour, minute, second);
                }
                else printf("time = 0%d : %d : %d\n", hour, minute, second);
            }
        }
        else{
             if(minute >= 0 && minute <=9){
                if(second >= 0 && second <= 9){
                    printf("time = %d : 0%d : 0%d\n", hour, minute, second);
                }
                else printf("time = %d : 0%d : %d\n", hour, minute, second);
            }
            else{
                if(second >= 0 && second <= 9){
                    printf("time = %d : %d : 0%d\n", hour, minute, second);
                }
                else printf("time = %d : %d : %d\n", hour, minute, second);
            }
        }
        
        sleep(1);
        second++;
        if(second ==60){
            second = 0;
            minute++;
        }
        if(minute == 60){
            minute = 0;
            hour++; 
        }
        if(hour == 24){
            hour = 0;
        }
        
    }
    return 0;
}