#pragma once
// Estrutura para representar um meio de mobilidade elétrica
typedef struct mobilidade
{
    int id; // Identificador único do meio de mobilidade
    char tipo[20]; // Tipo do meio de mobilidade (ex: bicicleta elétrica, patinete elétrico)
    float nivel_bateria; // Nível atual da bateria (em porcentagem)
    int alugada; // Indica se o meio de mobilidade está alugado (1) ou não (0)
    struct mobilidade* next; // Ponteiro para o próximo meio de mobilidade na lista

} Mobilidade;

void listarMobilidades(Mobilidade* mobilidade);
Cliente* inserirMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, int alugada);
Cliente* removerMobilidae(Mobilidade* mobilidade, int id);
Cliente* atualizarMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, int alugada);