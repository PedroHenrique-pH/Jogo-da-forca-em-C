#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void desenhoforca(){
    printf("\n\n>>>>>>>>>> JOGO DA FORCA: <<<<<<<<<<\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
}

void desenhoforcaerro(int chance, int corretas){

if (chance == 0 && corretas < 10)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
} else if (chance == 1)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
} else if (chance == 2)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|         |\n");
    printf("|         \n");
    printf("|         \n");
    printf("|         \n");
} else if (chance == 3)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         \n");
    printf("|         \n");
} else if (chance == 4)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|        /\n");
    printf("|         \n");
} 
else if (chance == 5)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|        / 7\n");
    printf("|         \n");
} else if (chance == 6)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|        /|\n");
    printf("|         |\n");
    printf("|        / 7\n");
    printf("|         \n");
    printf("Você perdeu!");
} else if (chance == 7)
{
    printf("\n\n");
    printf("___________\n");
    printf("|         |\n");
    printf("|         O\n");
    printf("|        /|7\n");
    printf("|         |\n");
    printf("|        / 7\n");
    printf("|         \n");
    printf("Você perdeu!");
} 

}

int main(){

    desenhoforca();
    char palavra[] = "algoritmos";
    int i, comprimento, corretas = 0, chance = 0;

    comprimento = strlen(palavra);
    char palavra_desconhecida[comprimento], tentativa;

            for (i = 0; i < comprimento; i++){
                palavra_desconhecida[i] = '_';                 
            } 
                
            palavra_desconhecida[comprimento] = '\0';
    
while(chance < 7 && corretas < comprimento){
                int ganhou = 0;
                printf("\nDigite uma letra:\n%s\n", palavra_desconhecida);
                scanf(" %c", &tentativa);
                getchar();
                fflush(stdin);
                    for (i = 0; i < comprimento; i++){
                        if (tentativa == palavra[i]){
                                palavra_desconhecida[i] = tentativa;
                                corretas++;
                                ganhou = 1;
                                desenhoforcaerro(chance, corretas);
                                printf("\nEssa letra foi encontrada!\n");
                                
                            }}
                            
                            if (ganhou == 0){
                                printf("\nEssa letra não foi encontrada!");
                                chance++;
                                desenhoforcaerro(chance, corretas);
                            }
                                           
 
} if (corretas == comprimento)
{   printf("\n\n\n-------------------------------\n\n");
    printf("\nFim de jogo!\n\nParabéns você acertou a palavra!\n%s\n\n", palavra);
} else printf("\nFim de jogo!\n\nNão foi dessa vez, a palavra correta era: %s\n", palavra);




return 0;
}