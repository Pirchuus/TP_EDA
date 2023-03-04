#pragma once
// Estrutura para representar um gestor
typedef struct gestor
{
    int id; // Identificador único do gestor
    char nome[50]; // Nome do gestor
    char password[20]; // Senha de acesso do gestor
    struct gestor* next; // Ponteiro para o próximo gestor na lista

} Gestor;

void listarGestores(Gestor* gestor);
int existeGestor(Gestor* gestor, int id);
Gestor* inserirGestor(Gestor* gestor, int id, char nome[], char password[]);
Gestor* removerGestor(Gestor* gestor, int id);
Gestor* alterarGestor(Gestor* gestor, int id, char nome[], char password[]);