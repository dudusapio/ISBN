#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isbn_dv(char isbn[10]){
    int v[10],s1[10],s2[10],verificador,i,x;
    int  num = atoi(isbn);
    printf("num = %d",num);
    
    v[0] = num / 1 % 10;
    v[1] = num / 10 % 10;
    v[2] = num / 100 % 10;
    v[3] = num / 1000 % 10;
    v[4] = num / 10000 % 10;
    v[5] = num / 100000 % 10;
    v[6] = num / 1000000 % 10;
    v[7] = num / 10000000 % 10;
    v[8] = num / 100000000 % 10;
    v[9] = num / 1000000000 % 10;

    for( i = 0; i < 10 ; i ++){
    printf("v[%d] = %d\n",i,v[i]);
    }
    x = 8;
    
    s1[0] = 0;
    for( i = 1; i < 10; i++){
        s1[i] = s1[i - 1] + v[x];
        x--;
    }
    for( i = 0; i < 10; i++){
        printf("s1[%d] = %d\n",i,s1[i]);
    }
}
int main(void){
    char x[15];
    strcpy(x,"0123456789");
    isbn_dv(x);
}

// int main(void){
//     int a = 102;
//    int  b = a / 1 % 10;
//    int c = a / 10 % 10;
//    int d = a / 100 % 10;
//     printf("b = %d",b);
//     printf("c = %d",c);
//     printf("d = %d",d);
// }