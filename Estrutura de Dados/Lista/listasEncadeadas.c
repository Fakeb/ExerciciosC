// Revis�o sobre listas simples e listas circulares
//    -> simples = p->prox do �ltimo � NULL
//    -> circular = p->prox do �ltimo � l (aponta para o 1o elemento).
//    Opera��es
//       -> inserir
//          -> usa vari�vel novo (aloca��o)
//          -> alocar mem�ria
//          -> depositar valores
//          -> percorrer (encontrar a posi��o de inser��o)
//          -> engatar
//       -> remover
//          -> usa vari�vel lixo (libera��o da mem�ria)
//       -> percorrer -> uso do ponteiro p (percurso) e do  ponteiro r como retaguarda
//          -> simples
//             for (r = NULL, p = l; p; r = p, p = p->prox);
            
//          -> circular
//             for (r = NULL, p = l; p->prox != l; r = p, p = p->prox);
         
//       -> localizar
      

int ehCircular(Celula *l) {
   Celula *p;
   if (!l) return -1;
   
   for (p = l; p; p = p->prox) {
      if (p->prox == l) return 1;
   }
   return 0;
}

void imprimirGenerica(Celula *l) {
   Celula *p;
   
   if (!l) return;
   
   for (p = l; p; p = p->prox) {
      if (p->prox == l) break;

      printf("%d\t", p->dado);
   }
   if (p) printf("%d\t", p->dado);
}