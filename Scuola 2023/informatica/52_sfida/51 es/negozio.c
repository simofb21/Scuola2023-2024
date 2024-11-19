#include <stdio.h>
#include <stdlib.h>
#define N 8

typedef struct 
{
    char descrizione[20];
    int qtaDisponibile;
    int scadenza;
} prodotto;
int main(){
    int effettivi=0;
    prodotto scaduti[N];
    prodotto disponibili[N]= {
    {"pere",150,2016}, 
    {"arance",210, 2020}, 
    {"tonno",48, 2017}, 
    {"melanzane",85, 2019}, 
    {"olio",60,2025},
    {"aceto",49,2022}, 
    {"pomodoro",61,2015}, 
    {"pasta",75, 2021} 
};

for (int i = 0; i < 8; i++)
{
    if(disponibili[i].scadenza<2020){
        scaduti[effettivi]=disponibili[i];
        effettivi++;

    }
}
printf("Prodotti scaduti: %d\nEccoli", effettivi);
for (int i = 0; i < effettivi; i++)
{
    printf("\n%s %d %d", scaduti[i].descrizione, scaduti[i].qtaDisponibile, scaduti[i].scadenza);

}
return 0;
}