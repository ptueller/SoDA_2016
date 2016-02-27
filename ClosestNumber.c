#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct list {
    int a;
    int b;
    int x;
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    int temp;
    int count=0;
    scanf("%d",&t);
    struct list s[t];
    double raised;
    for(int i=0;i<t;i++) {
        scanf("%d %d %d\n",&s[i].a,&s[i].b,&s[i].x);
    }
    for(int i=0;i<t;i++) {
        count=0;
        temp = 0;
        raised = pow(s[i].a,s[i].b);
        if(raised>s[i].x) {
            while(temp < (raised-s[i].x)) temp = s[i].x * count++;
            if((temp + s[i].x - raised) < (raised - temp)) {
                printf("%d\n",temp + s[i].x);
            }
            else {
                printf("%d\n",temp);
            }
            count = 0;
            temp = 0;
        }
        else {
            while(temp > (raised+s[i].x)) temp = s[i].x * count--;
            if((temp - raised) > (raised - (temp - s[i].x))) {
                printf("%d\n",temp - s[i].x);
            }
            else {
                printf("%d\n",temp);
            }
        }
    }
    return 0;
}
