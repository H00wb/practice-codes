#include <stdio.h>

int main(void)
{
	int x = -1;
	long y = -2;
	long long z = -3;

  printf("%d %ld %lld",x,y,z); //Normalde "l(küçük L)" kullanmak kötü kod pratiğidir ama %ld yazarken nedense uyarı veriyor. 

  //x, y ve z değişkenlerinin değerlerini standart çıkış akımına'a yazdıran tek bir printf çağrısı gerçekleştirin.
  //derleyicinizin uyarı mesajı vermediğinden emin olun.
}
