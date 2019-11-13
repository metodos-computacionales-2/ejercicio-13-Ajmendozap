Ejercicio 2

Como se puede observar en el output del c�digo, se ejecuta una suma normal, pero cuando se usa el comando "const" en la declaraci�n de la funci�n
se expresa el error: error: assigment of read-only reference 'a'. Debido a que al usar este comando se establece a la variable 'a' como una constante, 
la cual se trata de variar en el m�todo "int addition(const int &a, int b)", contradiciendo la naturaleza del objeto en la direcci�n especificada.

Ejercicio 4

Como se puede observar, luego de crear las dos funciones getMaxInt y getMaxDobule, y cambiar ambos nombres a getMax, lo que ocurre es que la funci�n
recibe los dos tipos de datos en una especie de solapaci�n de las funciones.

Ejercicio 5

Cuando se corre el c�digo del programa 5 en binder, con un n�mero muy grande (10**15 o m�s), el error que el programa retorna es el de: Segmentation
fault (core dumped), el cual no es muy espec�fico, sin embargo, si se usa la bander --fsanitize=address lo que ocurre es que el error es m�s descriptivo
y se retornan algunas recomendaciones para solucionarlo, por lo que se concluye que --fsanitize=address sirve para conocer con mayor claridad los errores
de un c�digo. Sin embargo, usando el heap podemos observar que el arreglo que puede crear el c�digo tiene un l�mite much�simo m�s amplio que solo usando 
el stack, mostrando que se cambia el espacio en memoria para el objeto en dependencia del tama�o especificado.