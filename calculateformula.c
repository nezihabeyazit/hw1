#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
     printf("Enter b: ");
    scanf("%d", &b);
     printf("Enter c: ");
    scanf("%d", &c);
    int res = 1;
    int pow = 1;
    while(pow<=2*b) {
        res=res*a;
        pow=pow+1;
    }

    int y;
    y= res-2*c;
    printf ("y: %d" , y);

    return 0;
}
