#include<stdio.h>
void main(void){
while(1){

for(i=3;i>0;i--){
EF5pro_1(nhanh,1,0,1);
}
EF4(0,vua,1,0);
EF4(0,vua,0,0);
EF4(1,vua,1,0);
EF4(1,vua,0,0);
EF6_2(vua);
for(i=3;i>0;i--){
EF5pro_1(nhanh,1,1,1);
}
delayt(vua);
for(i=5;i>0;i--){
EF5pro_1(nhanh,1,0,1);
}
delayt(vua);
for(i=3;i>0;i--){
EF5pro_1(nhanh,1,1,1);
}
EF4(0,vua,1,0);
EF4(0,vua,0,0);

EF4(1,vua,1,0);
EF6_1(vua);
for(i=3;i>0;i--){
EF5pro_1(nhanh,1,0,1);
}
delayt(vua);
for(i=5;i>0;i--){
EF5pro_1(nhanh,1,1,1);
}
delayt(vua);
for(i=3;i>0;i--){
EF5pro_1(nhanh,1,0,1);
}

EF4(0,vua,1,0);
EF4(0,vua,0,0);

EF1_1(vua,0,1,0);
EF1_1(vua,0,0,1);
EF1_1(vua,0,1,1);
EF1_1(nhanh,1,0,1);
EF1_1(nhanh,0,0,0);
EF1_1(vua,1,1,1);
EF1_1(vua,1,0,0);
EF1_1(vua,1,1,0);
EF1(nhanh,0,0,1);


EF1(vua,0,1,0);
EF1(vua,0,0,1);
EF1(vua,0,1,1);
EF1(vua,1,0,1);    

EF1(vua,0,0,0);

EF1(vua,1,1,0);
EF1(vua,1,1,1);
EF1(vua,1,0,0);




EF2(1,vua,8);
EF2(2,vua,8);
EF2(1,vua,8);
EF2(2,vua,8);  



EF3(1,vua,0);
EF3(1,vua,1);

EF4(0,vua,0,1);
EF4(0,vua,1,1);
EF4(1,vua,0,1);
EF4(1,vua,1,1);

EF5pro(1,nhanh,0,0);
EF3(0,vua,0);

EF5pro(1,vua,1,1);
EF5pro(1,nhanh,0,1);
EF3(0,nhanh,1);
EF5pro(1,nhanh,1,0);


EF5pro(2,nhanh,0,0);
EF5pro(2,vua,1,0);
EF4(1,nhanh,0,1);
EF5pro(2,vua,1,1);
EF5pro(2,vua,0,1);

EF5pro(4,vua,0,0);
EF5pro(4,vua,1,0);

for(i=0;i<8;i++){
EF5pro_1(nhanh,i,1,0);}
EF5pro(4,vua,0,1);
EF5pro(4,vua,1,1);
EF3(0,nhanh,1);
for(i=0;i<8;i++){
EF5pro_1(nhanh,i,1,0);}
for(i=0;i<8;i++){
EF5pro_1(nhanh,i,0,1);}
for(i=0;i<8;i++){
EF5pro_1(nhanh,i,0,0);}
for(i=0;i<8;i++){
EF5pro_1(nhanh,i,1,1);}
EF5pro(4,vua,0,0);
EF5pro(4,vua,1,0);

EF6(nhanh,1);
EF6(nhanh,2);    
}}

