#include<stdio.h>
main()
{ 
    int a=5,b=4,c=3,d=2;
    if(a>b>c)
        printf("%d\n",d);
    else if((c-1>=d)==1)
        printf("%d\n",d+1);
    else  
        printf("%d\n",d+2);
}
