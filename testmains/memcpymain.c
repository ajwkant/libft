#include "libft.h"

int main () {
	const char src[50] = "After memcpy!";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	printf("%s\n", ft_memcpy("aaaaaaaa", ((void *)0), 17));
	printf("%s\n", memcpy("bbbbbbbb", ((void *)0), 17));
	return (0);
}