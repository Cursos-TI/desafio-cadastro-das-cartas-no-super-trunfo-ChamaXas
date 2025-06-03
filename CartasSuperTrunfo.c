#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado1[100],Estado2[100],Cidade1[100],Cidade2[100];
    int Codigo1,Codigo2,NPT1,NPT2;
    float Area1,Area2,PIB1,PIB2,Densidade_populacional1,Densidade_populacional2,PIB_per_capita1,PIB_per_capita2,batalha,inversodensidade,inversodensidade2;
    unsigned long int Populacao1,Populacao2;
    double superpodercidade1,superpodercidade2;


    printf("Digite a primeira letra do Estado 1: ");
    scanf("%s",Estado1);
    printf("Digite a primeira letra do Estado 2: ");
    scanf("%s",Estado2);
    printf("Digite o codigo do Estado 1: ");
    scanf("%d",&Codigo1);
    printf("Digite o codigo do Estado 2: ");
    scanf("%d",&Codigo2);
    printf("Digite o nome da cidade 1: ");
    scanf("%s",Cidade1);
    printf("Digite o nome da cidade 2: ");
    scanf("%s",Cidade2);
    printf("Digite a quantidade populacional da cidade1 : ");
    scanf("%lu",&Populacao1);
    printf("Digite a quantidade populacional da cidade2: ");
    scanf("%lu",&Populacao2);
    printf("Digite a quantidade de pontos turisticos da cidade1: ");
    scanf("%d",&NPT1);
    printf("Digite a quantidade de pontos turisticos da cidade2: ");
    scanf("%d",&NPT2);
    printf("Digite a area total da cidade1: ");
    scanf("%f",&Area1);
    printf("Digite a area total da cidade2 : ");
    scanf("%f",&Area2);
    printf("Digite o PIB da cidade1: ");
    scanf("%f",&PIB1);
    printf("Digite o PIB da cidade2: ");
    scanf("%f",&PIB2);


    if (Area1 <= 0){
        printf("O valor da area nao pode ser menor ou igual a 0 \n");
        return 1;
    }
    if (Area2<= 0){
        printf("O valor da area não pode ser menor ou igual a 0 \n");
        return 1;
    }
    if (Populacao1<=0){
        printf("O valor da população não pode ser 0");
        return 1;
    }
    if (Populacao2<=0){
        printf("O valor da população não pode ser 0");
        return 1;
    }


    Densidade_populacional1 = (Populacao1)/Area1; //calcula a densidade
    PIB_per_capita1 = (PIB1)/Populacao1;

    Densidade_populacional2 = (Populacao2)/Area2;
    PIB_per_capita2 = (PIB2)/Populacao2;

    inversodensidade = 1/Densidade_populacional1;
    inversodensidade2 = 1/Densidade_populacional2;

    superpodercidade1 = inversodensidade+Populacao1+Area1+PIB1+NPT1+PIB_per_capita1;
    superpodercidade2 = inversodensidade2+Populacao2+Area2+PIB2+NPT2+PIB_per_capita2;
    //população, área, PIB, número de pontos turísticos, PIB per capita 
    //super poder 1 :  35.628.574,00000056

    // Aqui eu simplifiquei alguns resultados colocando menos casas decimais.
    // Para facilidar a visualização na saída. 
    // Isso pode afetar alguns resultado colocando valores aproximados.
    printf("\nCarta1: \n");

    printf("Estado: %s \n",Estado1);
    printf("Codigo: %s%d \n",Estado1,Codigo1);
    printf("Nome da Cidade: %s\n",Cidade1); // OBS: Se for um nome de cidade compostos, utilize o "_" para marcar como espaço.
    printf("Populacao: %lu\n",Populacao1);
    printf("Area: %.1f km²\n",Area1); 
    printf("PIB:R$ %.1f Bilhões de Reais\n",PIB1);
    printf("Numero de pontos turisticos: %d\n",NPT1);
    printf("Densidade populacional da cidade1: %f hab/km²\n",Densidade_populacional1);
    printf("PIB_per_capita1: R$ %.3f Reais\n",PIB_per_capita1);
    printf("Superpoder da cidade 1: %.1f \n",superpodercidade1);


    printf("\nCarta2: \n");

    printf("Estado: %s \n",Estado2);
    printf("Codigo: %s%d \n",Estado2,Codigo2);
    printf("Nome da Cidade: %s\n",Cidade2); //OBS: Caso precise usar espaço substitua por "_" para marcar como espaço.
    printf("Populacao: %lu\n",Populacao2);
    printf("Area: %.1f Km² \n",Area2);
    printf("PIB: %.1f Bilhões de reais\n",PIB2);
    printf("Numero de pontos turisticos: %d\n",NPT2);
    printf("Densidadede populacional: %f hab/km² \n",Densidade_populacional2);
    printf("PIB per capita: %.1f Reais \n",PIB_per_capita2);
    printf("Superpoder da cidade2: %.1f \n",superpodercidade2);
  

    printf("\nComparação de cartas: \n");
    
    if (Populacao1>Populacao2){
        printf("População: Carta 1 - (%s) Venceu!\n",Cidade1);
    }else{
        printf("População: Carta 2 - (%s) Venceu!\n",Cidade2);
    }
    if (Area1>Area2){
        printf("Area: Carta 1 - (%s) Venceu!\n",Cidade1);
    }else{
        printf("Area: Carta 2 - (%s) Venceu!\n",Cidade2);
    };
    if (PIB1>PIB2){
        printf("PIB: Carta 1 - (%s) Venceu!\n", Cidade1);
    }else{
        printf("PIB: Carta 2 - (%s) Venceu!\n", Cidade2);
    }
    if (NPT1>NPT2){
        printf("Numero de pontos turisticos: Carta 1 - (%s) Venceu!\n",Cidade1);
    }else{
        printf("Numero de pontos turisticos: Carta 2 - (%s) Venceu!\n",Cidade2);
    }
    if (Densidade_populacional1<Densidade_populacional2){
        printf("Densidade Populacional: Carta 1 - (%s) Venceu!\n",Cidade1);
    }else{
        printf("Densidade populacional: Carta 2 -(%s) Venceu!\n",Cidade2);
    }
    if (PIB_per_capita1>PIB_per_capita2){
        printf("Pib per capita: Carta 1 - (%s) Venceu\n",Cidade1);
    }else{
        printf("Pib per capita: Carta 2 - (%s) Venceu!\n",Cidade2);
    }
    if (superpodercidade1>superpodercidade2){
        printf("Super Poder: Carta 1 - (%s) Venceu!\n",Cidade1);
    }else{
        printf("Super Poder: Carta 2 - (%s) Venceu!",Cidade2);
    }
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
