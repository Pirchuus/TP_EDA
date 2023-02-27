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
Cliente* inserirGestor(Gestor* gestor, int id, char nome[], char password[]);
Cliente* removerGestor(Gestor* gestor, int id);
Cliente* atualizarGestor(Gestor* gestor, int id, char nome[], char password[]);