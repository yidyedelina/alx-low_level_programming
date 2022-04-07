#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *multiplyByone(char *a, int b)
{
	unsigned int len, i, carry = 0, j, mult;
	len = strlen(a);
	char *mul;
	mul = (char *)malloc((len + 1) * sizeof(char));
	if(mul == NULL)
		return NULL;
	j = len;
	for(i = len - 1;i >= 0;i--)
	{
		mult = atol(a + i)*b + carry;
		if(mult > 9)
		{
			/**mul[j] = (char)(mult % 10);
			carry = mult / 10;
			j--;*/
		}
		else{
			/*mul[j] = (char)mult;
			j--;
			carry = 0;*/
		}
		
	}
	return mul;
}
int main()
{
	char *b = "12";
	int c = 2;
	char *p = multiplyByone(b, c);
	puts(p);
	return 0;
}
