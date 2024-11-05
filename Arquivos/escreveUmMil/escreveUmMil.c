#include <stdio.h>

void main()
{

  // declaração de variáveis
  int i;
  FILE *arq; // passo1 - criar uma variavel para arquivo do tipo file

  // passo 2: associar a variavel FILE* a um caminho que represente o arquivo e abrir arquivo
  arq = fopen("numero.txt", "w"); // r- read, w- write(apaga), a- append(ao final)

  // passo 3: verificar se o arquivo foi aberto
  if (arq != NULL)
  {
    // passo 4 : manipulando o arquivo
    for (i = 1; i <= 1000; i++)
    {
      fprintf(arq, "%d\n", i); // f - file
    }

    // passo 5: fechar o arquivo
    fclose(arq);
    printf("Ocorreu tudo bem");
  }
  else
  {
    printf("Erro: arquivo não foi aberto");
  }
}