#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta = '\0';
    menu();
    scanf(" %c", &scelta);

    switch (scelta) {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
    }

    return 0;
}

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() {
    short int a, b;
    printf("Inserisci i due numeri da moltiplicare:");
    scanf("%hd %hd", &a, &b);

    short int prodotto = a * b;

    printf("Il prodotto tra %hd e %hd è: %hd\n", a, b, prodotto);
}

void dividi() {
    int a, b;
    printf("Inserisci il numeratore:");
    scanf("%d", &a);
    printf("Inserisci il denominatore:");
    scanf("%d", &b);

    if (b != 0) {
        float divisione = (float)a / b;
        printf("La divisione tra %d e %d è: %.2f\n", a, b, divisione);
    } else {
        printf("Impossibile dividere per zero.\n");
    }
}

void ins_string() {
    char stringa[10];
    printf("Inserisci la stringa:");
    scanf("%s", stringa);
}
