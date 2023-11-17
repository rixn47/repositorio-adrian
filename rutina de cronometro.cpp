#include <stdio.h>
#include <stdlib.h> 
#define TRUE 1
#define FALSE 0

int main()
{
    int opcion;
    char repetir = TRUE;
    
    do {
        system("cls");
        
        // Texto del menú
        printf("\n\nMenu de Opciones\n");
        printf("1. tilines\n");
        printf("2. tilones\n");
        printf("3. tiliñinos\n");
        printf("4. tilin.exe \n");
        printf("0. SALIR\n");
        
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("Instrucciones de la opcion 1\n");
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                printf("Instrucciones de la opcion 2\n");
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                printf("Instrucciones de la opcion 3\n");
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                printf("Instrucciones de la opcion 4\n");
                system("pause>nul"); // Pausa                
                break;
            
            case 0:




















































































































































