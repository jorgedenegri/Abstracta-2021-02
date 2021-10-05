# Abstracta-2021-02
## Euclides Extendido
> *El objetivo es sacar el "x" y "y" de ax+by=gcd(a,b)*
> 
 **while (r2 > 0)**
>
>*El bucle termina cuando b llega a 0, eso significa que todas las iteraciones se han cumplido con exito y ha logrado sacar el mcd, que va a ser el ultimo valor anterior al 0*
>
>**int q = r1 / r2;**
>
>*sacamos el cociente de a/b*
>
>**int r = r1 - (q * r2);**
>
>*esta operacion nos va a sacar el residuo*
>
>**r1 = r2**
>
>**r2 = r;**
>
>*ahora como se vio en clase el segundo numero toma la posición del primero y el nuevo segundo va a tener como valor el residuo*
