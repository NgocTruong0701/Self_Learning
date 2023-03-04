#include<stdio.h>
int n,a[50];
int i;
int main() {
	
//nhap n
	do {
		printf("Nhap n(5<=n<=30): ");
		scanf("%d",&n);
		if(n<5 || n>30) {
			printf("Nhap lai n cho hop le: ");
			scanf("%d",&n);
		}
	} while(n<5 || n>30);
//nhap mang
	for(i=0;i<n;i++) {
		printf("\ta[%d]= ",i);
		scanf("%d",&a[i]);
	}
//xuat mang
	printf("\nMang vua nhap la: ");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
//Tim min
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
//TBC các so am
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
//Chen mang
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
	printf("Mang sau khi chen la: ");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
//Xoa mang
	int l;
	do {
		printf("\nNhap  vi tri k(1<=k<=n) can xoa: ");
		scanf("%d",&l);
		if(l<1 || k>n) {
			printf("\nNhap lai k cho hop le: ");
			scanf("%d",&l);
		}
	} while(l<1 || l>n);
	for(i=l;i<n;i++) {
		a[i-1]=a[i];
	}
	n--;
	printf("\nMang sau khi xoa la: ");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
