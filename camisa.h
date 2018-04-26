#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct camisa{
	char marca, tipo, cor;
	float preco;
	int quantidade;
};
typedef struct camisa Camisa;

void *criarcamisa(Camisa *p, char marca, char tipo, char cor, float preco, int quantidade);
void *vermarca(Camisa *p, char marca);
void *vertipo(Camisa *p, char tipo);
void *vercor(Camisa *p, char cor);
void *verpreco(Camisa *p, float preco, int quantidade);
void *verquantidade(Camisa *p, int quantidade);
void imprime(Camisa *p);
Camisa * excluir(Camisa *b);
