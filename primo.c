#include <stdio.h>
#include <stdlib.h>

unsigned long long bienvenida(void);
unsigned long long ingresos(void);
unsigned long long calculo(unsigned long long primos);
void resultados(unsigned long long resultados, unsigned long long* cantidad);
int main(void);

unsigned long long bienvenida(void){
    unsigned long long cantidad = 0;
    printf("\nPor favor seleccione cuantos numeros primos desea\n");
    printf("Cuantos: ");
    cantidad = ingresos();
    return cantidad;
}

unsigned long long ingresos(void){
    unsigned long long cantidad = 0;
    scanf("%llu", &cantidad);
    return cantidad;
}

unsigned long long calculo(unsigned long long primos){
    unsigned long long terminacion = 1;
    unsigned long long numerosNaturales = 3;
    unsigned long long cursor = 0;
    unsigned long long respuesta = 0;
    unsigned long long *cantidad;
    cantidad = calloc(primos, sizeof(unsigned long long));
    if(cantidad == NULL){
        return 1;
    }

    for(unsigned long long w = 0; w < primos; w++){
        cantidad[w] = 2;
    }

    while(terminacion < primos){
       while(1){
        respuesta = numerosNaturales % cantidad[cursor];
        if(respuesta == 0){
            numerosNaturales += 1;
            cursor = 0;
        }
        if(respuesta != 0){
            if(cursor < primos){
                cursor += 1;
            }
            if(cursor >= primos){
                cursor = 0;
                break;
            }
        }
       }

       cantidad[terminacion] = numerosNaturales;
       numerosNaturales +=1;
       terminacion += 1;
    } 

    resultados(primos, cantidad);
    free(cantidad);
    return 0;
}

void resultados(unsigned long long resultados, unsigned long long* cantidad){
    printf("\nResultados: ");
    for(unsigned long long w = 0; w < resultados - 1; w++){
        printf("%llu, ", cantidad[w]);
    }
    printf("%llu\n", cantidad[resultados -1]);
}

int main(void){
    unsigned long long cantidad = 0;
    cantidad = bienvenida();
    calculo(cantidad);
    return 0;
}