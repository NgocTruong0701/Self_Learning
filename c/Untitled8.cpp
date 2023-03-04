#include <conio.h>
#include <stdlib.h>

void main()
{
   int mang[20];

   int i, minval, maxval;

   /* Khoi tao mang ngau nhien */
   randomize();
   for (i=0; i<20; i++)
     mang[i] = random(100);

   /* Tim gia tri lon nhat va nho nhat */
   minval = maxval = mang[0];
   for (i=1; i<20; i++)
   {
     if (maxval < mang[i])
       maxval = mang[i];
     else if (minval > mang[i])
       minval = mang[i];
   }

   /* In mang */
   clrscr();
   for (i=0; i<20; i++)
   {
     if (mang[i] == maxval)
       textcolor(YELLOW);
     else if (mang[i] == minval)
       textcolor(RED);
     else
       textcolor(WHITE);
     cprintf("%3d", mang[i]);
   }

   getch();
}
