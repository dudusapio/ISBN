/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − Universidade Federal de Alfenas .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : Atividade 5
5 ∗ Disciplina : Programacao
6 ∗ Professor . : Luiz Eduardo da Silva
7 ∗ Aluno . . . . . : Eduardo Sapio Saccardo
8 ∗ Data . . . . . . : 01/09/2021
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isbn_dv(char isbn[10]){
    int v[10],s1[10],s2[10],verificador,i,x;
    v[0] = isbn[0] - '0';
    v[1] = isbn[1] - '0';
    v[2] = isbn[2] - '0';
    v[3] = isbn[3] - '0';
    v[4] = isbn[4] - '0';
    v[5] = isbn[5] - '0';
    v[6] = isbn[6] - '0';
    v[7] = isbn[7] - '0';
    v[8] = isbn[8] - '0';

    for( i = 0; i < 9 ; i ++){
    printf(" v[%d] = %d  ",i,v[i]);
    }
    printf("\n");
    x = 1;
    
    s1[0] = 0;
    for( i = 1; i < 9; i++){
        s1[i] = s1[i - 1] + v[x];
        x++;
    }
    for( i = 0; i < 9; i++){
        printf("s1[%d] = %d  ",i,s1[i]);
    }
    printf("\n");
    s2[0] = 0;
    for( i = 1; i < 9; i ++){
        s2[i] = s2[i - 1] + s1[i];
    }
    for( i = 0; i < 9; i++){
        printf("s2[%d] = %d  ",i,s2[i]);
    }
    printf("\n");
    verificador = s2[8] / 11 == 10 ? 10 : (s2[8] / 11) % 10;
    return verificador;
}
int main(void){
    char x[15];
    int i;
        do{
            scanf("%s", x);
            if(strcmp(x,"000000000") != 0){ // esse if e para abortar o programa se a entrada for 000000000
                i = isbn_dv(x);
                if(i == 10)
                    printf("%s-X\n",x);
                else
                    printf("%s-%d\n",x,i);
            }
        } while(strcmp(x,"000000000") != 0); // nao pega a primeira entrada se ela for 000000000 
    
}

