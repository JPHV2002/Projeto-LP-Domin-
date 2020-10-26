#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "DominoModel.h"

void imprimirPecasOrganizadas(Tipo_pecas pc);
void imprimirPecas(Tipo_Mesa pc);
void imprimirMao(Tipo_Jogadores mao, int op);
int menu();
int menuIniciarJogo();
void imprirPcOrganizado(Tipo_pecas pc);
int menuInGame();
int menuComprarPecas();
void desenharMesa(Tipo_Mesa pecasDesenhada);
int menuMesa();
int pecaDescartada();
int posPecaNaMesa();
int novoJogo();
void imprimirErro();
void mostrarRegras();
void mostrarVencedor();
void imprimirDetalhes();
void saveStatus();
void erroLoadGame();
void fimMesa();