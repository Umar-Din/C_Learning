
// Some Basic Programs 

#include<stdio.h>
/*The program uses the formula oC=((5)(oF-32))/9 to print the following table of Fahrenheit temperatures and
their centigrade or Celsius equivalents:
 1 -17
 20 -6
 40 4
 60 15
 80 26
 100 37
 120 48
 140 60
 160 71
 180 82
 200 93
 220 104
 240 115
 260 126
 280 137
 300 148
*/


void tempConveter(void){
    int celsius,fahr = 0;
    int start = 0;
    int stop = 300;
    int step = 20;
    printf("F\tC\n");
    while (start<=stop)
    {
        celsius = 5 * (start-32) / 9;
        printf("%d\t%d\n",start,celsius);
        start+=step;
    }
    
    

}



int main(){
    tempConveter();
}
