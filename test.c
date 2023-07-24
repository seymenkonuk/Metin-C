#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include "metin.h"

main() {
    char metin[100];
    esitle(metin, "mEtiN");
    printf("%s\n", metin);
    printf("%d\n", uzunluk(metin));
    
    esitle(metin, dondur(metin));
    printf("%s\n", metin);
    esitle(metin, kucult(metin));
    printf("%s\n", metin);
    esitle(metin, buyut(metin));
    printf("%s\n", metin);
    esitle(metin, ters(metin));
    printf("%s\n", metin);
    esitle(metin, birlestir(metin, "deneme"));
    printf("%s\n", metin);
    esitle(metin, ayir(metin, 2, 7));
    printf("%s\n", metin);
    printf("%d\n", ara(metin, "en"));
    printf("%d\n", bul(metin, "en"));
    printf("%d\n", kacKez(metin, "e"));
    printf("%d\n", ozdesMi(metin, "en"));
    esitle(metin, degistir(metin, "e", "a", false));
    printf("%s\n", metin);
    esitle(metin, tumunuDegistir(metin, "e", "a"));
    printf("%s\n", metin);
    printf("%d\n", tamSayiMi("+15462015"));
    printf("%d\n", sayiMi("+154.62015"));
    printf("%d\n", tamSayiyaDonustur("+15462015"));
    printf("%d\n", sayiyaDonustur("+154.62015"));
    printf("%d\n", anagramMi("seymen", "eenmys"));
    esitle(metin, formatliMetin("024015"));
    printf("%s", metin);
    while (1);
}
