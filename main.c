#include "camisa.h"

int main(){
   Camisa p, *a;
    a=&p;

   criarcamisa(a, 'm', 'd', 'a', 10.00, 1);
   imprime(a);

   vermarca(a, 'm');
   imprime(a);

   vertipo(a, 'd');
   imprime(a);

   vercor(a, 'a');
   imprime(a);

   verpreco(a, 10.00, 2);
   imprime(a);

   verquantidade(a, 1);
   imprime(a);

   exclui(a);
   imprime(a);

};
