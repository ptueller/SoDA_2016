#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char hourwords[31][20] = {{"o' clock"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"quarter"},{"sixten"},{"seventeen"},{"eighteen"},{"nineteen"},{"twenty"},{"twenty one"},{"twenty two"},{"twenty three"},{"twenty four"},{"twenty five"},{"twenty six"},{"twenty seven"},{"twenty eight"},{"twenty nine"},{"half"}};

int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);
    
    int newm;
    
    char finMin[100];
    char finHour[100];
    memset(finMin,0,100);
    memset(finHour,0,100);
    
    if(m==0) {
        strcpy(finMin,hourwords[h]);
        strcpy(finHour,hourwords[m]);
    }
    else {
        if(m>30) {
            newm=60-m;
            strcpy(finMin,hourwords[newm]);
            if(newm==1) strcat(finMin," minute to");
            else if(newm==15) strcat(finMin," to");
            else strcat(finMin," minutes to");
            if(h==12) h=1;
            else h++;
            strcpy(finHour,hourwords[h]);
        }
        else {
            strcpy(finMin,hourwords[m]);
            if(m==30) strcat(finMin," past");
            else if(m==1) strcat(finMin," minute past");
            else if(m==15) strcat(finMin," past");
            else strcat(finMin," minutes past");
            strcpy(finHour,hourwords[h]);
        }
    }
    
    
    
    
    printf("%s %s\n",finMin,finHour);
    
    return 0;
}
