#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//1-100 arasýndaki þifreleri kýrmak için
int main(){
	system("color a");
	
	
	srand(time(NULL)); 
	int boyut;
	printf("Sifre olusturma adedi giriniz:");
	scanf("%d", &boyut);
	
	if(boyut < 0){
		return 0;
	}
	int dizi[boyut]; 
	int alt_sinir = 0, ust_sinir = 100;
	int i = 0, sifre; 
	

	do{
		printf("\n%d.Sifreyi giriniz: ", i+1);
		scanf("%d", &sifre);
		
		
		if(sifre >= alt_sinir && sifre <= ust_sinir){
			dizi[i] = sifre;
			i++; 
		}
		else{
			printf("\nLutfen 0 - 100 arasi deger yaziniz.");
		}
	}while(i != boyut); 
	
	printf("\nSifre araniyor...\n");
 
	
	int random, j = 0;
	
	
	for(int j = 0; j<boyut; j++){
		for(int k = 0; k<=ust_sinir; k++){
			printf("%d ", k);
			if(k == dizi[j]){
				printf("\n%d.Sifre bulundu: %d\n",j+1, dizi[j]); 
			break;
			}
		}
	}

	return 0;
}

