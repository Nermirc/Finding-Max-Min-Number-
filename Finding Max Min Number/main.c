#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    int a,b,c;
    printf("Uc farkli tam sayi giriniz.");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("%d sayisi en buyuk sayidir",a);
    }
    else if(b<a && b<c){
        printf("%d sayisi en kucuk sayidir.",b);
    }
    else{
        printf("Herhangi bir karsilastirma soz konusu degildir."); */
        //daha dogru bir sekilde olusturulan fonksiyon
        int a,b,c;
        int min,max;
        printf("Uc farkli tam sayi giriniz.");
        scanf("%d%d%d",&a,&b,&c);
        max=a;
        if(b>max){
            max=b;
        }
        if(c>max){
            max=c;
        }
        printf("Maximum degerimiz %d\n",max);

        min=a;

        if(b<min){
            min=b;
        }
        if(c<min){
            min=c;
        }
        printf("Minimum degerimiz %d\n",min);


    return 0 ;
}
