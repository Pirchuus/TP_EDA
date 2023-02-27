#pragma once
// Estrutura para representar um gestor
typedef struct gestor
{
    int id; // Identificador �nico do gestor
    char nome[50]; // Nome do gestor
    char password[20]; // Senha de acesso do gestor
    struct gestor* next; // Ponteiro para o pr�ximo gestor na lista

} Gestor;

void listarGestores(Gestor* gestor);
Cliente* inserirGestor(Gestor* gestor, int id, char nome[], char password[]);
Cliente* removerGestor(Gestor* gestor, int id);
Cliente* atualizarGestor(Gestor* gestor, int id, char nome[], char password[]);