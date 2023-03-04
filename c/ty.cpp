#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13

void gotoxy(int x,int y)
{
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD g = {x,y};
	SetConsoleCursorPosition(h,g);
}

void textcolor(int x)
{
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,x);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void Begin()
{
	gotoxy(28,2); textcolor(12); printf("LOVE Trang");	
   gotoxy(13,4); textcolor(12); printf("%c%c%c",3,3,3);gotoxy(65,4);printf("%c%c%c",3,3,3);
   gotoxy(16,4); textcolor(11); printf(" Send to .......Trang.....-Nguoi con gai toi yeu");
  // gotoxy(18,6); textcolor(14); printf("__________________________________________");
   gotoxy(32,6); textcolor(13); printf("Loading......10%%");
   gotoxy(18,7); textcolor(14); printf("__________________________________________");
}

void love(int luu)
{
int traitim[MAX][MAX]= {
{0,0,1,1,1,0,0,0,1,1,1,0,0},
{0,1,0,0,0,1,0,1,0,0,0,1,0},
{1,0,0,0,0,0,1,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,1,0,0,0,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,0,0,0,0,1,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,0},
{0,0,0,0,1,0,0,0,1,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0}};
textcolor(luu%14+1);
if(luu==0)
{
	for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
		    else  {gotoxy(j+20,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
		    else  {gotoxy(j+33,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
		    else  {gotoxy(j+46,i+10); printf(" ");} 
		}
	printf("\n");
}
}
if(luu%2==0)
{
	for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
		    else  {gotoxy(j+20,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
		    else  {gotoxy(j+33,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
		    else  {gotoxy(j+46,i+10); printf(" ");} 
		}
	printf("\n");
}
}
   textcolor(12);
   gotoxy(26,14); printf("I");   gotoxy(38,14); printf("LOVE");    gotoxy(51,14); printf("YOU");
}
int main()
{
	resizeConsole(900,450);
   	Begin(); 
   	gotoxy(10,10); textcolor(15); printf("Cau a!! To co dieu muon noi voi cau.....");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......15%%");
   	gotoxy(10,10); textcolor(15); printf("Truoc khi gap cau....to co nhieu  thoi gian ranh roi lam");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......26%%");
   	gotoxy(10,10); textcolor(15); printf("Nhung tu sau khi gap cau....Nhung khoang thoi gian do khong con nua");
   	gotoxy(10,12); textcolor(15); printf("  ma no bi lop day boi noi nho, tuong tu, va nhung nghi suy ve cau");
   	Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......32%%");
   	gotoxy(10,10); textcolor(15); printf("Co le 'To thich cau that roi......'                                              ");
   	gotoxy(10,12); textcolor(15); printf("                                                                              ");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......48%%");
   	gotoxy(10,10); textcolor(15); printf("...                                                                          ");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......54%%");
   	gotoxy(10,10); textcolor(15); printf("To khong duoc dep trai, nha to cung khong giau, to cung khong hoc gioi                  ");
   	gotoxy(10,12); textcolor(15); printf("    nhu bao nguoi con trai khac                                            ");
  	Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......69%%");
   	gotoxy(10,10); textcolor(15); printf("To chi la 1 thang con trai me Game online, hoc dot, bat tai......             ");
   	gotoxy(10,12); textcolor(15); printf("                                               ");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......84%%");
   	gotoxy(10,10); textcolor(15); printf("Nhieu luc thuc su to muon lay het can dam tien lai gan cau va noi                  ");
   	Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......96%%");
   	gotoxy(10,12); textcolor(11); printf("   'TO THICH CAU'                                                 ");
  	
	
}
