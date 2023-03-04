#include<bits/stdc++.h>

using namespace std;
void nhap(float &n){
	printf("Nhap cac canh : ");
	scanf("%f",&n);
}
void xuat(float &n){
	printf("Xuat: %f\n",n);
}
void ve(float a){
    printf("---------Loi Giai-----------\n");
}
float P(float &a,float &b){
	float P=(a+b)*2;
	return P;
}
float S(float &a,float &b){
	float S=a*b;
	return S;
}
void hcn(float  &m, float &n)
{
   for (int i = 1; i <= m; i++)
   {
      for (int j = 1; j <= n; j++)
         if (i == 1 || j == 1 || i == m || j == n)
            printf("* ");
         else
            printf("  ");
      printf("\n");
   }
}
int main (){
	float a,b;
	nhap(a);
	nhap(b);
	ve(a);
    xuat(a);
    xuat(b);
    printf("Chu vi hinh chu nhat co canh  %f va %f : %f\n ",a,b,P(a,b));
    printf("Dien tich hinh chu nhat co canh  %f va %f : %f \n",a,b,S(a,b));
	ve(a);
	printf("Hinh Chu nhat : \n");
	hcn(a,b);
}
