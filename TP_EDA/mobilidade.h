#pragma once
// Estrutura para representar um meio de mobilidade el�trica
typedef struct mobilidade
{
    int id; // Identificador �nico do meio de mobilidade
    char tipo[20]; // Tipo do meio de mobilidade (ex: bicicleta el�trica, patinete el�trico)
    float nivel_bateria; // N�vel atual da bateria (em porcentagem)
    int alugada; // Indica se o meio de mobilidade est� alugado (1) ou n�o (0)
    struct mobilidade* next; // Ponteiro para o pr�ximo meio de mobilidade na lista

} Mobilidade;

void listarMobilidades(Mobilidade* mobilidade);
Cliente* inserirMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, int alugada);
Cliente* removerMobilidae(Mobilidade* mobilidade, int id);
Cliente* atualizarMobilidade(Mobilidade* mobilidade, int id, char tipo[], float nivel_bateria, int alugada);