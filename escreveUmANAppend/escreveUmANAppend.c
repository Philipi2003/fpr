#include <stdio.h>
// #include <string.h>

// declaracao funcao
int escrevaFuncaoDeUmAN(char url[], int N);

void main()
{

  int n;
  char endereco[50];

  printf("Contar ate quanto?");
  scanf("%d", &n);
  printf("Nome do arquivo?");
  fflush(stdin);
  gets(endereco);
  strcat(endereco, ".txt");

  escrevaFuncaoDeUmAN(endereco, n) ? printf("O arquivo %s foi gerado com sucesso", endereco) : printf("Arquivo não foi aberto");
}

// implementacao funcao
int escrevaFuncaoDeUmAN(char url[], int n)
{

  // declaração de variáveis
  int i;
  FILE *arq; // passo1 - criar uma variavel para arquivo do tipo file

  // passo 2: associar a variavel FILE* a um caminho que represente o arquivo e abrir arquivo
  arq = fopen(url, "a"); // r- read, w- write(apaga), a- append(ao final)

  // passo 3: verificar se o arquivo foi aberto
  if (arq != NULL)
  {
    // passo 4 : manipulando o arquivo
    for (i = 1; i <= n; i++)
    {
      fprintf(arq, "%d\n", i); // f - file
    }

    // passo 5: fechar o arquivo
    fclose(arq);
    return 1;
  }
  else
  {
    return 0;
  }
}