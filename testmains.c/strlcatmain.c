#include "libft.h"

int main ()
{
	int destlen;
	int testlen;
	const char src[50] = "Scource text";
	char dest[50] = "Destination tekst";
	char test[50] = "Destination tekst";
	printf("Dest before = %s\n", dest);
	destlen = ft_strlcat(dest, src, 0);
	printf("Dest after ft  = %s, destlen: %d\n", dest, destlen);
	testlen = strlcat(test, src, 0);
	printf("Dest after lib = %s, destlen: %d\n\n", test, testlen);

	const char srca[50] = "Scource text";
	char desta[50] = "Destination tekst";
	char testa[50] = "Destination tekst";
	printf("Dest before = %s\n", desta);
	destlen = ft_strlcat(desta, srca, 6);
	printf("Dest after ft  = %s, destlen: %d\n", desta, destlen);
	testlen = strlcat(testa, srca, 6);
	printf("Dest after lib = %s, destlen: %d\n", testa, testlen);
	return(0);
}