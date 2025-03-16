#include <stdio.h>

int main() {

    // Variáveis Cartas

    char codigo [3];
    char NomeCidade [50];
    char NomeEstado [50];
    char NomePais [50];
    int PTuristicos, Populacao;
    float Area, PIB;


     // Realizando o Cadastro da Carta 01

     printf("Cadastre sua primeira carta! \n");

        // Cadastrando o nome do País
     printf("Qual o País? \n");
     scanf( " %[^\n]", NomePais);

        // Cadastrando o nome do Estado
     printf("Qual o Estado? \n");
     scanf(" %[^\n]", NomeEstado);

        // Cadastrando o código da Cidade
     printf("Digite o código da carta: \n");
     scanf(" %[^\n]", codigo);

        // Cadastrando o nome da Cidade
     printf("Qual a Cidade? \n");
     scanf(" %[^\n]", NomeCidade);

        // Cadastrando o número da População

     printf("Certo! Qual a quantidade da população? \n");
     scanf("%d", &Populacao);

        // Cadastrando qual a área total
     printf("Qual o tamanho da sua área (km²)? \n");
     scanf("%f", &Area);

        // Cadastrando o PIB
     printf("Qual é o PIB da cidade (Exemplo: 123.45 Bilhões)? \n");
     scanf("%f", &PIB);

        // Cadastrando a quantidade de pontos turísticos
     printf("Por último, quantos pontos turísticos tem na cidade? \n");
     scanf("%d", &PTuristicos);
    

     //Cálculo de Densidade populacional e PIB per capita - Carta 01

     float DensidadePopu, PIBPerCapita;

     DensidadePopu = (float) Populacao / Area;
     PIBPerCapita = PIB * 1000000000 / (float) Populacao;

     printf("\n Primeira Carta Cadastrada! \n");


     // Exibição Carta 01

     printf("\n Carta 1 \n");
     printf("Código da Carta: %s \n", codigo); // Linhas para visualização do código da carta
     printf("País: %s\n", NomePais); // Linha para visualização do País
     printf("Estado: %s\n", NomeEstado); // Linha para visualização do Estado
     printf("Cidade: %s\n", NomeCidade); // Linha para visualização da Cidade
     printf("População: %d\n", Populacao); // Linha para visualização da População
     printf("Área Total: %.2f km²\n", Area); // Linha para visualização da Área
     printf("PIB: %.2f bilhões de reais\n", PIB); // Linha para visualização do PIB
     printf("Pontos Turísticos: %d\n", PTuristicos); // Linha para visualização dos Pontos Turísticos
     printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopu); //Linha para visualização da Densidade Populacional
     printf("PIB per Capita: %.2f reais \n", PIBPerCapita); //Linha para visualização do PIB per Capita


     printf("\n Cadastre sua segunda carta \n");

     char codigo2 [3];
     char NomeCidade2 [50];
     char NomeEstado2 [50];
     char NomePais2 [50];
     int PTuristicos2, Populacao2;
     float Area2, PIB2;


      // Cadastrando o nome do País
     printf("Qual o País? \n");
     scanf( " %[^\n]", NomePais2);

        // Cadastrando o nome do Estado
     printf("Qual o Estado? \n");
     scanf(" %[^\n]", NomeEstado2);

        // Cadastrando o código da Cidade
     printf("Digite o código da carta: \n");
     scanf(" %[^\n]", codigo2);

        // Cadastrando o nome da Cidade
     printf("Qual a Cidade? \n");
     scanf(" %[^\n]", NomeCidade2);

        // Cadastrando o número da População
     printf("Certo! Qual a quantidade da população? \n");
     scanf(" %d", &Populacao2);

        // Cadastrando qual a área total
     printf("Qual o tamanho da sua área (km²)? \n");
     scanf("%f", &Area2);

        // Cadastrando o PIB
     printf("Qual é o PIB da cidade (Exemplo: 123.45 Bilhões)? \n");
     scanf("%f", &PIB2);

        // Cadastrando a quantidade de pontos turísticos
     printf("Por último, quantos pontos turísticos tem na cidade? \n");
     scanf("%d", &PTuristicos2);


        //Cálculo de Densidade populacional e PIB per capita - Carta 02

     float DensidadePopulacao2, PIBPerCapita2;

     DensidadePopulacao2 = (float) Populacao2 / Area2;
     PIBPerCapita2 = PIB2 * 1000000000 / (float) Populacao2;


     printf("\n OK, Carta 2 Cadastrada! \n");


     // Exibição Carta 02

     printf("\n Carta 2 \n");
     printf("Código da Carta: %s \n", codigo2); // Linhas para visualização do código da carta
     printf("País: %s\n", NomePais2); // Linha para visualização do País
     printf("Estado: %s\n", NomeEstado2); // Linha para visualização do Estado
     printf("Cidade: %s\n", NomeCidade2); // Linha para visualização da Cidade
     printf("População: %d\n", Populacao2); // Linha para visualização da População
     printf("Área Total: %.2f km²\n", Area2); // Linha para visualização da Área
     printf("PIB: %.2f bilhões de reais\n", PIB2); // Linha para visualização do PIB
     printf("Pontos Turísticos: %d\n", PTuristicos2); // Linha para visualização dos Pontos Turísticos
     printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacao2); //Linha para visualização da Densidade Populacional
     printf("PIB per Capita: %.2f reais \n", PIBPerCapita2); //Linha para visualização do PIB per Capita
    



     return 0;
    
}