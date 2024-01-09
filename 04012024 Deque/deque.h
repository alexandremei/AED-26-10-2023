typedef struct Soldado {
    int codigo;
    char nome[50];
    char grau[50];
    struct Soldado* prox;
    struct Soldado* ant;
} Soldado;

typedef struct Deque {
    Soldado* inicio;
    Soldado* fim;
    int tamanho;
} Deque;

Deque* criarDeque();
int vazia(Deque* deque);
int inserir_inicio(Deque* deque, Soldado* soldado);
int inserir_fim(Deque* deque, Soldado* soldado);
Soldado* remover_inicio(Deque* deque);
Soldado* remover_fim(Deque* deque);
Soldado* primeiro(Deque* deque);
Soldado* ultimo(Deque* deque);
int contar(Deque* deque);
Soldado* remover_pos(Deque* deque, int pos);
void problemaJosephus(Deque* deque, int n);
