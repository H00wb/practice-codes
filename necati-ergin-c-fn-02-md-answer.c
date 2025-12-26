/*
  4 sayıdan en büyüğünü hesaplayan max4 isimli bir fonksiyon tanımlayınız.

main fonksiyonu içinde standart giriş akımından 4 tamsayı alınız.

max4 isimli fonksiyona çağrı yaparak alınan 4 tam sayıdan en büyüğünü standart çıkış akımına (ekrana) yazdırınız:

Örnek ekran çıktısı (1)
dört tamsayi girin:
12 56 91 8

12, 56, 91 ve 8 sayilarinin en buyugu 96
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max4(int x, int y, int z,int t)
{
	int max = x;
	
	if (max < y)
	{
		max = y;
		if (max < z)
			max = z;
	}
	if (max < t)
	{
		max = t;
		if (max < z)
			max = z;
	}
	return max;
}

int main(void)
{
	int x, y, z,t;

	printf("Uc tam sayi girin: \n");
	scanf("%d%d%d%d", &x, &y, &z,&t);

	printf("\n%d %d %d ve %d sayilarinin en buyugu %d \n\n", x, y, z, t, max4(x, y, z,t));
}
