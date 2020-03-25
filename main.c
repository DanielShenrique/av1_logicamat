#include <stdio.h>
#include <stdlib.h>

void showCabecalio();

int main(){

    char ling[30];
    char m, g, t, s, e;

    int x;

    printf("Ola esse e o sistema de recomendacao para fazer um jogo mobile\n\n");
    showCabecalio();

    printf("Voce tem alguma linguagem em mente ?\n");
    scanf("%c%*c", &t);
 
 do
 {
    system("cls");

    showCabecalio();

    if(t == 's' || t == 'S'){
        printf("Qual a linguagem que voce quer usar?\n");
        scanf("%s%*c", &ling);
        printf("A linguagem %s que voce quer usar e boa desenvolvimento mobile?\n", ling);
        scanf("%c%*c", &m);
        printf("A lingaugem %s e boa para desenvolvimento de jogos?\n", ling);
        scanf("%c%*c", &g);
    }
    else{
        printf("Voce prefere sintaxes simples?\n");
        scanf("%c%*c", &s);
        printf("Voce prefere usar engine?\n");
        scanf("%c%*c", &e);
    }

    if(t == 's' || t == 'S'){
        if((m == 's' || m == 'S') && (g == 's' || g == 'S')){
            printf("\n================================================================\n");
            printf("Use a linguagem %s", ling);
            printf("\n================================================================\n\n");
            x = 1;
        }
        else{
            printf("\nNao use essa linguagem\n");

            printf("\n================================================================\n");
            printf("Vamos fazer um teste para achar uma boa linguagem para voce");
            printf("\n================================================================\n\n");
            system("pause");

            t = 'n';
        }
    }
    else{
        if((s == 's' || s == 'S') && (e == 's' || e == 'S')){
            printf("\n================================================================\n");
            printf("Use C#, na Unity");
            printf("\n================================================================\n\n");
            x = 1;
        }
        else
        {
            if((s != 's' || s != 'S') && (e == 's' || e == 'S')){
                printf("\n================================================================\n");
                printf("Use C++, na Unreal");
                printf("\n================================================================\n\n");
                x = 1;
            }
            else
            {
                if((s == 's' || s == 'S') && (e != 's' || e != 'S')){
                    printf("\n================================================================\n");
                    printf("Use JavaScript, com o Framework ReactNative");
                    printf("\n================================================================\n\n");
                    x = 1;
                }
                else{
                    printf("\n================================================================\n");
                    printf("Use Java, com o IDE do Android Studio"); 
                    printf("\n================================================================\n\n");
                    x = 1;
                }
            }  
        }    
    }
 } while (x != 1);

    system("Pause");
    return 0;
}


void showCabecalio(){
    printf("================================================================\n");
    printf("\tUtilize s para sim e n para nao");
    printf("\n================================================================\n\n");
}