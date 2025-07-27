#include <stdio.h>
int area1 (int, int);
int area2 (int, int);
int main()
{
    int l1, b1, l2, b2;
    printf("Enter first length and breadth");
    scanf("%d %d", &l1, &b1);
    printf("Enter second length and breadth");
    scanf("%d %d",&l2, &b2);

    if(area1(l1,b1)>area2(l2,b2))
    {
        printf("area1 is greater");
    }
    else{
        printf("area is smaller");
    }

    return 0;

   
    


}


 int area1(int a, int b)
    {
        return a*b;
    }
 int area2(int x, int y)
    {
        return x * y;

    }

 