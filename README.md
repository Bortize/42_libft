![42_libft](https://user-images.githubusercontent.com/55995077/87340180-062ab200-c548-11ea-890a-c4db207a565d.png)


## men_functions
[memset](#memset)<br>
[memcpy](#memcpy)<br>
[memccpy](#memccpy)<br>
[memmove](#memmove)<br>
[memchr](#memchr)<br>
[memcmp](#memcmp)<br>

## str_functions

[strlen](#strlen)<br>
[strcat](#strcat)<br>
[strcpy](#strcpy)<br>
[strlcpy](#strlcpy)<br>
[strjoin](#strjoin)<br>
[strncpy](#strncpy)<br>
[strncmp](#strncmp)<br>
[strdup](#strdup)<br>
[strchr](#strchr)<br>
[strrchr](#strrchr)<br>
[strtrim](#strtrim)<br>
[strmapi](#strmapi)<br>

**is_functions**
<br>
[isascii](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[isdigit](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[isalpha](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[isalnum](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[isprint](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>

**other**
<br>
[tolower](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[toupper](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[bzero](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[atoi](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[itoa](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[split](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[calloc](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[substr](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[putstr_fd](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[putchar_fd](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[putendl_fd](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[putnbr_fd](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>

**lst_functions**
<br>
[lstnew](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstadd_front](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstsize](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstlast](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstadd_back](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstdelone](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstclear](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstiter](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>
[lstmap](https://www.notion.so/functions-a8191405d0f844b7b564cbf714128070)<br>

## ft_memset <a name = "memset"></a>

Escribe el valor de 'c' en '*b' las veces que se le haya pasado a len
Return: el *b con los cambios.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:12:11 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/17 18:45:35 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s1;

	s1 = b;
	i = 0;
	while (i < len)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}
```

## ft_memcpy <a name = "memcpy"></a>

La función memcpy () copia n bytes del área de memoria src al área de memoria dst. Si dst y src se superponen, el comportamiento es indefinido. Las aplicaciones en las que dst y src pueden superponerse deberían usar memmove (3) en su lugar.
La función memcpy () devuelve el valor original de dst.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:14:53 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 14:28:02 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	    i;
	char		    *dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
```

## ft_memccpy <a name = "memccpy"></a>

La  función  memccpy()  copia  como mucho n bytes desde el área de memoria orig al área de memoria dest, parando cuando se encuentra el carácter c.
La función memccpy() devuelve un puntero al siguiente carácter de dest tras
c, o NULL si c no estaba en los n primeros caracteres de orig.
http://manpages.ubuntu.com/manpages/bionic/es/man3/memccpy.3.html

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:37:20 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/15 20:38:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	dst1 = dst;
	src1 = src;
	i = 0;

	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			i++;
			return (&dst1[i]);
		}
		i++;
	}
	return (NULL);
}
```

## ft_memmove <a name = "memmove"></a>

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:54:53 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/20 18:57:36 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i; // el contador que utilizare para recorrer las cadenas a la hora de la copia.
	char		*dst1; // creo esta cadena para devolver el valor de la nueva cadena.
	const char	*src1; // esta cadena coge el valor de src. creo que no la necesito realmente.

	if (len == 0 || dst == src) // Si no recibe longitud para copiar o las cadenas estan totalmente superpuestas no necesito copiar 
		return (dst); // devuelvo destino.
	dst1 = dst;
	src1 = src;
	i = 0;
	if (src > dst) // comparo el valor de las direcciones de memoria. Es necesario para recorrerlas a la hora de la copia para no perturbar el valor.
		while (i < len) // mientras el contador sea menor que la longitud de la cadena..
		{
			dst1[i] = src1[i]; // copia el contenido de src1 a dst1
			i++; // avanza el contador.
		}
	else
		while (len > 0) // si entra aqui es porque la direccion de memoria de src es menor que dst por lo que debe de recorrerse por el final para no perturbar el valor de src
		{
			len--; // avanzo una posición en el contador para dejar un NULL al final. También podría copiar tal cual y ponerlo al final.
			dst1[len] = src1[len]; // copio el valor de src1 a dst1
		}
	return (dst1); // devuelvo la cadena dst1 como resultado de la copia.
}
```

## ft_memchr <a name = "memchr"></a>

Localiza la primera aparicion de c (convertido a unsigned char) en *s

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:20:38 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/06 02:29:32 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
```

## ft_memcmp <a name = "memcmp"></a>

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:37:28 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/20 17:08:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
```

---

## strlen <a name = "strlen"></a>

Calcula el número de caracteres que tiene la cadena apuntada por *str. 
Retorna el número de caracteres que contiene sin contar el carácter nulo que no se incluye.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:35:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/16 20:36:58 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
```

## strlcat <a name = "strcat"></a>

Devuelve la longitud de bytes de la suma de la concatenación de 'dst' + 'src'

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:14:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/03 18:04:38 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d; // longitud de *dst
	size_t		s;
	size_t		dst_len; // longitud del string *dst
	size_t		src_len; // longitud de *src

	d = ft_strlen(dst); // calculo la longitud de 'dst' y le asigno el valor a 'd'
	s = 0; // inicializo el contador de 'src' en 0
	dst_len = d; // el mismo valor que habia guardado en 'd' lo copio en 'dst_len'
	src_len = ft_strlen(src);
	if (dstsize < dst_len) // si el tamaño que quiero concatenar es menor que el tamaño del destino que alojara la concatenacion entonces no se puede hacer 
		return (src_len + dstsize); // si no se puede hacer el ejercicio me pide que devuelva la suma de la longitud de la cadena que queria concatenar y el tamaño pasado
	while (src[s] && (d + 1) < dstsize) // mientras tenga contenido en src para concatenar y el contador de destino 'd' no llegue hasta el tamaño que tiene que concatenar que le hemos pasado como argumento (size_t dstsize))
		dst[d++] = src[s++]; // copio src en dst. Como el valor de d es igual a la longitud de la cadena, cuando comienze la copia comenzara a copiar desde el final de dst por lo que estara concatenando.
	}
	if (d != dstsize) 
		dst[d] = '\0';
	return (dst_len + src_len); // devuelve la suma de las longitudes de las cadenas
}
```

## strcpy <a name = "strcpy"></a>

Copia la cadena apuntada por *src al buffer de destino apuntado por *dst incluyendo el caracter Nulo del final. Las cadenas no pueden superponerse y *dst debe de ser lo suficientemente grande en tamaño como para recibir a *src
Devuelve un puntero al destino de la cadena.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:48:25 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 17:21:37 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
```

## strlcpy <a name = "strlcpy"></a>

Copia la cadena apuntada por *src (a expepcion del tamaño null) a *dst.
Retorna: la longitud de la cadena que ha intentado copiar, que viene siendo *src. 

 🔸Devuelve el tamaño de la cadena *src no el valor. Puede resultar un poco confuso pero es así.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:28:21 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/17 16:20:32 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int src_len;

	if (dst == 0 || src == 0)
		return (0);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
```

## strjoin <a name = "strjoin"></a>

Esta función reserva memoria y devuelve una nueva cadena terminada por un '\0' que es el resultado de lo que ocuparia en bytes la concatenación de los parámetros s1 y s2. Si la asignación falla devuelve NULL

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:00 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 17:49:41 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str1;
	size_t	str2;

	if (s1 == 0 || s2 == 0)
		return (0);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (str1 + str2 + 1));
	if (str == 0)
		return (0);
	ft_strcpy(str, s1);
	ft_strlcat(str, s2, (str1 + str2 + 1));
	return (str);
}
```

## strncpy <a name = "strncpy"></a>

Busca la secuencia de caracteres contenida en la subcadena en una cadena de texto. Esta función determina si la cadena contiene a la subcadena (como CASA contiene ASA) y en caso afirmativo, indicará en qué posición aparece la subcadena dentro de la cadena, [1] en el ejemplo anterior. En caso de aparecer la subcadena varias veces, la función siempre retorna la posición primera.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:21:09 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/01 19:36:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len_needle <= len)
	{
		if (ft_memcmp(haystack, needle, len_needle) == 0)
			return (char *)haystack;
		haystack++;
		len--;
	}
	return (NULL);
}
```

## strncmp <a name = "strncmp"></a>

Compara no más de n caracteres (caracteres posteriores al carácter nulo no se tienen en cuenta) de la cadena apuntada por s1 con la cadena apuntada por s2.

RETORNO:
La función retorna un número entero mayor, igual, o menor que cero, apropiadamente según la cadena apuntada por s1 es mayor, igual, o menor que la cadena apuntada por s2.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:21 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/30 13:06:50 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n && ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && i < n - 1)
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	return (str1[i] - str2[i]);
}
```

## strdup <a name = "strdup"></a>

Intenta asignar suficiente memoria para contener la cadena antigua (más un carácter nulo para marcar el final de la cadena).

Si la asignación falla, establece errno en ENOMEM y devuelve NULL inmediatamente (la configuración de errno en ENOMEM es algo que hace malloc, por lo que no es necesario que lo hagamos explícitamente en nuestro strdup).

De lo contrario, la asignación funcionó, por lo que copiamos la cadena antigua en la cadena nueva y devolvemos la nueva dirección (que el autor de la llamada es responsable de liberar en algún momento).

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 02:00:55 by borjagrd          #+#    #+#             */
/*   Updated: 2019/12/18 14:04:14 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	s1_cpy = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (s1_cpy == 0)
		return (NULL);
	return (ft_strcpy(s1_cpy, s1));
}
```

## strchr <a name = "strchr"></a>

Localiza la primera aparicion de 'c' (convertido a unsigned char) en la cadena apuntada por 's' (incluyendo el caracter nulo)

RETORNO: la función retorna un puntero a partir del carácter encontrado. Si no se ha encontrado el carácter 'c' entonces retorna un puntero NULL

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/18 19:46:36 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		ptr = (char *)&s[i];
	else
		ptr = NULL;
	return (ptr);
}
```

## strrchr <a name = "strrchr"></a>

Localiza la primera aparición de c (convertido a unsigned char) en la cadena apuntada por s (incluyendo el carácter nulo).

RETORNO:
La función retorna un puntero a partir del carácter encontrado. Si no se ha encontrado el carácter, c, entonces retorna un puntero NULL.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:55:15 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/28 15:27:03 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		ptr = (char *)&s[i];
	else
		ptr = NULL;
	return (ptr);
}
```

## strtrim <a name = "strtrim"></a>

Esta función asigna memoria y devuelve una copia de la cadena pasada en el parámetro pero sin ningún tipo de espacios en blanco al principio o al final de la cadena. Esta función considera espacios en blanco los caracteres ' ', un espacio estándar, '\n', una nueva línea, y '\t', que es un espacio de tabulación. Si no hay espacios al principio y al final de la cadena de parámetros s la función devuelve una copia de s. Si la asignación de memoria falla la función devuelve NULL.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:00:25 by pbie              #+#    #+#             */
/*   Updated: 2015/12/04 18:40:26 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función asigna memoria y devuelve una copia de la cadena pasada en el parámetro 
pero sin ningún tipo de espacios en blanco al principio o al final de la cadena. Esta 
función considera espacios en blanco los caracteres ' ', un espacio estándar, '\n', una 
nueva línea, y '\t', que es un espacio de tabulación. Si no hay espacios al principio y 
al final de la cadena de parámetros s la función devuelve una copia de s. Si la asignación 
de memoria falla la función devuelve NULL.*/

#include "libft.h"

/* Iniciamos la función declarando cuatro variables. Las tres primeras se usarán 
como variables de conteo de índices. Una vez más usamos sin firmar en caso de que s
e trate de una cadena ridículamente larga. También declaramos una nueva cadena que 
va a contener y devolver una copia de nuestra cadena de parámetros.*/

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;
	
/* Ponemos nuestras variables i y k a 0. Yo seré nuestro contador para la primera parte 
de nuestra cadena buscando cualquier espacio al principio. La variable k la veremos más 
tarde. Por ahora sólo la ponemos a 0. Entonces comenzamos un bucle que ocurrirá siempre 
y cuando la posición actual del índice de nuestra cadena de parámetros sea un espacio de 
algún tipo. Después, continuamos con una declaración if diciendo que si después de recorrer 
el while hemos llegado al final de la cadena s o si simplemente no entro nigún espacio, 
regresaremos un string que es NULL

Luego seguimos esto con una al final de la cadena s ya, o si no había ningún 
espacio en absoluto la función ft_memalloc para crear un asignado y un "" que llenará 
nuestra cadena con un espacio NULL. La función ft_strcpy creará el string NULL a devolver.*/

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));

/* Empezamos poniendo nuestro contador j a la longitud de s usando nuestra función ft_strlen 
y luego restando uno del resultado. Restamos el 1 para compensar un '\0' de terminación porque 
esta vez estaremos disminuyendo desde el final de la cadena s. Nuestro bucle while sigue nuestro 
ajuste de valor a j empieza en la última posición del índice de la cuerda s y se mueve hacia atrás 
a través de la cuerda. Una vez que se encuentra un carácter no espaciador, el bucle se detiene. 
Una vez que este bucle está hecho estamos listo para asignar memoria para una nueva cadena. */

	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;

/*Hacemos una asignación de memoria estándar para nuestra cadena fresca, pero noten lo que hacemos 
para saber el tamaño de la cadena. Estamos restando i, que encontró nuestro espacio al principio de 
la cadena dada, de j, que encontró nuestro espacio al final de la cadena, y luego estamos sumando 2 
a ese resultado. Hacemos esto por cómo funcionan los contadores. Colocarán su posición de índice en 
el personaje que detuvo su incremento y su decremento. Añades el 2 para volver a la longitud de la 
cuerda que devolverás más el espacio para el "\0" final. Luego verificamos para asegurarnos de que 
nuestra asignación de memoria funcionó.  Si no regresamos NULL.*/

	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);

/*Ahora comenzamos nuestro bucle final que colocará una versión recortada de la cuerda s en nuestra 
nueva cuerda str. Hacemos un bucle mientras que k, que establecimos antes en 0, es menor que j menos 
i más 1, lo que hacemos para asegurarnos de que hacemos la longitud completa de la porción que queremos 
de s. Dentro del bucle tomamos la posición del índice en s que es el comienzo de nuestro recorte y 
añadimos k a ese índice para que aumentemos desde esa posición. A continuación, colocamos el carácter 
correspondiente en nuestra nueva cadena. Corremos el bucle hasta que lleguemos al final de la porción 
de s que queremos y luego salimos el bucle.  Luego añadimos un "\0" de terminación y devolvemos nuestra 
cuerda recortada.*/

	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
```

## strmapi <a name = "strmapi"></a>

La Moulinette tiene una función guardada y lo que hace es aplicar esa función a cada carácter de la cadena para ello necesita que le pasemos a la función ¨f¨ lo que nos pide, en este caso 2 parámetros. (unsigned int , char)
Devuelve una nueva cadena que previamente se ha reservado en memoría. Esta nueva cadena incluye las modificaciones de la función sobre cada carácter.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:03 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/18 14:35:09 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
```

Esta función aplica la función f dada a cada carácter de la cadena dada para crear una nueva cadena que es el resultado de tener la función

- f ejecutado en la cadena s. Devolverá una copia 'fresca' de la cadena modificada

Empezamos creando dos variables. Un contador de int sin signo para movernos a través de nuestra cuerda y una variable char para nuestra cuerda que debe ser devuelta.

A continuación asignamos la memoria necesaria para hacer una copia de la cadena modificada que queremos devolver. Usamos nuestra función ft_strlen en la cadena dada y nos aseguramos de añadirle 1 para compensar la terminación '\0'. Si la asignación falla, regresamos NULL. De lo contrario, continuamos.

Ahora vamos a través de nuestra cadena s y aplicamos la función f a cada una de sus personajes. Ponemos el resultado de esto en la posición correspondiente en nuestra cadena vacía. Una vez que lleguemos al final de nuestra cadena de parámetros salimos el bucle y asegúrate de añadir un '\0' de terminación al final de nuestro nuevo ...de una cadena llena. Luego devolvemos nuestra nueva cuerda.

---

## ft_isascii

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:37:04 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/30 13:05:46 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

## ft_isdigit

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 02:19:08 by borjagomez-       #+#    #+#             */
/*   Updated: 2019/11/28 16:49:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
```

## ft_isalpha

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:36:57 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/01 19:17:57 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
```

## ft_isalnum

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 02:25:48 by borjagomez-       #+#    #+#             */
/*   Updated: 2019/11/18 15:31:11 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
```

## ft_isprint

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:50:16 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/18 16:58:27 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
```

---

## ft_tolower

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:15:39 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/16 20:15:59 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convierte en minuscula cualquier caracter que reciba en MAYUSCULA. Si
** el caracter que recibe esta en minuscula lo deja igual.
*/

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	return (c);
}
```

## ft_toupper

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:24:51 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 17:19:35 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
```

## ft_bzero

Copia el valor '\0'  en la cadena *s, las veces que aparezca en n

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:55:47 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/30 13:05:24 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
```

## ft_atoi

Permite convertir un literal (o texto entre comillas), que contenga un número entero, en un valor constante que puede asignarse a cualquier dato.Es decir, que permite convertir un texto en número; por ejemplo, la sentencia **x=atoi("234");** asignará el valor **234** a la variable **x** (exactamente igual que la sentencia **x=234**;). La función **[itoa()](http://cdiv.sourceforge.net/cdivhlp/itoa.htm)** permite la operación contraria, es decir, convertir un número en un texto.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:51:59 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/04 16:53:07 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t' ||
			*str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + (*str - '0');
		++str;
	}
	return (result * sign);
}
```

## ft_itoa

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 17:09:25 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/30 13:05:53 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
```

## ft_split

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 13:11:17 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/03 19:21:30 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Esta función devuelve devuelve la can`
*/
static int			ft_countword(char const *s, char c)
{
	unsigned int	i; // usaremos la variable 'i' para movernos por la cadena. Servira de contador.
	int				    words; // esta variable servirá para contar las palabras de la cadena

	i = 0;
	words = 0;
	while (s[i]) // Mientras que haya contenido en la cadena debe de entrar en el bucle
	{
		while (s[i] == c) // Mientras el contenido de la cadena sea igual a char c
			i++; // que avance posiciones para no tenerlo en cuenta y empezar mas adelante. Aqí lo que hace al comenzar mas adelante es eliminar de la cadena ese caracter.
		if (s[i] != '\0') // Si llega a esta linea es porque ha salido del bucle por lo que quiere decir que el contenido de la cadena ya no es igual a 'c'.  Si cuando nuestro ciclo salio de encontrar caracteres c, no hemos llegado al final de la cadena dada, significa que ha encontrado una nueva palabra y por lo tanto aumentamos cntr +1.
			words++; 
		while (s[i] && (s[i] != c)) // Pasamos a otro bucle while que avanza sobre todos los caracteres de nuestra palabra hasta que encontra otro caracter de c. Si encontramos uno y no hemos llegado al final de nuestra cadena, comenzamos elciclo nuevamente y continuamos hasta llegar al final, contando todas las palabras en el camino.
			i++; //
	}
	return (words); // Luego devolvemos la variable 'words' que nos dirá cuántas palabras existen en nuestra cadena.
}

static char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char			*ft_wordcopy(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_split(char const *s, char c)
{
/*Comenzamos creando tres variables de contador. Utilizaremos estas tres
variables para identificar las posiciones de índice dentro de nuestra cadena
de parámetros. También creamos una variable de tipo char **tab. Esta variable es
para nuestra tabla que contendrá nuestras cadenas divididas. Establecemos las
variables i y k en 0 y luego asignamos memoria para nuestra tabla. Aquí es
donde usamos nuestra función ft_cntwrd anterior, para calcular cuánto espacio
necesitamos asignar a nuestra tabla. Si la asignación falla, devolvemos un NULL.*/
	int		i; // contador para avanzar a lo largo de *s
	int		j; // inicio de la cadena
	int		k; // contador de tab
	char	**tab;

	if (!s) // Si no nos pasan cadena entonces devuelvo NULL. Para que hacer trabajar a la funcion? es tonteria
		return (NULL);
	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1))) // Reservo memoria para la cadena que va a devolcer. Necesito calcular el tamaño ya que no lo se. Aquí entra en escena la primera de las funciones externas que calcula el tamaño >> ft-countwords <<. 
		return (NULL); // Para ahorrar lineas de codigo, he puesto un if con una exclamacion en la linea anterior justo antes de reservar memoria. Con esto estoy diciendo que si falla la asignacion devuelva NULL.
	{
		while (s[i] == c) // bucle para pasar sobre todos los caracteres del parámetro c que existen. Esto se detendrá cuando alcancemos nuestro primer carácter no c.
			i++;
		j = i; // establecemos nuestra variable j igual al valor de i. j se usará para señalar la posición inicial del índice de nuestra primera palabra dentro de nuestra cadena s
		while (s[i] && s[i] != c) // continuamos moviéndonos a través de la cadena s siempre y cuando no haya llegado al final y no encontremos nuestro carácter de parámetro c. Una vez que lo encuentra, pasamos a nuestra declaración if
			i++;
		if (i > j) // si i es mayor que j significa que ha econtrado una nueva palabra. Si 'i' fuera igual que 'j' significa que NO hay una palabra que devolver, sino una letra unicamnete, o que estaos en el final de la cadena. AQUI i TIENE EL VALOR DEL FINAL DE LA PALABRA ENCONTRADA.
		{
			tab[k++] = ft_wordcopy(s + j, i - j); // Colocamos esa palabra en la posicion 0 de nuestra tabla. Lo hacemos utilizando la funcion ft_wordcopy(cadena s en la posicion de comienzo [j], tamaño de la palabra restando i de la posicion de inicio.) // Incrementamos 'k' para pasar a la siguiente posicion de nuestra tabla de palabras donde guardaremos la siguiente palabra.
		}
	}
	tab[k] = NULL; // Si ha salido del bucle es porque esta en el final y por lo tanto debo de poner caracter NULL porque así lo pide el ejercicio.
	return (tab); // devuelvo la nueva tabla  que contiene todas las cadenas separadas.
}
```

## ft_calloc

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:37:54 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 13:59:56 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(count * sizeof(char));
	if (ptr)
	{
		ft_memset(ptr, 0, (count * size));
	}
	return (ptr);
}
```

## ft_substr

Busca una subcadena contenida dentro de una cadena. 
Por ejemplo, si en una variable S tenemos la cadena de caracteres "abcdef", la siguiente función obtendrá la cadena "cde": `s1=substr(s,2,3)`
Los parámetros suelen ser los siguientes: El primero parámetro la cadena de origen, el segundo parámetro la posición inicial (que suele comenzar a contarse desde el 0, no desde el 1) y el tercer parámetro el tamaño.
Devuelve la subcadena encontrada

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:08 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/28 18:31:48 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * len + 1); //reserva memoria para la cadena que va a buscar. Añadimos +1 para alojar el caracter null al final.
	if (!dst || !s) // si falla la reserva de memoria o la cadena donde va a buscar no existe devuelve NULL
		return (NULL);
	while (i < len) // mientras el contador sea menor que la longitud que le hemos pasado para buscar entra en el while
	{
		dst[i] = s[start]; // copia en dst la subcadena que queremos buscar en *s. comienza desde donde le hemos indicado
		i++; // avanza el contador de dst +1 posicion 
		start++; // avanza el contador de s +1 posicion
	}
	dst[i] = '\0'; // añade el valor null al final
	return (dst); // devuelve la subcadena hayada en *s
}
```

## ft_putstr_fd

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:55 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/28 19:00:19 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
```

## ft_putchar_fd

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:37:09 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/28 20:06:39 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```

## ft_putendl_fd

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/28 20:05:12 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(ft_strjoin(s, "\n"), fd);
}
```

## ft_putnbr_fd

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:58:29 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/01/01 20:31:33 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
```
<br>
---
<br>
# lst Functions

Estas funciones son funciones de listas enlazadas. Para poder utilizarlas tenemos que añadir el tipo de estructura que utilizan al archivo "libft.h"

### Definición del tipo de estructura a emplear en las listas

Los elementos de una lista son como cajas que tienen 2 tipos de contenido por asi decierlo. Uno de ellos guarda el contenido del elemento propiamente dicho y el otro guarda la direccion de memoria del siguiente elemento de la lista al que enlaza. El ultimo elemento de la lista apunta a NULL porque siempre tienen que apuntar a algun sitio para que al hacer free no de segmentation fault

```c
typedef struct   s_list
{
	void           *content;        // El contenido del elemento de la lista.
	struct s_list  *next;           // direccion de memoria del siguiente elemento.
}
t_list;
```

## ft_lstnew

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:15:59 by borjagrd          #+#    #+#             */
/*   Updated: 2019/12/22 14:20:34 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Reserva memoria (con malloc(3)) para un nuevo elemento que devuelve. La variable
*content se inicializa mediante el valor del parámetro content. La variable next
*se inicializa con NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)  // const protege el valor de content haciendo que sea inalterable a lo largo del timpo de ejecucion
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = (void *)content;
		new->next = NULL; // Como no se donde va a apuntar el siguiente pongo NULL, asi me aseguro de que no queden punteros sueltos.
	}
	return (new);
}
```

`t_list	*ft_lstnew(void const *content)` —> La funcion tiene que ser del mismo tipo de lo que va a dedolver. Es de tipo puntero porque devuelve un puntero. Ademas, recibe por parametro el valor de lo que queremos que guarde.

`new = (t_list *)malloc(sizeof(t_list));` —> hey malloc, dame un trozo de memoria que sea lo suficientemente grande para el tamaño de un nodo. Y usare la variable temporal 'new' para señalar eso.

`if (new != NULL)` —> compruebo que la reserva de memoria no ha fallado y entonces, solo entoces...

`new->content = (void *)content;` —> asigno el valor del contenido que le es pasado por parametro al nuevo nodo que se va a crear.

`new->next = NULL` —> Inicializo a NULL next ya que tiene que apuntar a nada.

## ft_lstadd_front

Añade la cadena que recibe como parametro (new) al principio de la lista. Para ell

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:15:37 by borjagrd          #+#    #+#             */
/*   Updated: 2019/12/22 17:23:49 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstadd_front(t_list **lst, t_list *new)  // Esta funcion no devuelve nada.
{
	 *lst = new;           // Añade el contenido de new a lst
   new->next = lst;      // En el next de new le dice que el proximo elemento al que vincula es 'lst' de esta forma pasa a estar en la segunda poscion.
}
```

[añadir elemento comienzo lista enlazada.psd](Functions%2083d5ac9cbdaf4d8891f23d2f3d62ed03/anadir_elemento_comienzo_lista_enlazada.psd)

[ft_lstadd_front.mp4](Functions%2083d5ac9cbdaf4d8891f23d2f3d62ed03/ft_lstadd_front.mp4)

## ft_lstsize

Cuenta el numero de elementos que tiene una lista.

Aunque pude resultar un poco confuso, lo que quiere decir 'lst = lst→next;' es que una vez que avanza el contador, lst pasa a ser la siguiente direccion de memoria de la lista enlazada

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 20:17:14 by borjagrd          #+#    #+#             */
/*   Updated: 2019/12/23 20:58:04 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count_lst;          // Declaro esta variable para contar los elemnetos.

    count_lst = 0;          // Inicializo el contador en 0.
    while(lst != NULL)      // Mientras la lista tenga elemtos que ejecute el codigo:
    {
        count_lst++;        // Avanza el contador una posicion.
        lst = lst->next;    // lst pasa a ser la siguiente direccion del elemto de la lista.
    }
    return (count_lst);     // Devuelve el contador de la lista.
}
```

## ft_lstlast

Devuelve el ultimo elemento de la lista

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 12:12:40 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/27 13:14:20 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
```

mientras lst no haya llegado al final && lst→next no haya llegado al final va asignando la dirección almacenada en next al puntero lst, por lo que va avanzando a lo largo de la lista (lst pasa a valer lo que vale el siguiente elemento de la lista).

Una vez que llega al final, sale del bucle y devuelve el valor de lst. Como ha ido avanzando a través de los next de cada elemento de la lista, al final ha terminado valiendo lo que vale el ultimo elemento y es el valor que devolvemos.

## 

## ft_lstadd_back

Añade el elemento *new al final de la lista.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 12:09:34 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/27 14:37:49 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *alst_aux;

	alst_aux = ft_lstlast(*alst);
	if (*alst == NULL)
		*alst = new;
	else
		alst_aux->next = new;
}
```

Como no puedo trabajar con un puntero de un puntero, creo el puntero auxiliar *alst_aux para poder trabajar mas adelante.

El ejercicio pide añadir *new al final de la lista y para ello tengo que averiguar cual es ultimo elemento de la lista. Voy a utilizar la función ft_lstlast(); que he realizado anteriormente y que precisamente me devuelve el último elemento de la lista (me ahorro trabajo) y asigno el valor devuelto al puntero *alst_aux

Pude que solo tenga un elemento en la lista por lo que antes de poner a trabajar a mi programa voy a preguntar si *alst == NULL, porque en caso de ser afirmativo directamente asigno new a *alst.

En el caso de que la lista tenga mas elementos lo que ocurre en else es que asigna *new al **next** del ultimo elemento de la lista, por lo que *new pasa a convertirse ahora en el último elemento de la lista.

## ft_lstdelone

Suprime y libera la memoria del elemento pasado como argumento *lst utilizando la función *del y seguido free.
No se debe liberar la memoria de next.
Por último, el puntero al elemento debe pasar a NULL

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 12:09:34 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/27 14:37:49 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_stldelone(t_list *lst, void(*del)(void *))
{
	if (lst != NULL)          // Solo ejecuto el código si tengo memoria que liberar.
		del(lst->content);      // unicamente borro .content ya que no debe liberarse .next
		free(lst);              // libero memoria a continuación utilzando la función free.
		lst = NULL;             // paso a NULL el puntero al elemento.
}

```

## ft_lstclear

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 16:24:34 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/27 17:26:28 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_aux;
	t_list	*save;

	if (*lst != NULL)
	{
		lst_aux = *lst;
		while (lst_aux != NULL)
		{
			save = lst_aux->next;     // Asigno a 'save' el valor de 'next' de lst_aux el cual aloja la direccion de memoria del siguiente elemento. Tengo que hacer esto lo priemro ya que despues voy a elimianr todos los datos y sino NO tengo forma de avanzar al siguiente elemento.
			del(lst_aux->content);    // suprime la memoria. Cuando habla de suprimir, unicamente debo de eliminar el contenido. 
			free(lst_aux);            // Libera la memoria. Cuando habla de liberar se refiere a todo y por lo tanto lo hacemos de todo el puntero.
			lst_aux = save;           // avanza al siguiente nivel. 'save' que contiene el elemento siguiente, le pasa su valor a lst_aux y por tanto el bucle comienza y podemos de nuevo suprimir y liberar memoria de este elemento. No sin antes guardar la direccion de memoria alojada en su next para poder avanzar entre los elementos.
		}
		*lst = NULL;                // iguala a NUll el puentero 
	}
}
```

## ft_lstiter

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 12:58:21 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/28 13:34:20 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_aux;

	while (lst != NULL)
	{
		lst_aux = lst->next;
		f(lst->content);
		lst = lst_aux;
	}
}
```

Tengo que crear un puntero auxiliar '*lst_aux' para guardar el contenido de '*lst' ya que puede darse el caso de que la funcion 'f' la cual aplicamos en cada iteracción este armada para suprimir y liberar la memoria y por consiguiente no tendríamos modo alguno de acceder al siguiente elemento de la lista enlazada

## ft_lstmap

Ejecuta la función que recibe por parámetros a cada carácter de la cadena que recibe en el primer parámetro.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 13:39:26 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/12/28 17:56:50 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list)); // hay que reservar memoria para poder guardar lst en list
	if (!list) // si la asignacion falla..
		return (NULL);  //.. devuelve NULL
	if (!(lst && f)) // si no hay cadena o no hay funcion..
		return (NULL); // ..devuelve NULL
	list = ft_lstnew(f(lst->content)); // ֍
	lst = lst->next;
	while (lst)
	{
		if (!(map = ft_lstnew(f(lst->content)))) 
		{
			ft_lstdelone(list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, map);
		lst = lst->next;
	}
	return (list);
}
```

֍ La funcion ft_lstadd_back añade al final de la lista el elemento pasado como argumeto, pero es necesario que por lo menos la lista tenga un elemento y es por eso que en este punto crea con ft_lstnew el primer elemento para que luego podamos añadir los siguintes al final de la lista.
