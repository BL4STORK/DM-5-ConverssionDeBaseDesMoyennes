#include <stdio.h>

#include <stdio.h>
#include <math.h>

void convertirBaseBinaire(int nombre){
    if (nombre == 0) {
        return;
    }
    convertirBaseBinaire(nombre / 2);
    printf("%d", nombre % 2);
}

void convertirBaseHexadecimal(int nombre) {
    if (nombre != 0) {
        convertirBaseHexadecimal(nombre / 16);
        int nombrediviser = nombre % 16;
        if (nombrediviser < 10) {
            printf("%d", nombrediviser);
        } else {
            printf("%c", 'A' + nombrediviser - 10);
        }
    }
}

float sommeNotes(int n) {
    if (n == 0) {
        return 0;
    } else {
        float note;
        printf("Entrez la note %d sur 20 : ", n);
        scanf("%f", &note);
        return note + sommeNotes(n - 1);
    }
}

int main() {
    int nombreDeNotes;
    printf("Combien de notes voulez-vous entrer ?\n ");
    scanf("%d", &nombreDeNotes);

    float somme = sommeNotes(nombreDeNotes);
    float moyenne = somme / nombreDeNotes;

    printf("Moyenne en decimal : %.2f\n", moyenne);
    printf("Moyenne en binaire : ");
    convertirBaseBinaire((int)moyenne);
    printf("\nMoyenne en hexadecimal : ");
    convertirBaseHexadecimal((int)moyenne);
    printf("\n");

    return 0;
}


