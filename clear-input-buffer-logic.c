#include <stdio.h>
#include <stdlib.h>

void clear_input_buffer(void) {
    int c;
    while((c = getchar()) != '\n' && c!= EOF) { // "Getchar fonksiyonunun geri dönüş değeri atanan c değişkeninin değeri newline karakteri olmadığı sürece VE c'nin değeri EOF(Input buffer'ın boş olduğunu belirten makro) değilse"
        ; // Aslında burada null statement olmasının sebebi c'nin aslında buffer'da newline karakteri gelene kadar buffer'dan karakter toplayan bir collector gibi çalışmasından başka bir şey istemememiz. Ki bu istenileni de while kontrol deyiminin parantezinde oluşturduk.
        /* Input 1 : 345emre olsa, 1.scanf 345 karakterlerini extract edip n'in adresindeki değer olarak yazmasından sonra getchar döngü olarak,
        önce e karakterinin kodunu alır sonra c değişkenine m karakterinin kodu üstüne yazılır sonra r karakterinin kodu üstüne yazılır en son c değişkenine atanan e karakterinin kodu r karakterinin kodunun üstüne yazılır.
            c = e
            c = m
            c = r
            c = e         gibi. */
        // Bunu yaparken de buffer'ı temizlemiş olur aslında.
    }
}

int main(void) {
    int n,a;
    printf("Enter number: ");
    scanf("%d",&n);
    clear_input_buffer();
    printf("Enter another number: ");
    scanf("%d",&a);
    printf("%d %d",n,a);
    return 0;
}
