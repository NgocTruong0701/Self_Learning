#include<stdio.h>
#include<conio.h>

int main(){
	int met,tien;
	int loaivai;
	printf("nhap so met vai,loai vai  : ");
	scanf("%d%d",&met,&loaivai);
	switch (loaivai){
		case 1:
		tien=met*200000;
		printf("tong tien cho %d met vai la : %d VND",met,tien);break; 
		case 2:
		tien=met*170000;
		printf("tong tien cho %d met vai la : %d VND",met,tien);break;
		case 3:
		tien=met*120000;
		printf("tong tien cho %d met vai la : %d VND",met,tien);break;
		case 4:
		tien=met*90000; 
		printf("tong tien cho %d met vai la : %d VND",met,tien);break;
	}
	return 0; 
} 
