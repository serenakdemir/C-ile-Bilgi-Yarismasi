#include<stdio.h>
#include<string.h>

void hosgeldinizFonksiyonu(){
	
	printf("BILGI YARISMASINA HOS GELDINIZ. ASAGIDAKI KURALLARI OKUYUNUZ!\n"
	"*YARISMAMIZ PUAN SISTEMLIDIR\n *LUTFEN KULLANICI ADINIZI DOGRU GIRINIZ.KAYITLI DEGILSENIZ UYE OLUNUZ!");
	
}

int secimFonksiyonu(){
	int secim;
	printf("\nLutfen Asagidaki Seceneklerden Birini Seciniz.\n[1]-Giris Yap\n[2]-Kayit Ol");
	scanf("%d",&secim);
	return secim;
}
int girisYapFonksiyonu(char isim[200],char sifre[200]){
	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol=false;
	while(kontrol==false){
		
	printf("Lutfen Adinizi Giriniz:");
	scanf("%s",&isimVeri);
	printf("Lutfen Sifrenizi Giriniz:");
	scanf("%s",&sifreVeri);
	if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0){
		printf("Sisteme Hos Geldiniz\n");
		kontrol=true;
	}
	else {
		printf("Hatali Giris\n");
	}
 }
}

int kayitOlFonksiyonu(){
	char isim[200];
	char sifre[200];
	printf("Lutfen Kullanici Isminizi Belirleyiniz:");
	scanf("%s",&isim);
	printf("Lutfen Kullanici Sifrenizi Belirleyiniz:");
	scanf("%s",&sifre);
	printf("Basarili Bir Sekilde Kayit Oldunuz.\n***Giris Ekranýna Yonlendiriliyorsunuz.***\n");
	girisYapFonksiyonu(isim,sifre);
}
int bilgiYarismasi(){
	char cevap[2];
    int puan = 0;
    int can=3;
    printf("Yarisma Basladi.\n");
    printf("Puaniniz:%d", puan);
    while(can!=0){
	
    if (puan == 0) {
        printf("[Soru-1] Asagidakilerden hangisi Turkiye'nin baskentidir?\nA)Istanbul\nB)Ankara\nC)Izmir\nD)Bursa\n");
        scanf("%s", cevap);

        if (strcmp(cevap,"B")==0) { 
            printf("\nDogru Cevap.\n");
            puan += 10;
            printf("Puaniniz:%d\n", puan);
        } else {
            printf("Hatali Cevap.Dogru Cevap B Secenegidir.\n");
            printf("Puaniniz:%d\n", puan);
            can=can-1;
            printf("Kalan Can:%d\n",can);
        }
    }
        
    if (puan == 10) {
        printf("[Soru-2] Asagidakilerden hangisi Rusya'nin baskentidir?\nA)Moskova\nB)Paris\nC)Berlin\nD)Washington\n");
        scanf("%s", cevap);

        if (strcmp(cevap,"A")==0) { 
            printf("\nDogru Cevap.\n");
            puan += 10;
            printf("Puaniniz:%d\n", puan);
        } else {
            printf("Hatali Cevap.Dogru Cevap A Secenegidir.\n");
            printf("Puaniniz:%d\n", puan);
            can=can-1;
            printf("Kalan Can:%d\n",can);
        }
    }
    
    if (puan == 20) {
        printf("[Soru-3] Asagidakilerden hangisi Fransa'nin baskentidir?\nA)Washington\nB)Londra\nC)Roma\nD)Paris\n");
        scanf("%s", cevap);

        if (strcmp(cevap,"D")==0) { 
            printf("\nDogru Cevap.\n");
            puan += 10;
            printf("Puaniniz:%d\n", puan);
            can=0;
        } else {
            printf("Hatali Cevap.Dogru Cevap D Secenegidir.\n");
            printf("Puaniniz:%d\n", puan);
            can=can-1;
            printf("Kalan Can:%d",can);
        }
    }
}
return puan;
}

int yarismaSon(int puan){
	
	printf("\nYarisma Sona Ermistir.\nYarisma Sonu Skorunuz:%d",puan);
}

int main(){
	char isim[200]="Seren";
	char sifre[200]="12345";
	hosgeldinizFonksiyonu();
	int secim=secimFonksiyonu();
	
	if(secim==1){
		girisYapFonksiyonu(isim,sifre);
		;
	}
	else if(secim==2){
		kayitOlFonksiyonu();
		
	}
	
	int skor= bilgiYarismasi();
    yarismaSon(skor);



	return 0;
}
