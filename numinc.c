//1
//22
//333
#include <stdio.h>
int main () {
    int i,j;
    for (i=1;i<=3;i++) // Rows
    {
        for(j=1;j<=i;j++) { //Columns
            printf("%d",i);
        } printf("\n");
    }
    return 0;
}