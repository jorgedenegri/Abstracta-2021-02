# Abstracta-2021-02
## Raíz Primitiva
### *El objetivo es obtener la raíz primitiva mas pequeña*
> 
 **La función utilizada es la totient de Euler **
>
>*vamos a hacer un recuento de números del 1 al n que son primos relativos al número n *
>
>*Un número i es primo relativo si MCD (i, n) = 1.*
>
>**bool Primo(ll n)**
>
>*Esta función lo que hace es comprobar si el entero mandado es primo, funciona empezando desde 2 y la lógica es la siguiente: digamos tenemos el número 7 va a sacar el módulo de 7 con 6,5,4,3,2 sin llegar al 1 y si en su recorrido el módulo es igual a 0 significará que este número no es primo ya que si es divisible por otro número*
>
>**int findPrimitiveRoot(int n)**
>
>*si el orden multiplicativo de x módulo n es igual a la función Totient d, entonces el número es raíz primitiva de lo contrario no. Comprobaremos todos los números primos relativos.*
>
>

