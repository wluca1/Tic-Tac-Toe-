#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matriz (char mat[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      mat[i][j]=' ';
}

void tabuleiro (char mat[3][3])
{
  int i=0,x=0;
  printf("  0   1   2  ");
  while(x<3)
    {
      i=0;
      printf("\n%d",x);
      while(i<3)
        {
          if(i==1)
            printf("| %c |",mat[x][i]);
          else
            printf(" %c ",mat[x][i]);
          i++;
        }
      printf("\n");
      if(x<2)
        printf("  _________");
      x++;
    }
}

void maquina (char mat[3][3])
{
  int i,j;
  srand(time(NULL));
  do {
    i=rand()%3;
    j=rand()%3;
  } while (mat[i][j] != ' ');
  mat[i][j]='O';
}

void humano (char mat[3][3])
{
  int i,j;
  printf("Digite a linha: ");
  scanf("%d",&i);
  printf("Digite a coluna: ");
  scanf("%d",&j);
  if(mat[i][j]==' ')
    mat[i][j]='X';
  else
    humano(mat);
}

int verifica (char mat[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    if(mat[i][0]==mat[i][1] && mat[i][1]==mat[i][2] && mat[i][0]!=' ')
      return 1;
    if(mat[0][i]==mat[1][i] && mat[1][i]==mat[2][i] && mat[0][i]!=' ')
      return 1;
  }
  if(mat[0][0]==mat[1][1] && mat[1][1]==mat[2][2] && mat[0][0]!=' ')
    return 1;
  if(mat[0][2]==mat[1][1] && mat[1][1]==mat[2][0] && mat[0][2]!=' ')
    return 1;
  return 0;
}

int main()
{
  char mat[3][3];
  int i,j;
  matriz(mat);
  tabuleiro(mat);
  for(i=0;i<9;i++)
  {
    if(i%2==0)
      humano(mat);
    else
      maquina(mat);
    tabuleiro(mat);
    if(verifica(mat)==1)
    {
      if(i%2==0)
        printf("Voce ganhou!");
      else
        printf("Voce perdeu!");
        break;
    }
    }
    if(i==9)
        printf("Empate!");
    return 0;
}