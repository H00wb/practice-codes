#include <stdio.h>

int main(void)
{

	// Aşağıdaki program derlenip çalıştırıldığında ekran çıktısı ne olur?
  
	int x = 333;

	printf("%d", printf("%d", printf("%d", x)));

	// Output will be calculated as 33331 -> 333(x), 3(characters printed by 333) and 1(character "3" is one character that has been printed by printf)
}
