#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado1[100],Estado2[100],Cidade1[100],Cidade2[100];
    int Codigo1,Codigo2,NPT1,NPT2,opcao;
    float Area1,Area2,PIB1,PIB2,Densidade_populacional1,Densidade_populacional2,PIB_per_capita1,PIB_per_capita2,batalha,inversodensidade,inversodensidade2;
    unsigned long int Populacao1,Populacao2;
    double superpodercidade1,superpodercidade2;

    printf("Bem vindo ao Jogo Super Trunfo - Países\n");
    printf("Voçe deverá cadastrar 2 cartas conforme oque for pedido abaixo. E depois escolher as opções de comparação\n");


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

    // Este bloco de confição ifs serve como tratativa para caso alguns valores que não deveriam sejam 0.
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
    // Este bloco de confição ifs serve como tratativa para caso alguns valores que não deveriam sejam 0.

    Densidade_populacional1 = (Populacao1)/Area1; //calcula a densidade
    PIB_per_capita1 = (PIB1)/Populacao1;

    Densidade_populacional2 = (Populacao2)/Area2;
    PIB_per_capita2 = (PIB2)/Populacao2;

    inversodensidade = 1/Densidade_populacional1;
    inversodensidade2 = 1/Densidade_populacional2;

    superpodercidade1 = inversodensidade+Populacao1+Area1+PIB1+NPT1+PIB_per_capita1;
    superpodercidade2 = inversodensidade2+Populacao2+Area2+PIB2+NPT2+PIB_per_capita2;
    

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
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Numero de pontos turisticos\n");
    printf("4 - Área\n");
    printf("5 - Superpoder\n");
    printf("6 - Densidade Populacional\n");
    printf("7 - Instruções");

    printf("Digite um dos valores para comparação: \n");
    scanf("%d",&opcao);

    switch (opcao){
    case 1:
        printf("A escolha foi: População\n");
        if(Populacao1>Populacao2){
            printf("Carta 1 - (%s) (%ld)\n ",Cidade1,Populacao1);
            printf("Carta 2 - (%s) (%ld) \n",Cidade1,Populacao2);
            printf("Carta 1 Venceu!\n");
        }else {
            printf("Carta 1 - (%s) (%ld)\n ",Cidade1,Populacao1);
            printf("Carta 2 - (%s) (%ld)\n",Cidade2,Populacao2);
            printf("Carta 2 Venceu!!");
        }
        break;
    case 2:
        printf("A escolhe foi: PIB\n");
        if(PIB1>PIB2){
            printf("Carta 1 - (%s) (%.1F)\n ",Cidade1,PIB1);
            printf("Carta 2 - (%s) (%.1f) \n",Cidade1,PIB2);
            printf("Carta 1 Venceu!\n");
        }else {
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,PIB1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade2,PIB2);
            printf("Carta 2 Venceu!!");
        }
        break;
    case 3:
        printf("A escolha foi: Numero de pontos turisticos\n");
        if(NPT1>NPT2){
            printf("Carta 1 - (%s) (%d)\n ",Cidade1,NPT1);
            printf("Carta 2 - (%s) (%d) \n",Cidade1,NPT2);
            printf("Carta 1 Venceu!\n");
        }else{
            printf("Carta 1 - (%s) (%d)\n ",Cidade1,NPT1);
            printf("Carta 2 - (%s) (%d)\n",Cidade2,NPT2);
            printf("Carta 2 Venceu!!");
        }
        break;
    case 4:
        printf("A escolha foi : Área\n");
        if(Area1>Area2){
            printf("Carta 1 - (%s) (%.1f)\n",Cidade1,Area1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade1,Area2);
            printf("Carta 1 Venceu!\n");
        }else {
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,Area1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade2,Area2);
            printf("Carta 2 Venceu!!");
        }
        break;
    case 5:
        printf("A escolha foi: Superpoder\n");
        if(superpodercidade1>superpodercidade2){
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,superpodercidade1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade1,superpodercidade2);
            printf("Carta 1 Venceu!\n");
        }else {
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,superpodercidade1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade2,superpodercidade2);
            printf("Carta 2 Venceu!!");
        }
        break;
    case 6:
        printf("A escolha foi: Densidade Populacional\n");
        if(Densidade_populacional1>Densidade_populacional2){
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,Densidade_populacional1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade1,Densidade_populacional2);
            printf("Carta 1 Venceu!\n");
        }else {
            printf("Carta 1 - (%s) (%.1f)\n ",Cidade1,Densidade_populacional1);
            printf("Carta 2 - (%s) (%.1f)\n",Cidade2,Densidade_populacional2);
            printf("Carta 2 Venceu!!");
        }
        break;

    default:
        printf("Opção Inválida\n");
        break;
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
