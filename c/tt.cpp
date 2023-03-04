#include <stdio.h>
int n, a[100];
void create_arr()
{
	do
	{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
		if(n<=0)
		{
			printf("n phai la so nguyen duong. Nhap lai n!\n");
		}
	} while(n<=0);
	printf("Nhap mang %d so nguyen.\n", n);
	for(int i=0; i<n; i++)
	{
		printf("Phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void show_arr()
{
	printf("Mang da nhap la: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
void divisor_y()
{
	int j=0, sum=0, y;
	do
	{
		printf("\nNhap so nguyen duong y: ");
		scanf("%d", &y);
		if(n<=0)
		{
			printf("y phai la so nguyen duong. Nhap lai y!\n");
		}
	} while(y<=0);
	for(int i=0; i<n; i++)
	{
		if(y%a[i]==0 && a[i]>0)
		{
			j++;
			sum+=a[i];
		}
	}
	if(j==0)
	{
		printf("Khong co phan tu nao la uoc cua y trong mang.");
	}
	else
	{
		printf("Cac phan tu la uoc cua y trong mang la: ");
		for(int i=0; i<n; i++)
		{
			if(y%a[i]==0 && a[i]>0)
			{
				printf("%d ", a[i]);
			}
		}
		printf("\nTong cac phan tu la uoc cua y trong mang la: %d", sum);
		printf("\nTrung binh cong cac phan tu la uoc cua y trong mang la: %.3f", (float)sum/j);
	}
}
void del_before_min()
{
	int min=a[0], j;
	for(int i=0; i<n; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		if(min==a[i])
		{
			j=i;
			break;
		}
	}
	printf("\nPhan tu nho nhat trong mang la: a[%d]", j);
	if(j==0)
	{
		printf("Phan tu nho nhat la phan tu dau tien nen khong the xoa.");
	}
	else
	{
		for(int i=j-1; i<n-1; i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("\nMang sau khi xoa la: ");
		for(int i=0; i<n; i++)
		{
			printf("%d ", a[i]);
		}
	}
	
}
int main()
{
	create_arr();
	show_arr();
	divisor_y();
	del_before_min();
}
