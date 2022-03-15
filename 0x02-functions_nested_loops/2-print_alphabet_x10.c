void print_alphabet_x10(void)
{
	char a;
	int i;

	a = 'a';
	i = 1;
	while(i <= 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
}