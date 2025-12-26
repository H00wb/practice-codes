// _3_ sayıdan en büyüğünü hesaplayan _max3_ isimli bir fonksiyon tanımlayınız.

//_main_ fonksiyonu içinde standart giriş akımından _3_ tamsayı alınız.

//_max3_ isimli fonksiyona çağrı yaparak alınan _3_ tam sayıdan en büyüğünü standart çıkış akımına _(ekrana)_ yazdırınız:

//Aynı programı bu kez gerçek sayılar için yazınız.

// Örnek ekran çıktısı (1)

///```
//uc tamsayi girin:
//12 56 8

//12, 56 ve 8 sayilarinin en buyugu 56
//```

// Örnek ekran çıktısı (2)

//```
//uc gercek sayi girin:
//2.87 1.35 0.12

//2.870000, 1.350000 ve 0.120000 sayilarinin en buyugu 2.870000
//```

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max3(int x, int y, int z)
{
	int max = x;
	
	if (max < y)
		max = y;	
	if (max < z)
		max = z;

	return max;
}

double maximum3(double x, double y, double z)
{
	double max = x;

	if (max < y)
		max = y;
	if (max < z)
		max = z;

	return max;
}

int main(void)
{
	int x, y, z;
	double a, b, c;

	printf("Uc tam sayi girin: \n");
	scanf("%d%d%d", &x, &y, &z);

	printf("Uc gercek sayi girin: \n");
	scanf("%LF%LF%LF", &a, &b, &c);

	printf("\n%d %d ve %d sayilarinin en buyugu %d \n\n", x, y, z, max3(x, y, z));
	printf("%LF %LF ve %LF sayilarinin en buyugu %f \n\n", a, b, c, maximum3(a, b, c));
}


