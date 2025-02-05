#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis Cartas

    char codigo [3];
    char NomeCidade [50];
    char NomeEstado [50];
    char NomePais [50];
    int PTuristicos, Populacao;
    float Area, PIB; 
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Realizando o Cadastro das Cartas

    printf("Cadastre sua carta! \n");

        // Cadastrando o nome do País
    printf("Qual o País? \n");
    scanf(" %[^\n]", &NomePais);

        // Cadastrando o nome do Estado
    printf("Qual o Estado? \n");
    scanf(" %[^\n]", &NomeEstado);

        // Cadastrando o código da Cidade
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

        // Cadastrando o nome da Cidade
    printf("Qual a Cidade? \n");
    scanf(" %[^\n]", &NomeCidade);

        // Cadastrando o número da População
    printf("Certo! Qual a quantidade da população? \n");
    scanf(" %f", &Populacao);

        // Cadastrando qual a área total
    printf("Qual o tamanho da sua área (km²)? \n");
    scanf("%f", &Area);

        // Cadastrando o PIB
    printf("Qual é o PIB da cidade (Bilhões)? \n");
    scanf("%f", &PIB);

        // Cadastrando a quantidade de pontos turísticos
    printf("Por último, quantos pontos turísticos tem na cidade? \n");
    scanf("%d", &PTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("OK, Confirma Carta Cadastrada? \n");
    
    printf("País: %s\n", NomePais); // Linha para visualização do País
    printf("Estado: %s\n", NomeEstado); // Linha para visualização do Estado
    printf("Cidade: %s\n", NomeCidade); // Linha para visualização da Cidade
    printf("População: %d\n", Populacao); // Linha para visualização da População
    printf("Área Total: %f km²\n", Area); // Linha para visualização da Área
    printf("PIB: %f bilhões de reais\n", PIB); // Linha para visualização do PIB
    printf("Pontos Turísticos: %d\n", PTuristicos); // Linha para visualização dos Pontos Turísticos



    return 0;
}
