Esta función itera sobre los nodos de una lista enlazada y va aplicando una función (la que se le pasa como segundo parámetro) a cada nodo.

Para tener un poco mas claro lo que ocurre, repasemos que significa el segundo parámetro que recibe, que es la funcion que aplica a cada nodo.

```c
void (*f)(void *)
```
Lo que hace es crear un puntero a una función. La función ya existe en alguna parte del programa que estes utilizando y lo que ocurre en el segundo parámetro es apuntar a esa función.

`void (*f)` -> En el tipo, hay que indicar que es de tipo void porque al crear esta función nosotros no sabemos a que función apuntará en un futuro cuando sea usada. <br>

`(void *)` -> Esto hace referencia al parámetro que recibe el puntero de la función. También pondremos que es de tipo void * porque no sabemos lo que vamos a recibir cuando la usemos. Será trabajo del programador castear el tipo para que coincida con el que quiera usar. <br>

En esta ocasión el puntero a la función solo recibe un parámetro, pero puede recibir 2 o más, en cuyo caso un ejemplo sería:

```c
void (*f)(void *, void *);
```

o incluso puede darse el caso de que el propio puntero a la función reciba como parámetro otro puntero a función, en cuyo ejemplo sería;

```c
void (*f)(void *, void (*f)());
```
Al segundo puntero que se le pasa por parámetro no le estamos pasando argumentos, por eso tiene el paréntesis vacío.