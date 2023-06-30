/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	/*find dest size*/
	x = 0;
	while (dest[x] != '\0')
		x++;

	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
