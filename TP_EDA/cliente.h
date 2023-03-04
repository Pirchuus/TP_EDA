#pragma once
#include "mobilidade.h"

// Estrutura para representar um cliente
typedef struct cliente
{
    int nif; // Identificador �nico do cliente
    char nome[50]; // Nome do cliente
    char email[50]; // E-mail do cliente
    float saldo; // Saldo dispon�vel na carteira do cliente
    struct mobilidade* mobilidade_alugada; // Ponteiro para o meio de mobilidade el�trica alugado pelo cliente (ou NULL se n�o estiver alugando nenhum)
    struct cliente* next; // Ponteiro para o pr�ximo cliente na lista

} Cliente;

void listarClientes(Cliente* cliente);
int existeCliente(Cliente* cliente, int nif);
Cliente* inserirCliente(Cliente* cliente, int nif, char nome[], char email[], float saldo);
Cliente* removerCliente(Cliente* cliente, int nif);
Cliente* atualizarCliente(Cliente* cliente, int nif, char nome[], char email[], float saldo);

