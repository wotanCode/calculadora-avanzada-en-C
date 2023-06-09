#include <stdio.h>
#include <stdlib.h>
#include "../../include/view.h"

/*  SECCION: VISTAS PRESENTACIONALES  */
// Funcion para limpiar la consola.
void clearScreen()
{
  system("clear || cls");
}

// Mensaje inicial de bienvenida al programa
void welcomeMessage()
{
  printf("********************************************\n");
  printf("*     Bienvenido a Advanced Calculator     *\n");
  printf("********************************************\n\n");
}

/*  SECCION: MENUS  */
// Menu principal del programa
void mainMenuV()
{
  printf("=== MENU ===\n");
  // printf("1. Sumar\t2. Restar\t3. Multplicar\t4. Dividir\n");
  printf("%-15s %-15s %-15s %-15s\n", "1. Sumar", "2. Restar", "3. Multiplicar", "4. Dividir");
  printf("%-15s %-15s %-15s %-15s\n", "5. Modulo", "6. Potencia", "7. Raiz", "8. Logaritmo\n");

  printf("9. Acerca de...\n");
  printf("0. Salir.\n\n");
}

// Menu de la opcion sumar
void addMenuV()
{
  clearScreen();
  printf("=== Menú de Suma ===\n");
  printf("1. Sumar dos números\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void subtractMenuV()
{
  clearScreen();
  printf("=== Menú de Resta ===\n");
  printf("1. Restar dos números\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void multiplyMenuV()
{
  clearScreen();
  printf("=== Menú de multiplicar ===\n");
  printf("1. Multiplicar dos números\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void divideMenuV()
{
  clearScreen();
  printf("=== Menú de dividir ===\n");
  printf("1. Dividir dos números\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void moduleMenuV()
{
  clearScreen();
  printf("=== Menú de Modulo ===\n");
  printf("1. Modulo de dos números\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void powMenuV()
{
  clearScreen();
  printf("=== Menú de Potencia ===\n");
  printf("1. Potencia de un número\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void rootMenuV()
{
  clearScreen();
  printf("=== Menú de raices ===\n");
  printf("1. Raiz de un número\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void logMenuV()
{
  clearScreen();
  printf("=== Menú de logaritmo ===\n");
  printf("1. Logaritmo neperiano de un número\n");
  printf("2. Logaritmo base variable de un número\n");
  printf("0. Volver al menú principal\n\n");
  printf("Selecciona una opción: ");
}

void aboutMenuV()
{
  clearScreen();
  printf("=== Acerca de... ===\n");
  printf("Este programa ha sido creado por Pedro Yanez\n");
  printf("GITHUB: https://github.com/wotanCode\n");
  printf("Repositorio del proyecto: https://github.com/wotanCode/calculadora-avanzada-en-C\n");
  printf("LICENCIA: Unlicense\n\n");
}

/*  SECCION: CAPTURADORES DE OPCIONES */
// Capturar opcion seleccionada de un menu
void getMenuOption(int *option)
{
  printf("Opcion: ");
  scanf("%d", option);
}

// Operacion basica de dos numeros
void getBasicFloatNumberOperation(float *number1, float *number2)
{
  printf("Ingresa el primer numero:\n");
  scanf("%f", number1);
  printf("Ingresa el segundo numero:\n");
  scanf("%f", number2);
}

void getBasicIntegerOperation(int *number1, int *number2)
{
  printf("Ingresa el primer número:\n");
  scanf("%d", number1);
  printf("Ingresa el segundo número:\n");
  scanf("%d", number2);
}

void getPowNumberOperation(float *number1, float *number2)
{
  printf("Ingresa numero:\n");
  scanf("%f", number1);
  printf("Ingresa la potencia\n");
  scanf("%f", number2);
}

void getRootNumberOperation(float *number1, float *number2)
{
  printf("Ingresa el radicando:\n");
  scanf("%f", number1);
  printf("Ingresa el índice\n");
  scanf("%f", number2);
}

void getNaturalLogarithNumberOperation(float *number1)
{
  printf("Ingresa el argumento:\n");
  scanf("%f", number1);
}

void getLogarithNumberOperation(float *number1, float *number2)
{
  printf("Ingresa el argumento:\n");
  scanf("%f", number1);
  printf("Ingresa la base del logaritmo:\n");
  scanf("%f", number2);
}

/*  SECCION: RESULTADOS */
// Mostrar resultado de operaciones
void showResult(float result)
{
  printf("Resultado de la operacion: %f\n", result);
}