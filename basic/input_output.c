/*Input output practice*/


#include<stdio.h>

void sayHello(int times);
int getTimes(void);

int main(void){
    int times = getTimes();
    sayHello(times);

}

int getTimes(void){
    int times;
    do{
        printf("Enter the Positive Value: ");
        if(scanf("%i",&times) !=1 ){
            while(getchar() != '\n');
            times = -1;
        }
    }
    while(times<0);
    return times;

}
void sayHello(int times){
    
    for(int itr=0; itr<times; itr++){
        printf("%i. Hello!\n",itr);
    }
}
