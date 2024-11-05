#include <stdio.h>

int ordenaOriginal(char urlOriginal);

void main()
{
  char original[50];

  printf("qual o nome do arquivo ");
  fflush(stdin);
  gets(original);
  strcat(original, ".txt");

  ordenaOriginal(original) ? printf("Arquivo ordenado com sucesso") : printf("Erro na leitura");
}

int ordenaOriginal(char urlOriginal[])
{

  FILE *original;
  FILE *novo;
  FILE *descartados;
  int valor, anterior = 0;

  original = fopen(urlOriginal, "r");
  novo = fopen("novo.txt", "w");
  descartados = fopen("descartados.txt", "w");

  if (original != NULL && novo != NULL && descartados != NULL)
  {
    while (fscanf(original, "%d", &valor) != EOF)
    {
      if (valor > anterior)
      {
        fprintf(novo, "%d\n", valor);
        anterior = valor;
      }
      else
      {
        fprintf(descartados, "%d\n", valor);
      }
    }
    return 1;
  }
  else
  {
    return 0;
  }

  fclose(original);
  fclose(novo);
  fclose(descartados);
}