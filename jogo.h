#ifndef JOGO_H_INCLUDED
#define JOGO_H_INCLUDED

void pausar(float);
void exibe(char matriz[][3]);
void preenche(char matriz[][3]);
char intToChar(int algarismo);
void loading();
void loading2();
void realizaJogada(char matriz[][3], int, char);
int verificaPosicao(char matriz[][3], int);
int linha1(char matriz[][3]);
int linha2(char matriz[][3]);
int linha3(char matriz[][3]);
int coluna1(char matriz[][3]);
int coluna2(char matriz[][3]);
int coluna3(char matriz[][3]);
int diagonalPrimaria(char matriz[][3]);
int diagonalSecundaria(char matriz[][3]);
int verificaFim(char matriz[][3]);


#endif // JOGO_H_INCLUDED


#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif
