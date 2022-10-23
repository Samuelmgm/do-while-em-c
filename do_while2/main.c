#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int resp;

    resp = 0;
    do
        {
            printf("digite as 3 notas do aluno para se calcular a media\n");
            printf("digite a primeira nota:");
            scanf("%f",&nota1);
            printf("digite a segunda nota:");
            scanf("%f",&nota2);
            printf("digite a terceita nota:");
            scanf("%f",&nota3);

            media = (nota1+nota2+nota3) / 3 ;

            if(media >=7)
                printf("a media do aluno foi de :%.2f e ele foi aprovado\n",media);

            else if(media == 6)
                printf("a media do aluno foi de :%.2f e ele esta de recuperacao\n",media);

            else
                printf("a media do aluno foi de :%.2f e ele foi reprovado\n",media);

            printf("Deseja continuar ? \n\nDigite 1 para sim ou qualquer numero para nao:");
            scanf("%d",&resp);

        }while(resp == 1);
    return 0;
}
