# Abstracta-2021-02
## Euclides Extendido
### *El objetivo es sacar el "x" y "y" de ax+by=gcd(a,b)*
> 
 **while (r2 > 0)**
>
>*El bucle termina cuando b llega a 0, eso significa que todas las iteraciones se han cumplido con exito y ha logrado sacar el mcd, que va a ser el ultimo valor anterior al 0*
>
>**int q = r1 / r2;**
>
>*Sacamos el cociente de a/b*
>
>**int r = r1 - (q * r2);**
>
>*Esta operacion nos va a sacar el residuo*
>
>**r1 = r2**
>
>**r2 = r;**
>
>*Ahora como se vio en clase el segundo numero toma la posición del primero y el nuevo segundo va a tener como valor el residuo*
>
>	**s = s1 - (q * s2);**
>
> **s1 = s2;**
>       
> **s2 = s;**
>
>	**t = t1 - (q * t2);**	
>	
>	**t1 = t2; t2 = t;**
>		
>*El resultado final de s1 y t1 nos van a dar los valores de x y y*
>
>**s = s1;**
>*Aquí lo iguale a s1 que es valor de x pero tambien pude igualarlo a t1 para que me de el valor de y, con el fin de retornar algo *
### Ejemplo del resultado
>
>![image](https://user-images.githubusercontent.com/54364033/135956506-ce9f78f2-2775-4046-980a-b5bbdf93a7e0.png)
