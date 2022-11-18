#include <stdio.h>
// codigo de FATTOR PACHECO POLICELLA

void pedirPelotas (void);
void ordenarPelotas (void);

struct pelotas{
   int tenis;
   int futbol;
   int basquet;
}pelotas;

void pedirPelotas(){
    int pt, pf, pb;
    printf("¿Cuantas pelotas tenes?");
    printf("\nDe tenis: ");
    scanf("%d", &pt);
    pelotas.tenis +=pt;
    printf("De futbol: ");
    scanf("%d", &pf);
    pelotas.futbol +=pf;
    printf("De basquet: ");
    scanf("%d", &pb);
    pelotas.basquet+=pb;
}

void ordenarPelotas(){
   
    int t, cont[] = {pelotas.tenis, pelotas.basquet, pelotas.futbol};
    int AntOrcont[] = {pelotas.tenis, pelotas.basquet, pelotas.futbol};
    int n = sizeof(cont)/sizeof(int);
    int c[3];
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= i; j--){
            if (cont[j] > cont[j+1]){
                t = cont[j];
                cont[j] = cont[j+1];
                cont[j+1] = t;
            }
        }
    }
    for(int i=0; i<3; i++){
        printf("Pelotas ordenadas: %d\n", cont[i]);
    }
 }

int main()
{
    int i=0;
    do{
        pedirPelotas();
        ordenarPelotas();
        printf("\n¿Queres agregar mas pelotas? si=1/no=0\n");
        scanf("%d", &i);
    printf("\n---------------------------------------------------\n");
    }while(i==1);
    return 0;
}