#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
/*
	Let's assume there is a programming language other than C but it has same characteristics of C.

	It has only one comparison operator, "<" , and all the logical operators( !, &&, ||).

	Let's portray all the comparisons in this language using "<"
*/

	int x = 25, y = 35;

	//Equivalance, eşitlik ifadesinin == operatörü haricinde, lojik bir şekilde ifade edilmesidir.

	printf("%d < %d = %d\n", x, y, x < y); // Easiest one.
	printf("%d > %d = %d\n", x, y, y < x); // Eğer x, y'den büyükse; y, x'ten küçüktür.  y < x   =  x > y;
	printf("%d >= %d = %d\n", x, y, !(x < y)); // Sanılanın aksine, x küçüktür y'nin(x < y) direkt tersi, x büyüktür y (x > y) değil, x büyük eşittir y(x >= y)'dir.
	
	printf("%d <= %d = %d\n", x, y, !(y < x)); // x büyüktür y(x > y)'nin tersi, x küçük eşittir y(x <= y) olacak. 
	//Tabii küçüktür operatörü kullanarak sadece, y küçüktür x(y < x)'in tersi.
	
	printf("%d == %d = %d\n", x, y, !(x < y) && !(y < x)); 
	// Equivalance işte tam olarak bu. 
	// Eğer x, y'den küçük değilse(x<y) "VE"
	// y, x'ten küçük(y<x) [x, y'den büyük(x>y) yani] değilse,
	// demektir ki x ve y eşittir. Bu ifade 1(true) ise x ve y eşittir, 0(false) ise değildir.

	printf("%d != %d = %d\n", x, y, (x < y) || (y < x));
	// Equivalance ifadesinin De Morgan tersini almak ise "!=" (eşit değildir) operatörünün ifade biçimidir.
	// Eğer x küçüktür y (x<y) "VEYA" y küçüktür x(y<x)[x, y'den büyük(x>y) yani] ise, demektir x ve y eşit değildir. 
	// Bu ifadenin tümünde sub-expression'lardan yalnızca birinin 1(true) olması durumunda, otomatikmen tüm ifade true'dur.
	// Bu ifade 1(true) ise x ve y eşit değildir, 0(false) ise x ve y eşittir.



}
