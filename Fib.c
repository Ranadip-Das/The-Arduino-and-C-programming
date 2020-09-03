#include<stdio.h>
int main()
{
    int x=0,y=1,z=0;
    while(z<=5){
        printf("\n%d",z);
        x=y;
        y=z;
        z=x+y;
    }
}
