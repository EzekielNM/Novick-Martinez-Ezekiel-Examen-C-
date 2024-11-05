# Examen-C-
https://github.com/EzekielNM/Examen-C-.git

Parte 2: Problemas de Codificación (70 puntos en total)
Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 
El archvo se encuentra en la carpeta Ejercicio 1
Explicación:
Definimos una variable numero de tipo int para almacenar el valor entero que el usuario ingresará. Se muestra un mensaje al usuario pidiéndole que ingrese un número entero.
El valor ingresado se almacena en la variable numero mediante cin. Utilizamos una estructura condicional if-else para determinar si el número ingresado es positivo, negativo o cero.El programa termina con return 0;

Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 
El archvo se encuentra en la carpeta Ejercicio 2.
Explicación:
Se declara una variable numero de tipo int para almacenar el número ingresado por el usuario. Se muestra un mensaje solicitando al usuario que ingrese un número entre 1 y 7, y el valor ingresado se almacena en la variable numero. Usamos un switch para evaluar el valor de numero e imprimir el día correspondiente. El programa termina con return 0;

Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 
El archvo se encuentra en la carpeta Ejercicio 3.
Explicacion:
Se define una constante NUM_EJERCICIOS con valor 8 para representar el número de ejercicios. Esto permite cambiar fácilmente el número de ejercicios si es necesario. La variable suma se inicializa en 0.0 para almacenar la suma de las calificaciones ingresadas. La variable calificacion se utiliza para recibir cada una de las calificaciones. Usamos un bucle for que itera NUM_EJERCICIOS veces para solicitar la calificación de cada ejercicio. Dentro del bucle, usamos un do-while para asegurarnos de que la calificación ingresada esté en el rango válido (entre 0 y 10). Si el usuario ingresa una calificación fuera de este rango, se muestra un mensaje de error y se solicita la calificación nuevamente. Si la calificación es válida, se agrega a la variable suma. Después de que el usuario haya ingresado todas las calificaciones, se calcula el promedio dividiendo la suma entre NUM_EJERCICIOS. Finalmente, el promedio se imprime en pantalla.

Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
El archvo se encuentra en la carpeta Ejercicio 4.
Explicacion:
Precio1, precio2, y precio3 son variables de tipo float que almacenan los precios de los tres artículos. El programa solicita al usuario ingresar los precios de cada artículo. Estos valores se almacenan en las variables precio1, precio2, y precio3. Utilizamos una estructura if-else para identificar el artículo con el precio más bajo, el cual será excluido del cálculo. Finalmente, el total calculado se muestra en pantalla.

Bibliograafia: Chatgpt



