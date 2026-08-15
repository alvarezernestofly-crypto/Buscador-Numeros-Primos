Buscador de números primos

Proyecto escrito en C cuyo objetivo es encontrar una cantidad determinada de números primos introducida por el usuario.

Este proyecto forma parte de mi práctica personal de programación en C y está pensado principalmente para experimentar con funciones, arreglos, memoria dinámica, punteros y lógica de algoritmos.

Cómo funciona?

El programa solicita al usuario cuántos números primos desea encontrar.

A partir del número 2, comienza a comprobar números naturales y utiliza los números primos encontrados anteriormente para determinar si el número actual es divisible entre alguno de ellos.

Si el número no es divisible entre ninguno de los primos almacenados, se considera primo y se agrega al arreglo.

Por ejemplo, para encontrar los primeros 5 números primos:

2, 3, 5, 7, 11

Conceptos utilizados
Funciones en C
Arreglos
Punteros
Memoria dinámica
calloc()
free()
Operador módulo %
Ciclos while y for
Tipo unsigned long long
Entrada y salida mediante scanf() y printf()
Estructura

El programa se encuentra dividido en varias funciones:

bienvenida() — Solicita al usuario la cantidad de números primos.
ingresos() — Recibe la entrada del usuario.
calculo() — Realiza la búsqueda y almacenamiento de los números primos.
resultados() — Muestra los números encontrados.
main() — Coordina la ejecución del programa.
Estado actual

Esta es la primera versión funcional del proyecto.

El objetivo inicial no es tener el algoritmo más eficiente posible, sino construir una implementación funcional y utilizarla como base para futuras mejoras y experimentos.

Posibles mejoras

Algunas mejoras que podrían implementarse posteriormente:

Optimizar el algoritmo de búsqueda.
Reducir la cantidad de divisiones realizadas.
Mejorar la validación de entradas.
Manejar correctamente casos límite.
Analizar el rendimiento con cantidades grandes de números primos.
Comparar diferentes métodos para encontrar números primos.
Mejorar la organización y documentación del código.
Compilación

El proyecto puede compilarse utilizando un compilador compatible con C, como GCC.

Ejemplo:

gcc main.c -o primos

Y posteriormente:

./primos

En Windows también puede ejecutarse el archivo generado:

primos.exe

Objetivo personal

Este proyecto fue realizado como práctica para seguir desarrollando mis conocimientos de programación en C, especialmente en el manejo de memoria, estructuras básicas de un programa y desarrollo progresivo de algoritmos.

La intención es conservar las diferentes versiones del proyecto para observar cómo evoluciona el código conforme se incorporan nuevas optimizaciones y funcionalidades.