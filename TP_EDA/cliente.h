#pragma once
// Estrutura para representar um cliente
typedef struct cliente
{
    int id; // Identificador �nico do cliente
    char nome[50]; // Nome do cliente
    float saldo; // Saldo dispon�vel na carteira do cliente
    struct mobilidade_eletrica* mobilidade_alugada; // Ponteiro para o meio de mobilidade el�trica alugado pelo cliente (ou NULL se n�o estiver alugando nenhum)
    struct cliente* next; // Ponteiro para o pr�ximo cliente na lista

} cliente;