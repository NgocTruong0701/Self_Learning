#include<stdio.h>
int n,a[50];
int i;
//nhap n
void nhapn()
{
	do {
		printf("Nhap n(5<=n<=30): ");
		scanf("%d",&n);
		if(n<5 || n>30) {
			printf("Nhap lai n cho hop le: ");
			scanf("%d",&n);
		}
	} while(n<5 || n>30);
}
//nhap mang
void nhapmang()
{
	for(i=0;i<n;i++) {
		printf("\ta[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
//xuat mang
void xuatmang()
{
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
}
//Tim min
void timmin(int a[],int n)
{
	int min=a[0],dem=0,tong=0;
	for(i=0;i<n;i++) {
		if(a[i]<min) {
			min=a[i];
		}
	}
	printf("\nGia tri nho nhat cua mang la: %d",min);
	printf("\nVi tri dau tien xuat hien cua no la: ");
	for(i=0;i<n;i++) {
		if(a[i]==min) {
			printf("%d",i+1);
			break;
		}
	}
}
//TBC các so am
void TBCsoam( int a[], int n)
{
	int dem=0, tong=0;
	for(i=0;i<n;i++) {
		if(a[i]<0) {
			dem++;
			tong+=a[i];
		}
	}
	if(dem>0) {
		printf("\nGia tri TBC cua cac so am la: %0.2f", (float) tong/dem);
	} else {
		printf("\nMang khong co gia tri am nao!");
	}	
}
//Chen mang
void chenmang()
{
		int k,x;
	do {
		printf("\nNhap vi tri k(1<=k<=n) can chen: ");
		scanf("%d",&k);
		if(k<1 || k>n) {
			printf("\nNhap lai k cho hop le: ");
			scanf("%d",&k);
		}
	} while(k<1 || k>n);
	printf("Nhap x: ");
	scanf("%d",&x);
	for(i=n-1;i>=k-1;i--) {
		a[i+1]=a[i];
	}
	a[k-1]=x;
	n++;
}
//Xoa mang
void xoamang()
{
	int k;
	do {
		printf("\nNhap  vi tri k(1<=k<=n) can xoa: ");
		scanf("%d",&k);
		if(k<1 || k>n) {
			printf("\nNhap lai k cho hop le: ");
			scanf("%d",&k);
		}
	} while(k<1 || k>n);
	for(i=k;i<n;i++) {
		a[i-1]=a[i];
	}
	n--;
}
int main() 
{
nhapn();
nhapmang();
printf("\nMang vua nhap la: ");
xuatmang();
timmin(a,n);
TBCsoam(a,n);
chenmang();
printf("Mang sau khi chen la: ");
xuatmang();
xoamang();
printf("\nMang sau khi xoa la: ");
xuatmang();
return 0;
}

	




	
	
