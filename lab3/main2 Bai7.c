/* doi mot ki tu hoa thanh ki tu thuong */
#include <stdio.h>
void main()
{
	char c;
	printf("Please enter a character:");
	scanf("%c", &c);
	
	if (c>= "A" && c <= "Z")
	printf("lowercase character = %c", c + "a" - "A");
	else
	printf("Character Entered is = %c", c);
}
