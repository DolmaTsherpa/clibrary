#include <stdio.h>
int main()
{
    int cmark, mathmark, accmark, engmark, micromark;
    double total, percentage;
    printf("Enter marks for C, Math, Account, English, Micro\n");
    scanf("%d%d%d%d%d",&cmark,&mathmark,&accmark,&engmark,&micromark);

    total= cmark + mathmark+accmark + engmark + micromark;
    percentage = total /5;

}