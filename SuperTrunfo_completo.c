#include<stdio.h>
#include<string.h>

int main(){

printf("   ____                     ______\n");
printf("  / ___| _   _ _ __   ___  |__  (_)_ __   ___  ___ ___\n");
printf("  | |  _ | | | | '_ \\ / _ \\    / /| | '_ \\ / _ \\/ __/ __|\n");
printf("  | |_| || |_| | | | |  __/   / /_| | | | |  __/\\__ \\__ \\\n");
printf("   \\____| \\__, |_| |_|\\___|  /____|_|_| |_|\\___||___/___/\n\n");
       
    
    char Estado1[3],Estado2[3],continuar;
    char CodigoDaCarta1[4],CodigoDaCarta2[4]; 
    char NomeDaCidade1[50],NomeDaCidade2[50];
    int Populacao1,Populacao2;
    float Area1,Area2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float PIBPercapta1,PIBPercapta2;
    float PIB1,PIB2;
    int NumeroDePontosTuristicos1,NumeroDePontosTuristicos2;
    char CartaEscolhida[50];
    int Atributo1,Atributo2;


 //Cadastro de cartas  

//carta1
printf("   Seja bem vindo ao jogo Super Trunfo. \n\n");
printf("digite os dados da primeira carta!! \n");

printf("Digite as iniciais de um Estado com 2 letras \n");
scanf("%s", Estado1);
printf("Digite um codigo para a carta com a inicial do estado e um numero com 2 digitos. Ex: p01 \n");
scanf("%s", CodigoDaCarta1 );
printf("Digite o nome de uma Cidade \n");
scanf("%s", NomeDaCidade1 );
printf("Digite um valor com a quantidade de pessoas da cidade \n");
scanf("%d", &Populacao1 );
printf("Digite o valor da area da cidade \n");
scanf("%f", &Area1 );
printf("Digite o valor do PIB da Cidade \n");
scanf("%f", &PIB1 );
printf("Digite a quantidade de pontos turisticos da Cidade \n");
scanf("%d", &NumeroDePontosTuristicos1 );
printf("\n\n");


//carta2
printf("digite os dados da segunda carta \n");

printf("Digite as iniciais de um estado com 2 letras \n");
scanf("%s", Estado2);
printf("Digite um codigo para a carta com a inicial do estado e um numero com 2 digitos. Ex: p01 \n");
scanf("%s", CodigoDaCarta2 );
printf("Digite o nome de uma Cidade \n");
scanf("%s", NomeDaCidade2 );
printf("Digite um valor com a quantidade de pessoas da cidade \n");
scanf("%d", &Populacao2 );
printf("Digite o valor da area da cidade \n");
scanf("%f", &Area2 );
printf("Digite o valor do PIB da Cidade \n");
scanf("%f", &PIB2 );
printf("Digite a quantidade de pontos turisticos da Cidade \n");
scanf("%d", &NumeroDePontosTuristicos2 );
printf("\n\n");


//calcula e exibir a densidade populacional e pib percapta
DensidadePopulacional1 = Populacao1 / Area1;
DensidadePopulacional2 = Populacao2 / Area2;
PIBPercapta1 = PIB1 / Populacao1;
PIBPercapta2 = PIB2 / Populacao2;

printf("A Densidade Populacional da Carta %s, %s e: %.2f habitantes/km \n",Estado1,NomeDaCidade1,DensidadePopulacional1);
printf("O PIB Percapta da carta %s, %s e: %.2f Reais \n\n",Estado1,NomeDaCidade1,PIBPercapta1);
printf("A Densidade Populacional da Carta %s, %s e: %.2f habitantes/km\n",Estado2,NomeDaCidade2,DensidadePopulacional2);
printf("O PIB Percapta da carta %s, %s e: %.2f Reais \n\n",Estado2,NomeDaCidade2,PIBPercapta2);



//comparar um atributo escolhido:a
do{

printf("\n\n\n");
printf("Agora vamos comecar a Batalha!! \n\n");

printf("Escreva a cidade da carta que vc escolheu para batalhar!!. \n");

printf("%s,%s \n",Estado1,NomeDaCidade1);
printf("%s,%s \n",Estado2,NomeDaCidade2);
scanf("%s",CartaEscolhida);

if (strcmp(CartaEscolhida,NomeDaCidade1)==0)
{
printf("agora digite um numero para escolher qual atributo da carta %s para estaremos Batalhando.\n\n",NomeDaCidade1);

// Exibição da 1 Carta cadastrada:  

printf("Cidade: %s \n", NomeDaCidade1);
printf("Estado: %s \n", Estado1);
printf("Codigo: %s \n", CodigoDaCarta1);
printf("1-Populacao: %d \n", Populacao1);
printf("2-Area: %.2f Km \n", Area1);
printf("3-PIB: %.2f Reais\n", PIB1);
printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos1);
printf("5-Densidade Populacional: %.2f hab/km\n",DensidadePopulacional1);
printf("6-PIB per Capita: %.2f reais\n",PIBPercapta1);
    
scanf("%d",&Atributo1);
printf("\n\n");

if (Atributo1==1)//atributo população
{
    printf("Voce escolheu o atributo Populacao: %d\n",Populacao1);
    if (Populacao1>Populacao2)
    {
        printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n",Populacao1,NomeDaCidade1);
    }
    else{
        printf("O atributo Populacao: %d, da carta %s e menor voce Perdeu!! \n",Populacao1,NomeDaCidade1);
    }
}

if (Atributo1==2)//atributo area
{
    printf("Voce escolheu o atributo Area: %.2f\n",Area1);
    if (Area1>Area2)
    {
        printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n",Area1,NomeDaCidade1);
    }
    else{
        printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n",Area1,NomeDaCidade1);
    }
}

if (Atributo1==3)//pib
{
    printf("Voce escolheu o atributo PIB: %.2f\n",PIB1);
    if (PIB1>PIB2)
    {
        printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n",PIB1,NomeDaCidade1);
    }
    else{
        printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n",PIB1,NomeDaCidade1);
    }
}

if (Atributo1==4)//numero de pontos turisticos
{
    printf("Voce escolheu o atributo Pontos Turisticos: %d\n",NumeroDePontosTuristicos1);
    if (NumeroDePontosTuristicos1>NumeroDePontosTuristicos2)
    {
        printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n",NumeroDePontosTuristicos1,NomeDaCidade1);
    }
    else{
        printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n",NumeroDePontosTuristicos1,NomeDaCidade1);
    }
}

if (Atributo1==5)//densidade populacional
{
    printf("Voce escolheu o atributo Densidade Populacional: %.2f\n",DensidadePopulacional1);
    if (DensidadePopulacional1>DensidadePopulacional2)
    {
        printf("O atributo Densidade Populacional: %.2f, da carta %s e maior voce Venceu!! \n",DensidadePopulacional1,NomeDaCidade1);
    }
    else{
        printf("O atributo Densidade Populacional: %.2f, da carta %s e menor voce Perdeu!! \n",DensidadePopulacional1,NomeDaCidade1);
    }
}

if (Atributo1==6)//pib percapta
{
    printf("Voce escolheu o atributo PIB Percapta: %.2f\n",PIBPercapta1);
    if (PIBPercapta1>PIBPercapta2)
    {
        printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n",PIBPercapta1,NomeDaCidade1);
    }
    else{
        printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n",PIBPercapta1,NomeDaCidade1);
    }
}

}




else{
printf("agora digite um numero para escolher qual atributo da carta %s para estaremos Batalhando.\n\n",NomeDaCidade2);

printf("Cidade: %s \n", NomeDaCidade2);
printf("Estado: %s \n", Estado2);
printf("Codigo: %s \n", CodigoDaCarta2);
printf("1-Populacao: %d \n", Populacao2);
printf("2-Area: %.2f Km \n", Area2);
printf("3-PIB: %.2f Reais\n", PIB2);
printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);
printf("5-Densidade Populacional: %.2f hab/km\n",DensidadePopulacional2);
printf("6-PIB per Capita: %.2f reais\n",PIBPercapta2);

scanf("%d",&Atributo2);
printf("\n\n");

if (Atributo2==1)//atributo população
{
    printf("Voce escolheu o atributo Populacao: %d\n",Populacao2);
    if (Populacao2>Populacao1)
    {
        printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n",Populacao2,NomeDaCidade2);
    }
    else{
        printf("O atributo Popaulacao: %d, da carta %s e menor voce Perdeu!! \n",Populacao2,NomeDaCidade2);
    }
}

if (Atributo2==2)//atributo area
{
    printf("Voce escolheu o atributo Area: %.2f\n",Area2);
    if (Area2>Area1)
    {
        printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n",Area2,NomeDaCidade2);
    }
    else{
        printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n",Area2,NomeDaCidade2);
    }
}

if (Atributo2==3)//pib
{
    printf("Voce escolheu o atributo PIB: %.2f\n",PIB2);
    if (PIB2>PIB1)
    {
        printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n",PIB2,NomeDaCidade2);
    }
    else{
        printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n",PIB2,NomeDaCidade2);
    }
}

if (Atributo2==4)//numero de pontos turisticos
{
    printf("Voce escolheu o atributo Pontos Turisticos: %d\n",NumeroDePontosTuristicos2);
    if (NumeroDePontosTuristicos2>NumeroDePontosTuristicos1)
    {
        printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n",NumeroDePontosTuristicos2,NomeDaCidade2);
    }
    else{
        printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n",NumeroDePontosTuristicos2,NomeDaCidade2);
    }
}

if (Atributo2==5)//densidade populacional
{
    printf("Voce escolheu o atributo Densidade Populacional: %.2f\n",DensidadePopulacional2);
    if (DensidadePopulacional2>DensidadePopulacional1)
    {
        printf("O atributo Densidade Populacional: %.2f, da carta %s e maior voce Venceu!! \n",DensidadePopulacional2,NomeDaCidade2);
    }
    else{
        printf("O atributo Densidade Populacional: %.2f, da carta %s e menor voce Perdeu!! \n",DensidadePopulacional2,NomeDaCidade2);
    }
}

if (Atributo2==6)//pib percapta
{
    printf("Voce escolheu o atributo PIB Percapta: %.2f\n",PIBPercapta2);
    if (PIBPercapta2>PIBPercapta1)
    {
        printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n",PIBPercapta2,NomeDaCidade2);
    }
    else{
        printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n",PIBPercapta2,NomeDaCidade2);
    }
}

}

printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar); // Espaço antes do %c para evitar problemas com buffer
    
    } while (continuar == 's' || continuar == 'S');  // Se o usuário digitar 's', continua o jogo

    printf("Obrigado por jogar! Ate a prosxima.\n");


}