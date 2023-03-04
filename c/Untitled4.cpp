#include<stdio.h>
#include<math.h>
int n,a,b;
void nhapn()
{
	do 
    {
	printf("Nhap n thoa man 9<n<=35: ");
    scanf("%d",&n);
	}
    while (n<10 || n>35);
}
void nhapab()
{
	printf("Nhap so nguyen a = ");
    scanf("%d",&a);
    printf("Nhap so nguyen b = ");
    scanf("%d",&b);
}
float tinhP()
{
	float P=0;
	for(int i=1;i<=n;i++)
	{
	P=P+(float)pow(a,i+1)*pow(-1,i)+i/b+pow(-1,i)*i;
	}
	P=P+sqrt(2106);
	printf("tong P = %f",P);
	return P; 
}
int main(){
	nhapn();
	nhapab();
	printf("P = %f",tinhP()); 
	return 0;
}
