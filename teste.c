#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//

int main() {
    char Estado1[100],Estado2[100],Cidade1[100],Cidade2[100];
    int Codigo1,Codigo2,NPT1,NPT2,opcao1,opcao2;
    double Area1,Area2,PIB1,PIB2,Densidade_populacional1,Densidade_populacional2,PIB_per_capita1,PIB_per_capita2,inversodensidade,inversodensidade2,total1,total2;
    unsigned long int Populacao1,Populacao2;
    double superpodercidade1,superpodercidade2,resultado1,resultado2,soma1,soma2;

    printf("Bem vindo ao Jogo Super Trunfo - Países\n");
    printf("Voçe deverá cadastrar 2 cartas conforme oque for pedido abaixo de acordo com o país e cidade escolhidos. E depois escolher as opções de comparação\n");


    printf("Digite a primeira letra do Estado 1: ");
    scanf(" %c",Estado1);
    printf("Digite a primeira letra do Estado 2: ");
    scanf(" %c",Estado2);
    printf("Digite o codigo do Estado 1: ");
    scanf("%d",&Codigo1);
    printf("Digite o codigo do Estado 2: ");
    scanf("%d",&Codigo2);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]",Cidade1);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]",Cidade2);
    printf("Digite a quantidade populacional da cidade1 : ");
    scanf("%lu",&Populacao1);
    printf("Digite a quantidade populacional da cidade2: ");
    scanf("%lu",&Populacao2);
    printf("Digite a quantidade de pontos turisticos da cidade1: ");
    scanf("%d",&NPT1);
    printf("Digite a quantidade de pontos turisticos da cidade2: ");
    scanf("%d",&NPT2);
    printf("Digite a area total da cidade1: ");
    scanf("%lf",&Area1);
    printf("Digite a area total da cidade2 : ");
    scanf("%lf",&Area2);
    printf("Digite o PIB da cidade1: ");
    scanf("%lf",&PIB1);
    printf("Digite o PIB da cidade2: ");
    scanf("%lf",&PIB2);

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



    if (Populacao1<=0){
        printf("Valor invalido!\n");
        printf("A populacção nao pode ser igual ou menor que 0\n");
    }
    if (Populacao2<=0){
        printf("Valor inválido!\n");
        printf("A populacção não pode ser igual ou menor que 0\n");
    }
    if (Area1<=0){
        printf("Valor inválido!\n");
        printf("A area não pode ser menor ou igual a 0");
    }
      if (Area2<=0){
        printf("Valor inválido!\n");
        printf("A area não pode ser menor ou igual a 0");
    }
    // aqui é um bloco para transformar alguns valores 
    Densidade_populacional1 = (Populacao1)/Area1; //calcula a densidade
    PIB_per_capita1 = (PIB1)/Populacao1;

    Densidade_populacional2 = (Populacao2)/Area2;
    PIB_per_capita2 = (PIB2)/Populacao2;

    inversodensidade = 1/Densidade_populacional1;
    inversodensidade2 = 1/Densidade_populacional2;

    superpodercidade1 = inversodensidade+Populacao1+Area1+PIB1+NPT1+PIB_per_capita1;
    superpodercidade2 = inversodensidade2+Populacao2+Area2+PIB2+NPT2+PIB_per_capita2;
     // aqui é um bloco para transformar alguns valores 

    // Aqui eu simplifiquei alguns resultados colocando menos casas decimais.
    // Para facilidar a visualização na saída. 
    // Isso pode afetar alguns resultado colocando valores aproximados.
    printf("\nCarta1: \n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Numero de pontos turistico\n");
    printf("5-Densidade populacional\n");
    printf("6-PIB per capita\n");
    printf("7-Superpoder\n");
    scanf("%d",&opcao1);

    do{//
    printf("\nCarta 2:\n");
    printf("1-População\n");          
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Numero de pontos turisticos\n");
    printf("5-Densidade populacional\n");
    printf("6-PIB per capita\n");
    printf("7-Superpoder\n");
    scanf("%d",&opcao2);
    }while (opcao1 == opcao2);
    


    switch (opcao1){
        case 1: // População
            resultado1 = Populacao1;
            resultado2 = Populacao2;
            break;
        case 2: // PIB
            resultado1 = PIB1;
            resultado2 = PIB2;
            break;
        case 3: // Número de Pontos Turísticos
            resultado1 = NPT1;
            resultado2 = NPT2;
            break;
        case 4: // Área
            resultado1 = Area1;
            resultado2 = Area2;
            break;
        case 5: // Densidade Populacional
            resultado1 = Densidade_populacional1;
            resultado2 = Densidade_populacional2;
            break;
        case 6: // Superpoder
            soma1 = superpodercidade1;
            soma2 = superpodercidade2;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }
    switch (opcao2){
        case 1: // População
            soma1 = Populacao1;
            soma2 = Populacao2;
            break;
        case 2: // PIB
            soma1 = PIB1;
            soma2 = PIB2;
            break;
        case 3: // Número de Pontos Turísticos
            soma1 = NPT1;
            soma2 = NPT2;
            break;
        case 4: // Área
            soma1 = Area1;
            soma2 = Area2;
            break;
        case 5: // Densidade Populacional
            soma1 = Densidade_populacional1;
            soma2 = Densidade_populacional2;
            break;
        case 6: // Superpoder
            soma1 = superpodercidade1;
            soma2 = superpodercidade2;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }
    
    if (opcao1 == 5 || opcao2 == 5) {  // Densidade Populacional (menor valor vence)
        if (resultado1 < resultado2) {
            printf("Densidade populacional:\n");
            printf("Carta 1 venceu ! \n");
        } else {
            printf("Carta 2 venceu !\n");
        }
    } else {  // Para os outros atributos (maior valor vence)
        if (resultado1 > resultado2) {
            printf("Densidade populacional:\n");
            printf("Carta 1 venceu!\n");
        } else {
            printf("Carta 2 venceu !\n");
        }
    }
      
    total1 = resultado1 + soma1;
    total2 = resultado2 + soma2;
    
    if (total1 > total2) {
        printf("Carta 1 venceu a rodada!\n");
    } else if (total2 > total1) {
        printf("Carta 2 venceu a rodada!\n");
    } else {
        printf("\nEmpate! As somas dos atributos são iguais.\n");
    }

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

}
