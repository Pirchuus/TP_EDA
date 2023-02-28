#pragma once
#include "mobilidade.h"

// Estrutura para representar um cliente
typedef struct cliente
{
    int id; // Identificador único do cliente
    char nome[50]; // Nome do cliente
    float saldo; // Saldo disponível na carteira do cliente
    struct mobilidade* mobilidade_alugada; // Ponteiro para o meio de mobilidade elétrica alugado pelo cliente (ou NULL se não estiver alugando nenhum)
    struct cliente* next; // Ponteiro para o próximo cliente na lista

} Cliente;

void listarClientes(Cliente* cliente);
int existeCliente(Cliente* cliente, int id);
Cliente* inserirCliente(Cliente* cliente, int id, char nome[], float saldo);
Cliente* removerCliente(Cliente* cliente, int id);
Cliente* atualizarCliente(Cliente* cliente, int id, char nome[], float saldo);

