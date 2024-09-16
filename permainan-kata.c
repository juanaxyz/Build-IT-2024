#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100],b[100]; //declarasi variabel 
    scanf("%s",a);
    scanf("%s",b);

    if(strcmp(a,b)==0 && strlen(a)== strlen(b)){
        printf("IDENTIK");
    }else if(strcmp(a,b)!= 0 && strlen(a) == strlen(b)){
        printf("MIRIP");
    }else{
        printf("BERBEDA");
    }

    return 0;
}