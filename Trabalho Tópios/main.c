#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Agora, digite o valor de y: ");
    scanf("%d", &y);

    if ((x>10 || x<-10)||(y>10 || y<-10)){
        printf("Voc� errou o alvo");
       }else if ((x>=-1 && x<=1)&& (y>=-1 &&  x<=1)){
           printf("Meus parab�ns! tu ganhaste 10 pontos!!");
       }else if ((x>=-5 &&  x<=5) && (y>=-5 && y<=5)){
           printf ("Voc� ganhou CINCO pontos!!");
       }else if ((x>=-10 &&  x<=10) && (y>=-10 && y<=10)){
           printf("Voc� ganhou 1 ponto!");
       }
       return 0;

    }


