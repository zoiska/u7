#include <stdio.h>

void aufg1(){
    char name[30];
    printf("Wie heißt du?\n");
    scanf("%s", &name);
    printf("Hallo %s.\n", name);
}

void aufg2(){
    double verpr, kost;
    double prozsatz = 0;
    printf("Verkaufspreis: ");
    scanf("%lf", &verpr);
    printf("Kosten: ");
    scanf("%lf", &kost);
    printf("Prozentsatz: ");
    scanf("%lf", &prozsatz);
    double prov = (prozsatz / 100) * (verpr - kost);
    printf("Die Provision beträgt %.2f", prov);
}

void umsatzrerchner(){
    double preis = 1;
    double menge = 1;
    while(preis || menge != 0){
        printf("Menge und Preis: \n");
        scanf("%lf %lf", &preis, &menge);
        printf("%lf %lf\n", preis, menge);
    }
}

void down(int n)
{
    printf("%d ", n);
    down(n - 1);
}
// unendlich

void newDown(int n){
    if(n == 0) {
        return;
    }
    else{
        newDown(n - 1);
    }
    printf("%d\n", n);
}

/*
int sum = 0;
void summeRekursiv(int n){
    if(n > 0){
        sum = sum + n;
        summeRekursiv(n - 1);
    }
}
*/

int summeRekursiv2(int n){
    int sum;
    if(n == 1){
        sum = 1;
    }
    else{
        sum = n + summeRekursiv2(n - 1);
    }
    printf("%d\n", sum);
    return sum;
}

int fakultät(int n){
    for(int i = n - 1; i > 0; i--){
        n *= i;
    }
    printf("%d\n", n);
    return n;
}

int main() {


    //aufg1();
    //aufg2();
    //umsatzrerchner();
    //down(5);
    //newDown(5);
    //summeRekursiv(9);
    //printf("%d\n", sum);
    //summeRekursiv2(5);
    //fakultät(5);
    return 0;
}
