#include "camisa.h"

void *criarcamisa( Camisa *p, char marca, char tipo, char cor, float preco, int quantidade){
  p->marca=marca;
  p->tipo=tipo;
  p->cor=cor;
  p->preco=preco;
  p->quantidade=quantidade;
}
void *vermarca(Camisa *p, char marca){
      if(p==NULL){
          printf(" marca não existe\n");
         return p;
    }
printf("marca: %c\n", p->marca);
}
void *vertipo(Camisa *p, char tipo){
  if(p==NULL){
  printf(" tipo não existe\n");
  return p;
}
printf("tipo: %c\n", p->tipo);
}
void *vercor(Camisa *p,char cor){
  if(p==NULL){
  printf(" cor não existe\n");
  return p;
}
printf("tipo: %c\n", p->cor);
}
void *verpreco(Camisa *p, float preco, int quantidade){
  float res;
  res = preco + quantidade;

  printf("o preço é: %f \n", res);
  return p;
}
void *verquantidade( Camisa *p, int quantidade){
  printf("quantidade: %d \n", p->quantidade);
  return p;
}
void imprime(Camisa *p){
  printf("marca: %c\n", p->marca);
  printf("tipo: %c\n", p->tipo);
  printf("o cor é: %c \n", p->cor);
  printf("o preço é: %f \n", p->preco);
  printf("o quantidade é: %d \n", p->quantidade);
}
Camisa * exclui(Camisa *b){
  b=NULL;
return b;
};
