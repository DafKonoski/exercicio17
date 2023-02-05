//Escrever um programa que receba um nome -Que conte o número
//de vogais existentes nele. -O programa deverá imprimir o numero
//total de caracteres do nome -Quantas vogais - E a respectiva
//porcentagem das vogais em relação ao total de caracteres.-

#include <stdio.h>

int main() {

  char nome[20];
  int tam;
  int vogais = 0;
  float porc = 0;
  
  printf("Digite um nome:\n");
  gets(nome);

  tam = strlen(nome);

  for(int i = 0; i < tam; i++){
    if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){
      vogais++;
    }
    
  }

  for(int j = 0; j <= tam; j++){
   porc = vogais*100/tam;
  }

  printf("%d caracteres\n", tam);
  printf("%d vogais\n", vogais);
  printf("%f porcento sao vogais\n", porc);
  
}