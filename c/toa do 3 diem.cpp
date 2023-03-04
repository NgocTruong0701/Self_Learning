#include<stdio.h>
#include<math.h>
float ab,ac,bc; 
float dodai(float a1,float a2,float b1,float b2,float c1,float c2);
float dodai(float a1,float a2,float b1,float b2,float c1,float c2){
	ab = sqrt(pow((b1-a1),2)+pow((b2-a2),2));
    bc = sqrt(pow((c1-b1),2)+pow((c2-b1),2));
	ac = sqrt(pow((c1-a1),2)+pow((c2-a2),2));
	return ab,bc,ac; 
}

void check(float a1,float a2,float b1,float b2,float c1,float c2);
void check(float a1,float a2,float b1,float b2,float c1,float c2){
	if((c1-a1)/(b1-a1) == (c2-a2)/(b2-a2) || (b1-a1)/(c1-b1) == (b2-a2)/(c2-b2)){
		printf("\n3 diem A,B,C thang hang");
	}
	else{
		printf("\n3 diem khong thang hang");
		float p =(ab + ac + bc)/2;
		float s =sqrt(p*(p-ab)*(p-bc)*(p-ac));
		printf("\nDien tich cua tam gia la : %f",s); 
	} 
} 
int main(){
	float x1,y1,x2,y2,x3,y3; 
	printf("nhap toa do x1,y1 x2,y2 x3,y3 : ");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	dodai(x1,y1,x2,y2,x3,y3);
	printf("\nDo dai 3 canh AB,BC,AC : %f %f %f ",ab,bc,ac);
	check(x1,y1,x2,y2,x3,y3);
	return 0; 
} 
