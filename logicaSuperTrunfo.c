#include <stdio.h>

int main (){
  float Area, PIB;
  string CodigodaCarta, NomedaCidade, Estado;
  int  Populacao, NumerodePontosTuristicos;
  var Area = 1.521;
  var PIB = 9000000;
  var CodigodaCarta = 01153 000;
  var NomedaCidade = sao paulo;
  var Estado = SP;
  var Populacao = 11.451.999;
  var NumerodePontosTuristicos = 187;

  var DensidadePopulacional =  Populacao / Area;
 
  var PIBperCapita =  PIB / Populacao;
  
  var PopulacaoRio =  6.211.223;
  var AreaRio = 1.200;

  var DensidadePopulacionalRio =  PopulacaoRio / AreaRio;
 
  
  printf("O PIB per capita da cidade de são paulo é " PIBperCapita "\n");
  printf("A desensidade populacional da cidade de são paulo é " DensidadePopulacional "\n");

  if (DensidadePopulacionalRio > DensidadePopulacional){
      printf(" São paulo venceu!")
  }else{
    printf("São paulo perdeu!")
  }
}