/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:43:38 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/10 12:10:44 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	iteri(unsigned int index, char* str)
{
	if (index % 2 == 0)
		*str = 'X';
	write(1, str, 1);
}

char	mapi(unsigned int index, char c)
{
	if (c >= 97 && c <= 122 && (index % 2) == 0)
		c -= 32;
	return (c); 
}

void	print_list(t_list *head)
{
	t_list *current;

	current = head;
	while (current)
	{
		if (current->content != NULL)
			printf("%s\n", (char *) current->content);
		else
			printf("-- Nodo sin contenido --");
		current = current->next;
	}
}

void	ft_del(void *content)
{
	free(content);
}

void	iter(void *content)
{
	char	*temp;
	int	index;

	temp = (char *) content;
	index = 0;
	while (temp[index])
	{
		temp[index] = ft_toupper(temp[index]);
		index++;
	}
}

void	*map(void *content)
{
	char	*temp1;
	char	*temp2;
	char	*joined;
	char	*result;

	temp1 = ft_strdup("\t - ");
	temp2 = (char *) content;
	temp2[0] = ft_toupper(temp2[0]);
	joined = ft_strjoin(temp1, temp2);
	result = ft_strdup(joined);
	return (result);
}

int	main(void)
{
	//!		FT_ISALPHA
	/* printf("\nFunción ft_isalpha\n");
	printf("------------------\n");
	printf("Comprobando la letra 'P'      : %i\n", ft_isalpha('P'));
	printf("Comprobando la letra 't'      : %i\n", ft_isalpha('t'));
	printf("Comprobando el símbolo '$'    : %i\n", ft_isalpha('$'));
	printf("Comprobando el número '7'     : %i\n", ft_isalpha('7'));
	printf("Comprobando carácter 'espacio': %i\n\n", ft_isalpha(' '));
	printf("Comprobando carácter 'º'      : %i\n\n", ft_isalpha(167)); */

	//!		FT_ISDIGIT
	/* printf("\nFunción ft_isdigit\n");
	printf("------------------\n");
	printf("Comprobando el número '7'          : %i\n", ft_isdigit('7'));
	printf("Comprobando la letra 'S'           : %i\n", ft_isdigit('S'));
	printf("Comprobando el carácter ';'        : %i\n", ft_isdigit(';'));
	printf("Comprobando carácter 'espacio'     : %i\n", ft_isdigit(' '));
	printf("Comprobando un número negativo '-7': %i\n\n", ft_isdigit(-7)); */

	//!		FT_ISALNUM
	/* printf("\nFunción ft_isalnum\n");
	printf("------------------\n");
	printf("Comprobando la letra 'P'           : %i\n", ft_isalnum('P'));
	printf("Comprobando la letra 't'           : %i\n", ft_isalnum('t'));
	printf("Comprobando el número '7'          : %i\n", ft_isalnum('7'));
	printf("Comprobando el símbolo '$'         : %i\n", ft_isalnum('$'));
	printf("Comprobando carácter 'espacio'     : %i\n", ft_isalnum(' '));
	printf("Comprobando carácter 'º'           : %i\n", ft_isalnum(167));
	printf("Comprobando el carácter ';'        : %i\n", ft_isalnum(';'));
	printf("Comprobando carácter 'espacio'     : %i\n", ft_isalnum(' '));
	printf("Comprobando un número negativo '-7': %i\n\n", ft_isalnum(-7)); */

	//!		FT_ISASCII
	/* printf("\nFunción ft_isascii\n");
	printf("------------------\n");
	printf("Comprobando el carácter nulo '\\0'              : %i\n", ft_isascii('\0'));
	printf("Comprobando la letra 'X'                       : %i\n", ft_isascii('X'));
	printf("Comprobando la letra 'x'                       : %i\n", ft_isascii('x'));
	printf("Comprobando el carácter ';'                    : %i\n", ft_isascii(';'));
	printf("Comprobando el últmo ascii '127'               : %i\n", ft_isascii(127));
	printf("Comprobando el el primer carácter no válido 'ç': %i\n\n", ft_isascii(128)); */

	//!		FT_ISPRINT
	/* printf("\nFunción ft_isprint\n");
	printf("------------------\n");
	printf("Comprobando un espacio ' '                    : %i\n", ft_isprint(' '));
	printf("Comprobando el carácter '~'                   : %i\n", ft_isprint('~'));
	printf("Comprobando el número '7'                     : %i\n", ft_isprint('7'));
	printf("Comprobando la tecla suprimir 'Supr'          : %i\n", ft_isprint(127));
	printf("Comprobando el ultimo carácter de control ' ' : %i\n", ft_isprint(31)); */

	//!		FT_STRLEN
	/* printf("\nFunción ft_strlen\n");
	printf("-----------------\n");
	printf("Longitud de cadena vacía        : %i\n", (int)ft_strlen(""));
	printf("Longitud de palabra 'Hola'      : %i\n", (int)ft_strlen("Hola"));
	printf("Longitud de palabra 'Bienvenido': %i\n", (int)ft_strlen("Bienvenido"));
	printf("Longitud de palabra 'pollon'    : %i\n\n", (int)ft_strlen("pollon")); */

	//!		FT_TOUPPER
	/* printf("\nFunción ft_toupper\n");
	printf("------------------\n");
	printf("Comprobando envio de carácter vacío     : %i\n", ft_toupper('\0'));
	printf("Comprobando una letra minúscula 'b' (98): %i\n", ft_toupper('b'));
	printf("Comprobando una letra mayúscula 'B' (66): %i\n", ft_toupper('B'));
	printf("Comprobando el número '7' (55)          : %i\n", ft_toupper('7'));
	printf("Comprobando el caracter '!' (33)        : %i\n\n", ft_toupper('!')); */

	//!		FT_TOLOWER
	/* printf("\nFunción ft_tolower\n");
	printf("------------------\n");
	printf("Comprobando envio de carácter vacío     : %i\n", ft_tolower('\0'));
	printf("Comprobando una letra minúscula 'b' (98): %i\n", ft_tolower('b'));
	printf("Comprobando una letra mayúscula 'B' (66): %i\n", ft_tolower('B'));
	printf("Comprobando el número '7' (55)          : %i\n", ft_tolower('7'));
	printf("Comprobando el caracter '!' (33)        : %i\n\n", ft_tolower('!')); */

	//!		FT_STRCHR
	/* printf("\nFunción ft_strchr\n");
	printf("------------------\n");
	printf("Comprobando la letra 'a' en 'Hola'           : %p\n", ft_strchr("Hola", 'a'));
	printf("Comprobando la letra 'a' en 'Amapola'        : %p\n", ft_strchr("amapola", 'a'));
	printf("Comprobando la letra 'z' en 'Hola'           : %p\n", ft_strchr("Hola", 'z'));
	printf("Comprobando el caracter vacio '\\0' en 'Hola': %p\n\n", ft_strchr("Hola", '\0')); */

	//!		FT_STRRCHR
	/* printf("\nFunción ft_strrchr\n");
	printf("------------------\n");
	printf("Comprobando la letra 'a' en 'Hola'           : %p\n", ft_strrchr("Hola", 'a'));
	printf("Comprobando la letra 'a' en 'Amapola'        : %p\n", ft_strrchr("amapola", 'a'));
	printf("Comprobando la letra 'z' en 'Hola'           : %p\n", ft_strrchr("Hola", 'z'));
	printf("Comprobando el caracter vacio '\\0' en 'Hola' : %p\n\n", ft_strrchr("Hola", '\0')); */

	//!		FT_STRNCMP
	/* printf("\nFunción ft_strncmp\n");
	printf("------------------\n");
	printf("'s1' mayor que 's2'                                : %i\n", ft_strncmp("Hola", "Ho", 3));
	printf("'s1' menor que 's2'                                : %i\n", ft_strncmp("Ho", "Hola", 3));
	printf("'s1' y 's2' son iguales                            : %i\n", ft_strncmp("Holi", "Hola", 3));
	printf("Los caracteres a comparar entre 's1' y 's2' sea '0': %i\n\n", ft_strncmp("Holi", "Hola", 0)); */

	//!		FT_MEMCMP
	/* char str1[] = "hola";
	char str2[] = "holi";
	char str3[] = "david";
	char str4[] = "ivan";

	printf("\nFunción ft_strncmp\n");
	printf("------------------\n");
	if (ft_memcmp(str1, str2, 3) == 0)
		printf("'hola' igual a 'holi' hasta el tercer caracter\n");
	else{
		if (ft_memcmp(str1, str2, 3) < 0)
			printf("'holi' es menor que 'hola' hasta el tercer caracter\n");
		if (ft_memcmp("hola", str2, 3) > 0)
			printf("'hola' es mayor que 'holi' hasta el tercer caracter\n");
	}

	if (ft_memcmp(str1, str2, 4) == 0)
		printf("'hola' igual a 'holi' hasta el cuarto caracter\n");
	else{
		if (ft_memcmp(str1, str2, 4) < 0)
			printf("'holi' es menor que 'hola' hasta el cuarto caracter\n");
		if (ft_memcmp("hola", "holi", 4) > 0)
			printf("'hola' es mayor que 'holi' hasta el cuarto caracter\n");
	}
	
	if (ft_memcmp(str3, str4, 4) == 0)
		printf("'david' igual a 'ivan' hasta el cuarto caracter\n");
	else{
		if (ft_memcmp(str3, str4, 4) < 0)
			printf("'ivan' es menor que 'david' hasta el tercer caracter\n");
		if (ft_memcmp(str3, str4, 4) > 0)
			printf("'david' es mayor que 'ivan' hasta el tercer caracter\n");
	}

	if (ft_memcmp(str4, str3, 4) == 0)
		printf("'david' igual a 'ivan' hasta el cuarto caracter\n");
	else{
		if (ft_memcmp(str4, str3, 4) < 0)
			printf("'ivan' es menor que 'david' hasta el cuarto caracter\n");
		if (ft_memcmp(str4, str3, 4) > 0)
			printf("'david' es mayor que 'ivan' hasta el cuarto caracter\n");
	} */

	//!		FT_MEMCHR
	/* char str1[] = "hola";
	char str2[] = "";

	printf("\nFunción ft_memchr\n");
	printf("------------------\n");
    printf("\nFunción ft_memchr direcciones continuas\n");
    printf("\nDirección de 'h' en 'hola': %p\n", ft_memchr(str1, 'h', 5));
    printf("Dirección de 'o' en 'hola': %p\n", ft_memchr(str1, 'o', 5));
    printf("Dirección de 'l' en 'hola': %p\n", ft_memchr(str1, 'l', 5));
    printf("Dirección de 'a' en 'hola': %p\n\n", ft_memchr(str1, 'a', 5));
	
	printf("Función memchr direcciones continuas\n");
    printf("Dirección de 'h' en 'hola': %p\n", memchr(str1, 'h', 5));
    printf("Dirección de 'o' en 'hola': %p\n", memchr(str1, 'o', 5));
    printf("Dirección de 'l' en 'hola': %p\n", memchr(str1, 'l', 5));
    printf("Dirección de 'a' en 'hola': %p\n\n", memchr(str1, 'a', 5));

	printf("Función ft_memchr y memchar direccion no encontrada\n");
    printf("Dirección de 'p' no encontrada en 'hola': %p\n", ft_memchr(str1, 'p', 5));
	printf("Dirección de 'p' no encontrada en 'hola': %p\n\n", memchr(str1, 'p', 5));

	printf("Función ft_memchr y memchar busqueda en cadena vacía\n");
    printf("Dirección de 'p' en cadena vacía '': %p\n", ft_memchr(str2, 'p', 5));
	printf("Dirección de 'p' en cadena vacía '': %p\n\n", memchr(str2, 'p', 5));

	printf("Función ft_memchr y memchar busqueda de caracter nulo '\\'0\n");
    printf("Dirección de '\\0' en cadena 'hola' '': %p\n", ft_memchr(str1, '\0', 5));
	printf("Dirección de '\\0' en cadena 'hola' '': %p\n\n", memchr(str1, '\0', 5)); */

	//!		FT_BZERO
	/* char str[4] = "Hola";
	size_t length = strlen(str);
	size_t index = 0;
	printf("\nFunción ft_bzero\n");
	printf("------------------\n");
	printf("String antes de enviarlo a 'bzero': %s\n", str);
	ft_bzero(str, length);
	printf("String después de enviarlo a 'bzero': ");
	while (index < length)
	{
		printf("%i", (int)str[index]);
		index++;
	}
	printf("\n"); */
	
	//!		FT_MEMSET
	/* char str1[5] = "Hola";
	char str2[3] = "11"; 
	size_t length1 = strlen(str1);
	size_t length2 = strlen(str2);
	
	printf("\nFunción ft_memset\n");
	printf("------------------\n");
	printf("str1 antes de enviarlo a 'memset'  : %s\n", str1);
	ft_memset(str1, 'x', length1);
	printf("str1 después de enviarlo a 'memset': %s\n\n", str1);

	printf("str2 antes de enviarlo a 'memset'  : %s\n", str2);
	ft_memset(str2, 'z', length2);
	printf("str2 después de enviarlo a 'memset': %s\n\n", str2); */

	//!		FT_MEMCPY
	/* // char src[] = "Hola";
	// char dest1[15];
	// char dest2[15];
	// char *ptr1;
	// char *ptr2;

	// Es necesario poner todo a cero solo para realizar las comprobaciones,
	// Pero en realidad el funcionamiento de mierda tiene que salir mal
	// ft_bzero(dest1, 20);
	// ft_bzero(dest2, 20);

	// ptr1 = memcpy(dest1, src, 2);
	// ptr2 = ft_memcpy(dest2, src, 2);
	// printf("\nFunción ft_memcmp\n");
	// printf("------------------\n\n");
	// if(ft_memcmp(ptr1, ptr2, 5) == 0){
	// 	printf("Memcpy y ft_memcpy dan el mismo resultado\n");
	// 	printf("Resultado memcpy   : %s\n", ptr1);
	// 	printf("Resultado ft_memcpy: %s\n\n", ptr1);
	// }
	// else
	// {
	// 	printf("Memcpy y ft_memcpy dan resultados distintos\n\n");
	// 	printf("Resultado memcpy   : %s\n", ptr1);
	// 	printf("Resultado ft_memcpy: %s\n\n", ptr1);
	// } */
	
	//!		FT_MEMMOVE
	/* char src[] = "Pepito";
	char dest[5];

	printf("Source: %s\n", src);
	ft_memmove(dest, src, 5);
	printf("Destino: %s\n", dest); */

	//!		FT_STRLCPY
	/* size_t result;
	char src[] = "Hola";
	char dest[] = "asdfñlkj";

	printf("Destino antes de copiar  : %s\n", dest);
	result = ft_strlcpy(dest, src, 5);
	printf("Longitud del origen      : %zu\n", result);
	printf("Destino despues de copiar: %s\n\n", dest); */
	
	//!		FT_STRLCAT
	/* char dest[20] = "Hola, ";
    char src[] = "mundo!";

    size_t dest_length = sizeof(dest);
    size_t result_length = ft_strlcat(dest, src, dest_length);

	printf("Tamaño destino: %zu\n", dest_length);
    if (result_length >= dest_length) {
        printf("La cadena resultante fue truncada.\n");
		printf("Tamaño resultado: %zu\n", result_length);
    } else {
        printf("Cadena concatenada con éxito: %s\n", dest);
		printf("Tamaño resultado: %zu\n", result_length);
    } */

	//!		FT_STRNSTR
	/* char str[] = "Hola mundo!";
	char needle[] = "m";
	size_t length = 5;

	printf("Buscando '%s' en los primeros '%zu' caracteres de '%s':\n", needle, length, str);
	if (ft_strnstr(str, needle, length))
		printf("\n¡¡ Encontrado !!\n\n");
	else
		printf("\nNo encontrado :(\n\n"); */
	
	//!		FT_ATOI
	/* printf("Resultado de pasar por ft_atoi el valor '-2147483648'      : %i\n", ft_atoi("-2147483648"));
	printf("Resultado de pasar por ft_atoi el valor '-2147483648'      : %i\n", atoi("-2147483648"));
	printf("Resultado de pasar por ft_atoi el valor '42'               : %i\n", ft_atoi("42"));
	printf("Resultado de pasar por ft_atoi el valor '-42'              : %i\n", ft_atoi("-42"));
	printf("Resultado de pasar por ft_atoi el valor '+42'              : %i\n", ft_atoi("+42"));
	printf("Resultado de pasar por ft_atoi el valor '   42'            : %i\n", ft_atoi("   42"));
	printf("Resultado de pasar por ft_atoi el valor '42' con tabulación: %i\n", ft_atoi("\t\n 42")); */
	
	//!		FT_CALLOC
	/* char *ptr;

	ptr = ft_calloc(1, -1);
	printf("Creando puntero de nada: %p\n", &ptr);
	printf("Creando puntero de nada: %s\n", ptr); */

	//!		FT_STRDUP
	/* char s[] = "Hola, mundo";
    char *sub;

    sub = ft_strdup(s);
	printf("'s'                      = %s\n", s);
    printf("ft_strdup('%s') = %s\n", s, sub);
    free(sub); */

	//!		FT_SUBSTR
	/* char s[] = "Hola, mundo";
    char *sub;

    sub = ft_substr(s, 0, 4);
    printf("ft_substr('Hola, mundo', 0, 5) = %s\n", sub);
    free(sub);

    sub = ft_substr(s, 2, 3);
    printf("ft_substr('Hola, mundo', 2, 3) = %s\n", sub);
    free(sub);

    sub = ft_substr(s, 7, 0);
    printf("ft_substr('Hola, mundo', 7, 0) = %s\n", sub);
    free(sub);

    sub = ft_substr(s, 0, -1);
    printf("ft_substr('Hola, mundo', 0, -1) = %s\n", sub);
    free(sub); */

	//!		FT_PUTCHAR_FD
	/* ft_putchar_fd('H', 1);
	ft_putchar_fd('\n',1); */

	//!		FT_PUTSTR_FD
	/* ft_putstr_fd("Hola que pasa que tal\n", 1); */

	//!		FT_PUTENDL_FD
	/* ft_putendl_fd("Hola que pasa que tal con salto de linea", 1); */

	//!		FT_STRJOIN
	/* printf("Vamos a unir %s y %s y da como resultado '%s'\n", "Hola", "y adios", ft_strjoin("Hola ", "y adios")); */

	//!		FT_PUTNBR_FD
	/* printf("Imprimiendo el número mas bajo posible:\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	printf("Imprimiendo el número mas alto posible:\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	printf("Imprimiendo el cero:\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	printf("Imprimiendo en menos 42:\n");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	printf("Imprimiendo el 42:\n");
	ft_putnbr_fd(42, 1);
	printf("\n"); */

	//!		FT_STRITERI
	/* char str[] = "Hola";
	printf("String antes de pasar por la función ft_striteri: %s\n", str);
	printf("String pasado por ft_striteri:\n");
	ft_striteri(str, iteri);
	printf("\n"); */

	//!		FT_STRMAPI
	/* const char	*str = "mi nombre es neo";
	printf("String antes de pasar por la función ft_strmapi: %s\n", str);
	char *result = ft_strmapi(str, mapi);
	printf("Resultado de ft_strmapi                        : %s\n", result); */

	//!		FT_STRTRIM
	/* char *str = "holaquepasa neo holaa";
	char *trim = "hola";
	printf("String original: %s\n", str);
	char *result = ft_strtrim(str, trim);
	printf("String al eliminar '%s': %s\n", trim, result); */

	//!		FT_ITOA
	/* printf("Imprimiendo entero mas pequeño: %s\n", ft_itoa(-2147483648));
	printf("Imprimiendo entero mas grande : %s\n", ft_itoa(2147483647));
	printf("Imprimiendo el cero           : %s\n", ft_itoa(0));
	printf("Imprimiendo número '42'       : %s\n", ft_itoa(42));
	printf("Imprimiendo número '-42'      : %s\n", ft_itoa(-42)); */

	//!		FT_SPLIT
	/* char	*str = "//https://www.loquesea.com///blog/articulo-1//";
	char	c = '/';
	char	**result;
	int		index;

	result = ft_split(str, c);
	index = 0;
	while (result[index])
	{
		printf("%s\n", result[index]);
		index++;
	} */
	
	//*		BOUNS LISTAS ENLAZADAS
	//!		FT_LSTNEW
	/* t_list	*item1;
	char	*item1_title ="The Matrix";

	item1 = ft_lstnew(item1_title);
	if (item1)
	{
		printf("Nueva película creada con título : %s\n", (char *) item1->content);
		printf("Nueva película creada apuntando a: %p\n", item1->next);
		free(item1);
	}
	else
		printf("ERROR creando nueva película.\n"); */

	//!		FT_LSTADD_FRONT
	/* t_list	*movies;
	t_list	*item1;
	t_list	*item2;
	t_list	*item3;

	char	*item1_title = "The Matrix";
	char	*item2_title = "Transformers";
	char	*item3_title = "Misión imposible";
	movies = NULL;
	item1 = ft_lstnew(item1_title);
	item2 = ft_lstnew(item2_title);
	item3 = ft_lstnew(item3_title);
	printf("Añadiendo películas a la lista por el inicio...\n\n");
	printf("Primer elemento en añadir : %s\n",(char *) item1_title);
	printf("Segundo elemento en añadir: %s\n",(char *) item2_title);
	printf("Tercer elemento en añadir : %s\n\n",(char *) item3_title);
	ft_lstadd_front(&movies, item1);
	ft_lstadd_front(&movies, item2);
	ft_lstadd_front(&movies, item3);
	printf("Películas de mi lista\n");
	printf("---------------------\n");
	print_list(movies); */

	//!		FT_LSTSIZE
	/* t_list	*movies;
	t_list	*item1;
	t_list	*item2;
	t_list	*item3;

	char	*item1_title = "The Matrix";
	char	*item2_title = "Transformers";
	char	*item3_title = "Misión imposible";

	movies = NULL;

	printf("\nTamaño inicial de la lista               : %i\n\n", ft_lstsize(movies));

	printf("Añadimos la primera película             : %s\n", (char *) item1_title);
	item1 = ft_lstnew(item1_title);
	ft_lstadd_front(&movies, item1);
	printf("Tamaño despues de añadir %s: %i\n\n", (char *) item1_title, ft_lstsize(movies));

	printf("Añadimos la segunda película             : %s\n", (char *) item2_title);
	item2 = ft_lstnew(item2_title);
	ft_lstadd_front(&movies, item2);
	printf("Tamaño despues de añadir %s    : %i\n\n", (char *) item2_title, ft_lstsize(movies));

	printf("Añadimos la tercera película             : %s\n", (char *) item3_title);
	item3 = ft_lstnew(item3_title);
	ft_lstadd_front(&movies, item3);
	printf("Tamaño despues de añadir %s: %i\n\n", (char *) item3_title, ft_lstsize(movies)); */

	//!		FT_LSTLAST
	/* // El útimo siempre va a ser el primero que ingresamos ya que estamos haciendo un prepend a la lista
	t_list	*cars;
	t_list	*item1;
	t_list	*item2;
	t_list	*last_item;

	char *item1_brand = "Ford";
	char *item2_brand = "Citroen";

	cars = NULL;

	last_item = ft_lstlast(cars);

	printf("Último elemento de la lista antes de añadir ninguno:\n");
	printf("----------------------------------------------------\n");
	
	if (!last_item)
		printf("La lista de coches esta vacía.\n\n");
	else
		printf("El último coche de la lista es de la marca: %s\n\n", (char *) last_item->content);

	printf("Último elemento de la lista después de añadir el coche %s:\n", (char *) item1_brand);
	printf("-------------------------------------------------------\n");
	item1 = ft_lstnew(item1_brand);
	ft_lstadd_front(&cars, item1);
	last_item = ft_lstlast(cars);
	if (!last_item)
		printf("La lista de coches esta vacía.\n\n");
	else
		printf("El último coche de la lista es de la marca: %s\n\n", (char *) last_item->content);

	printf("Último elemento de la lista después de añadir el coche %s:\n", (char *) item2_brand);
	printf("-------------------------------------------------------\n");
	item2 = ft_lstnew(item2_brand);
	ft_lstadd_front(&cars, item2);

	last_item = ft_lstlast(cars);
	if (!last_item)
		printf("La lista de coches esta vacía.\n\n");
	else
		printf("El último coche de la lista es de la marca: %s\n\n", (char *) last_item->content); */

	//!		FT_LSTADD_BACK
	/* t_list	*actors;
	t_list	*actor1;
	t_list	*actor2;
	t_list	*actor3;
	char	*actor1_name;
	char	*actor2_name;
	char	*actor3_name;

	actors = NULL;

	actor1_name = "Chris Evans";
	actor1 = ft_lstnew(actor1_name);
	ft_lstadd_back(&actors, actor1);
	printf("Lista de actores depués da añadir a %s al final\n", actor1_name);
	printf("--------------------------------------------------------\n\n");
	print_list(actors);
	printf("\n\n");

	actor2_name = "Scarlett Johansson";
	actor2 = ft_lstnew(actor2_name);
	ft_lstadd_back(&actors, actor2);
	printf("Lista de actores depués da añadir a %s al final\n", actor2_name);
	printf("---------------------------------------------------------------\n\n");
	print_list(actors);
	printf("\n\n");

	actor3_name = "Tom Holland";
	actor3 = ft_lstnew(actor3_name);
	ft_lstadd_back(&actors, actor3);
	printf("Lista de actores depués da añadir a %s al final\n", actor3_name);
	printf("--------------------------------------------------------\n\n");
	print_list(actors);
	printf("\n\n"); */

	/* //!		FT_LSTDELONE
	char	*lang1_name = ft_strdup("Php");
	char	*lang2_name = ft_strdup("Javascript");
	char	*lang3_name = ft_strdup("Java");

	t_list	*lang1;
	t_list	*lang2;
	t_list	*lang3;

	t_list	*languages;


	languages = NULL;
	lang1 = ft_lstnew(lang1_name);
	lang2 = ft_lstnew(lang2_name);
	lang3 = ft_lstnew(lang3_name);

	ft_lstadd_front(&languages, lang1);
	ft_lstadd_front(&languages, lang2);
	ft_lstadd_front(&languages, lang3);
	printf("Lista de lenguajes de programación\n");
	printf("----------------------------------\n\n");
	print_list(languages);
	printf("\n");

	printf("Lista después de eliminar %s\n", lang1_name);
	printf("------------------------------------\n\n");
	ft_lstdelone(lang1, ft_del);
	print_list(languages);
	printf("\n"); */



	return (0);
}