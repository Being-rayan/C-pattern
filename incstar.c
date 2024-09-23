//***
//**
//*
#include <stdio.h>
int main () {
    int i,j;
    for (i=1;i<=3;i++) // Rows
    {
        for(j=3;j>=i;j--) { //Columns
            printf("*");
        } printf("\n");
    }
    return 0;
}