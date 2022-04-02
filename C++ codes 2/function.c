#include<stdio.h>

int add(int a,int b);

int main()
    {
       int x,y,value;
       scanf("%d%d", &x,&y);
       value = add(x,y);
       printf("%d", value);

       return 0;
    }
int add(int a,int b)
    {
        int sum;
        sum = a + b;
        return sum;
    }
