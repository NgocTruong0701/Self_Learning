#include<stdio.h>
#include<math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%5d", a[i]);
    }
}
void xoa(int &n, int a[], int vitrixoa){
    for(int i=vitrixoa;i<n;i++){
        a[i] = a[i+1];
    }
    n--;
}
int main(){
    int a[100];
    int n, tong = 0, dem = 0;
    int y,k;
    printf("Nhap so luong phan tu:(n>0) ");
    do{
        scanf("%d", &n);
        if(n < 0){
            printf("Nhap lai so luong phan tu: ");
        }
    }
    while(n<0);
    printf("\n======NHAP MANG=====\n");
    NhapMang(a, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(a,n);
    printf("\nNhap y ");
    do{
        scanf("%d", &y);
        if(y < 0){
            printf("Nhap lai so luong phan tu: ");
        }
    }
    while(y<0);
    for(int i =0;i<n;i++){
        if(y%a[i]==0){
            printf("\n%d la uoc cua y", a[i]);
            tong = tong + a[i];
            dem = dem + 1;
        }
    }
    if (dem != 0){
        float tbc = (float)tong/dem;
        printf("\n%2f la tbc", tbc);
    }
    else {
        printf("\nMang khong co tbc");
    }
    int min = a[0];
    int vitrixoa;
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            min = a[i];
            vitrixoa = i;
        }
    }
    printf("\n======Min la %d======\n", min);
    int dem1=0;
    for(int i=0;i<n;i++){
        if(a[i]==min){
            dem1 = dem1 + 1;
        }
    }
 //   printf("\nso phan tu = min: %d", dem1);
    if(min == a[0] && dem1 == 1){
        printf("\nKhong co vi tri can xoa");
    }
    else{
         xoa(n,a,vitrixoa-1);
    }
    for(int i=1;i<n;){
        if(a[i]==min){
          xoa(n,a,i-1);
          //printf("\n%d",a[i]);
        }
        else{
            i++;
        }
    }
    printf("\n======MANG SAU KHI XOA LA=====\n");
    XuatMang(a,n);
}
