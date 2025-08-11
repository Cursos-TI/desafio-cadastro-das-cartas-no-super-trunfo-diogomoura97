#include <stdio.h>

//Teste Diogo Moura

int main() {
    
    //CARTA 1
    
    char estado1;
    char codigocarta1 [4] = "A01";
    char nomecidade1 [30] = "Fortaleza";
    int populacao1 = 2428678;
    float area1 = 312.353;
    float pib1= 73.4;
    int numeropontosturisticos1 = 40;
    
    //ENTRADA DE DADOS DO USUÁRIO
    printf("Carta 1\n");
    printf("Insira o estado: ");
    scanf("%c",&estado1);
    printf("Insira o código da carta: ");
    scanf("%s",&codigocarta1);
    printf("Insira o nome da cidade: ");
    scanf("%s",&nomecidade1);
    printf("Insira o número da população: ");
    scanf("%d",&populacao1);
    printf("Insira a área (Km2): ");
    scanf("%f",&area1);
    printf("Insira o PIB: ");
    scanf("%f",&pib1);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d",&numeropontosturisticos1);
    
    //SAÍDA DOS DADOS
    printf("Carta 1\n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigocarta1);
    printf("Nome da cidade:  %s \n",nomecidade1);
    printf("População:  %d \n",populacao1);
    printf("Área:  %.2f km2 \n",area1);
    printf("PIB:  %.2f  bilhões de reais \n",pib1);
    printf("Número de pontos turísticos: %d \n",numeropontosturisticos1);
    
    //CARTA 2
    
    char estado2;
    char codigocarta2 [4] = "B01";
    char nomecidade2 [30] = "Manaus";
    int populacao2 = 2279686;
    float area2 = 11401.092;
    float pib2 = 103.28;
    int numeropontosturisticos2 = 13;
    
     //ENTRADA DE DADOS DO USUÁRIO
    printf("Carta 2\n");
    printf("Insira o estado: ");
    scanf("%c",&estado2);
    printf("Insira o código da carta: ");
    scanf("%s",&codigocarta2);
    printf("Insira o nome da cidade: ");
    scanf("%s",&nomecidade2);
    printf("Insira o número da população: ");
    scanf("%d",&populacao2);
    printf("Insira a área (Km2): ");
    scanf("%f",&area2);
    printf("Insira o PIB: ");
    scanf("%f",&pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d",&numeropontosturisticos2);
    
     //SAÍDA DOS DADOS
    printf("Carta 2\n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigocarta2);
    printf("Nome da cidade:  %s \n",nomecidade2);
    printf("População:  %d \n",populacao2);
    printf("Área:  %.2f km2 \n",area2);
    printf("PIB:  %.2f  bilhões de reais \n",pib2);
    printf("Número de pontos turísticos: %d \n",numeropontosturisticos2);
    
    return 0;
}
