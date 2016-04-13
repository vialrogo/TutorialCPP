#include <stdio.h>

int main()
{
  int i;

  /* Primeiro vamos provar com i++ */
  i = 5;
  printf("Valor durante a modificação: %d\n",i++);
  printf("Valor depois da modificação: %d\n",i);
  
  /* Agora vamos fazer a prova com ++i */
  i = 5;
  printf("Valor durante a modificação: %d\n",++i);
  printf("Valor depois da modificação: %d\n",i);
  
  return 0;
}
