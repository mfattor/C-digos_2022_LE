#include <stdio.h>
// codigo de FATTOR PACHECO POLICELLA

void pedirPelotas (void);
void ordenarPelotas (void);

struct pelotas{
   int tenis;
   int futbol;
   int basquet;
}pelotas;


struct Pelotas{
  int cant;
  int cant_Rotas;
  int cant_Pinchadas;
  int cant_desinfladas;
  struct Pelotas * next;
} Futbol, Tenis, Basquet;

  struct Pelotas * p = &Futbol;
  Futbol.next = &Tenis;



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
/*
void ordenarPelotas(){
    printf("\n---------------------------------------------------");
    printf("\nPelotas ordenadas:");
    if (pelotas.tenis > pelotas.futbol && pelotas.tenis > pelotas.basquet){
        printf("\nTenis: %d", pelotas.tenis);
        if(pelotas.futbol > pelotas.basquet){
            printf("\nFutbol: %d", pelotas.futbol);
            printf("\nBasquet: %d", pelotas.basquet);
        } else if(pelotas.basquet > pelotas.futbol){
            printf("\nBasquet: %d", pelotas.basquet);
            printf("\nFutbol: %d", pelotas.futbol);
        }
    } else if(pelotas.futbol > pelotas.tenis && pelotas.futbol > pelotas.basquet){
        printf("\nFutbol: %d", pelotas.futbol);
        if(pelotas.basquet > pelotas.tenis){
            printf("\nBasquet: %d", pelotas.basquet);
            printf("\nTenis: %d", pelotas.tenis);
        } else if(pelotas.basquet > pelotas.tenis){
            printf("\nTenis: %d", pelotas.tenis);
            printf("\nBasquet: %d", pelotas.basquet);
        }
    } else if(pelotas.basquet > pelotas.futbol && pelotas.basquet > pelotas.tenis){
        printf("\nBasquet: %d", pelotas.basquet);
        if(pelotas.futbol > pelotas.tenis){
            printf("\nFutbol: %d", pelotas.futbol);
            printf("\nTenis: %d", pelotas.tenis);
        } else if(pelotas.tenis > pelotas.futbol){
            printf("\nTenis: %d", pelotas.tenis);
            printf("\nFutbol: %d", pelotas.futbol);
        }
    }
    printf("\n---------------------------------------------------");
}
*/

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
    //for(int i=0; i<3; i++){
        //for(int l=0; l<3; l++){
            //if(cont[i] != AntOrcont[l]) c[i]++;
        //}
    //}
    //printf("Cantidad de pelotas \"Ordenadas\":\n\tFutbol: %d \n\tBasquet: %d \n\tTenis: %d", cont[c[2]], cont[c[1]], cont[c[0]]);

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