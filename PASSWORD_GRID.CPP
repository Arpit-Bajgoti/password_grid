#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<string.h>

 const n=55; int k[55],h;
 char ch,num,num_;
  char char_[10];


struct grid_system
{
void graphics_initializer();
void interface();
void boundary();
void coordinates();
void actual_working_code();
void move_to();
void random_number_initializer();
void initializer();
void text1();
void text2();
void text3();
void text4();
void boundary2();
void password();
void password_initializer();
struct string{
char q[30];
}c[55];
}a;



struct str{
char  arpit[5];
}v[3];

void grid_system::graphics_initializer()
{ int gd=0,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

}

void grid_system::boundary()
{
 for(int i=3;i<459;i++)
{  delay(2);
  outtextxy(0,i,"Ü");
}
  for(i=0;i<632;i++)
{ delay(2);
  outtextxy(i,459,"Ü");
}
  for(i=3;i<459;i++)
{ delay(2);
outtextxy(632,i,"Ü");
}

for(i=0;i<632;i++)
{  delay(2);
  outtextxy(i,1,"Ü");
}

}


void grid_system::interface()
{
   //  horizontal lines
 line(80,50,600,50);
 line(80,100,600,100);
 line(80,150,600,150);
 line(80,200,600,200);
 line(80,250,600,250);
 line(80,300,600,300);
 line(80,350,600,350);
 //line(80,400,600,400);
   //  vertical lines
 line(130,18,130,380);
 line(180,18,180,380);
 line(230,18,230,380);
 line(280,18,280,380);
 line(330,18,330,380);
 line(380,18,380,380);
 line(430,18,430,380);
 line(480,18,480,380);
 line(530,18,530,380);
 line(580,18,580,380);
 // big line
 line(0,390,630,390);


 //text for coordinates

 setcolor(6);
{ settextstyle(1,0,5);
 outtextxy(90,50,"A");
 outtextxy(90,100,"B");
 outtextxy(90,150,"C");
 outtextxy(90,200,"D");
 outtextxy(90,250,"E");
 outtextxy(90,300,"F");
}


  setcolor(4);
{ settextstyle(1,0,4);
 outtextxy(150,7,"1");
 outtextxy(200,7,"2");
 outtextxy(250,7,"3");
 outtextxy(300,7,"4");
 outtextxy(350,7,"5");
 outtextxy(400,7,"6");
 outtextxy(450,7,"7");
 outtextxy(500,7,"8");
 outtextxy(550,7,"9");
}
}



 void grid_system::coordinates()
{ //text for coordinates A
 setcolor(3) ;
 {settextstyle(1,0,1);
 outtextxy(132,62,"(A,1)");
 outtextxy(182,62,"(A,2)");
 outtextxy(232,62,"(A,3)");
 outtextxy(282,62,"(A,4)");
 outtextxy(332,62,"(A,5)");
 outtextxy(382,62,"(A,6)");
 outtextxy(432,62,"(A,7)");
 outtextxy(482,62,"(A,8)");
 outtextxy(532,62,"(A,9)");
 //text for coordinates B
 outtextxy(132,112,"(B,1)");
 outtextxy(182,112,"(B,2)");
 outtextxy(232,112,"(B,3)");
 outtextxy(282,112,"(B,4)");
 outtextxy(332,112,"(B,5)");
 outtextxy(382,112,"(B,6)");
 outtextxy(432,112,"(B,7)");
 outtextxy(482,112,"(B,8)");
 outtextxy(532,112,"(B,9)");

 //text for coordinates C
 outtextxy(132,162,"(C,1)");
 outtextxy(182,162,"(C,2)");
 outtextxy(232,162,"(C,3)");
 outtextxy(282,162,"(C,4)");
 outtextxy(332,162,"(C,5)");
 outtextxy(382,162,"(C,6)");
 outtextxy(432,162,"(C,7)");
 outtextxy(482,162,"(C,8)");
 outtextxy(532,162,"(C,9)");

 //text for coordinates D
 outtextxy(132,212,"(D,1)");
 outtextxy(182,212,"(D,2)");
 outtextxy(232,212,"(D,3)");
 outtextxy(282,212,"(D,4)");
 outtextxy(332,212,"(D,5)");
 outtextxy(382,212,"(D,6)");
 outtextxy(432,212,"(D,7)");
 outtextxy(482,212,"(D,8)");
 outtextxy(532,212,"(D,9)");
 //text for coordinates E
 outtextxy(132,262,"(E,1)");
 outtextxy(182,262,"(E,2)");
 outtextxy(232,262,"(E,3)");
 outtextxy(282,262,"(E,4)");
 outtextxy(332,262,"(E,5)");
 outtextxy(382,262,"(E,6)");
 outtextxy(432,262,"(E,7)");
 outtextxy(482,262,"(E,8)");
 outtextxy(532,262,"(E,9)");
 //text for coordinates F
 outtextxy(132,312,"(F,1)");
 outtextxy(182,312,"(F,2)");
 outtextxy(232,312,"(F,3)");
 outtextxy(282,312,"(F,4)");
 outtextxy(332,312,"(F,5)");
 outtextxy(382,312,"(F,6)");
 outtextxy(432,312,"(F,7)");
 outtextxy(482,312,"(F,8)");
 outtextxy(532,312,"(F,9)");

}

}

void grid_system::random_number_initializer()
{
  setcolor(3);
  //magic number row 1
 outtextxy(150,62,a.c[0].q);
 outtextxy(200,62,a.c[1].q);
 outtextxy(250,62,a.c[2].q);
 outtextxy(300,62,a.c[3].q);
 outtextxy(350,62,a.c[4].q);
 outtextxy(400,62,a.c[5].q);
 outtextxy(450,62,a.c[6].q);
 outtextxy(500,62,a.c[7].q);
 outtextxy(550,62,a.c[8].q);

  //magic number row 2
 outtextxy(150,112,a.c[9].q);
 outtextxy(200,112,a.c[10].q);
 outtextxy(250,112,a.c[11].q);
 outtextxy(300,112,a.c[12].q);
 outtextxy(350,112,a.c[13].q);
 outtextxy(400,112,a.c[14].q);
 outtextxy(450,112,a.c[15].q);
 outtextxy(500,112,a.c[16].q);
 outtextxy(550,112,a.c[17].q);
  //magic number row 3
 outtextxy(150,162,a.c[18].q);
 outtextxy(200,162,a.c[19].q);
 outtextxy(250,162,a.c[20].q);
 outtextxy(300,162,a.c[21].q);
 outtextxy(350,162,a.c[22].q);
 outtextxy(400,162,a.c[23].q);
 outtextxy(450,162,a.c[24].q);
 outtextxy(500,162,a.c[25].q);
 outtextxy(550,162,a.c[26].q);
   //magic number row 4
 outtextxy(150,212,a.c[27].q);
 outtextxy(200,212,a.c[28].q);
 outtextxy(250,212,a.c[29].q);
 outtextxy(300,212,a.c[30].q);
 outtextxy(350,212,a.c[31].q);
 outtextxy(400,212,a.c[32].q);
 outtextxy(450,212,a.c[33].q);
 outtextxy(500,212,a.c[34].q);
 outtextxy(550,212,a.c[35].q);
  //magic number row 5
 outtextxy(150,262,a.c[36].q);
 outtextxy(200,262,a.c[37].q);
 outtextxy(250,262,a.c[38].q);
 outtextxy(300,262,a.c[39].q);
 outtextxy(350,262,a.c[40].q);
 outtextxy(400,262,a.c[41].q);
 outtextxy(450,262,a.c[42].q);
 outtextxy(500,262,a.c[43].q);
 outtextxy(550,262,a.c[44].q);
   //magic number row 6
 outtextxy(150,312,a.c[45].q);
 outtextxy(200,312,a.c[46].q);
 outtextxy(250,312,a.c[47].q);
 outtextxy(300,312,a.c[48].q);
 outtextxy(350,312,a.c[49].q);
 outtextxy(400,312,a.c[50].q);
 outtextxy(450,312,a.c[51].q);
 outtextxy(500,312,a.c[52].q);
 outtextxy(550,312,a.c[53].q);

}


void grid_system::actual_working_code()
{  time_t t;
       srand((unsigned)time(&t));
       for(int i=0;i<n;i++)
       k[i]=1+ rand()%9;
}

void grid_system::move_to()
{ actual_working_code();
  for(int i=0;i<n;i++)
  itoa(k[i],a.c[i].q,10);

}



void grid_system::initializer()
{

    if(((ch=='a') || (ch=='A')) &&  (num=='1'))
     strcpy(v[h].arpit,a.c[0].q);

    if(((ch=='a') || (ch=='A')) &&  (num=='2'))
    strcpy(v[h].arpit,a.c[1].q);


    if(((ch=='a') || (ch=='A')) &&  (num=='3'))
    strcpy(v[h].arpit,a.c[2].q);


     if(((ch=='a') || (ch=='A')) &&  (num=='4'))
    strcpy(v[h].arpit,a.c[3].q);


     if(((ch=='a') || (ch=='A')) &&  (num=='5'))
    strcpy(v[h].arpit,a.c[4].q);


     if(((ch=='a') || (ch=='A')) &&  (num=='6'))
     strcpy(v[h].arpit,a.c[5].q);


	 if(((ch=='a') || (ch=='A')) &&  (num=='7'))
     strcpy(v[h].arpit,a.c[6].q);


     if(((ch=='a') || (ch=='A')) &&  (num=='8'))
     strcpy(v[h].arpit,a.c[7].q);


     if(((ch=='a') || (ch=='A')) &&  (num=='9'))
     strcpy(v[h].arpit,a.c[8].q);

/////////////////////////////////////////////////////////////////////
      if(((ch=='b') || (ch=='B')) &&  (num=='1'))
     strcpy(v[h].arpit,a.c[9].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='2'))
     strcpy(v[h].arpit,a.c[10].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='3'))
     strcpy(v[h].arpit,a.c[11].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='4'))
     strcpy(v[h].arpit,a.c[12].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='5'))
     strcpy(v[h].arpit,a.c[13].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='6'))
     strcpy(v[h].arpit,a.c[14].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='7'))
     strcpy(v[h].arpit,a.c[15].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='8'))
     strcpy(v[h].arpit,a.c[16].q);


       if(((ch=='b') || (ch=='B')) &&  (num=='9'))
     strcpy(v[h].arpit,a.c[17].q);


/////////////////////////////////////////////////////////////////////////////

     if(((ch=='c') || (ch=='C')) &&  (num=='1'))
     strcpy(v[h].arpit,a.c[18].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='2'))
    strcpy(v[h].arpit,a.c[19].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='3'))
    strcpy(v[h].arpit,a.c[20].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='4'))
    strcpy(v[h].arpit,a.c[21].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='5'))
    strcpy(v[h].arpit,a.c[22].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='6'))
    strcpy(v[h].arpit,a.c[23].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='7'))
    strcpy(v[h].arpit,a.c[24].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='8'))
    strcpy(v[h].arpit,a.c[25].q);


       if(((ch=='c') || (ch=='C')) &&  (num=='9'))
    strcpy(v[h].arpit,a.c[26].q);


////////////////////////////////////////////////////////////////////////

     if(((ch=='d') || (ch=='D')) &&  (num=='1'))
    strcpy(v[h].arpit,a.c[27].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='2'))
    strcpy(v[h].arpit,a.c[28].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='3'))
    strcpy(v[h].arpit,a.c[29].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='4'))
    strcpy(v[h].arpit,a.c[30].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='5'))
    strcpy(v[h].arpit,a.c[31].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='6'))
    strcpy(v[h].arpit,a.c[32].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='7'))
    strcpy(v[h].arpit,a.c[33].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='8'))
    strcpy(v[h].arpit,a.c[34].q);


	  if(((ch=='d') || (ch=='D')) &&  (num=='9'))
    strcpy(v[h].arpit,a.c[35].q);


////////////////////////////////////////////////////////////////////////////

     if(((ch=='e') || (ch=='E')) &&  (num=='1'))
    strcpy(v[h].arpit,a.c[36].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='2'))
    strcpy(v[h].arpit,a.c[37].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='3'))
    strcpy(v[h].arpit,a.c[38].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='4'))
    strcpy(v[h].arpit,a.c[39].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='5'))
    strcpy(v[h].arpit,a.c[40].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='6'))
    strcpy(v[h].arpit,a.c[41].q);



      if(((ch=='e') || (ch=='E')) &&  (num=='7'))
    strcpy(v[h].arpit,a.c[42].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='8'))
    strcpy(v[h].arpit,a.c[43].q);


      if(((ch=='e') || (ch=='E')) &&  (num=='9'))
    strcpy(v[h].arpit,a.c[44].q);

///////////////////////////////////////////////////////////////////////////////

      if(((ch=='f') || (ch=='F')) &&  (num=='1'))
    strcpy(v[h].arpit,a.c[45].q);


      if(((ch=='f') || (ch=='F')) &&  (num=='2'))
    strcpy(v[h].arpit,a.c[46].q);


       if(((ch=='f') || (ch=='F')) &&  (num=='3'))
    strcpy(v[h].arpit,a.c[47].q);


	if(((ch=='f') || (ch=='F')) &&  (num=='4'))
    strcpy(v[h].arpit,a.c[48].q);


	if(((ch=='f') || (ch=='F')) &&  (num=='5'))
    strcpy(v[h].arpit,a.c[49].q);


	if(((ch=='f') || (ch=='F')) &&  (num=='6'))
    strcpy(v[h].arpit,a.c[50].q);


	if(((ch=='f') || (ch=='F')) &&  (num=='7'))
    strcpy(v[h].arpit,a.c[51].q);



	if(((ch=='f') || (ch=='F')) &&  (num=='8'))
    strcpy(v[h].arpit,a.c[52].q);


	if(((ch=='f') || (ch=='F')) &&  (num=='9'))
    strcpy(v[h].arpit,a.c[53].q);



}


void grid_system::text1()
{  boundary2();
   interface();
   coordinates();
   outtextxy(32,400,"ENTER COORDINATE 1 (X1 and Y1)");
   ch=getch();
   outtextxy(400,400,"Ü");
   num=getch();
   outtextxy(420,400,"Ü");
   initializer();
   getch();

}

void grid_system::text2()
{  boundary2();
   interface();
   coordinates();
    outtextxy(32,400,"ENTER COORDINATE 2 (X2 AND Y2)");
     ch=getch();
   outtextxy(400,400,"Ü");
   num=getch();
   outtextxy(420,400,"Ü");
   initializer();
   getch();

}

void grid_system::text3()
{   boundary2();
   interface();
   coordinates();
    outtextxy(32,400,"ENTER COORDINATE 3 (X3 AND Y3)");
     ch=getch();
   outtextxy(400,400,"Ü");
   num=getch();
   outtextxy(420,400,"Ü");
   initializer();
   getch();
}

void grid_system::text4()
{  boundary2();
    interface();
  coordinates();
  outtextxy(32,400,"ENTER COORDINATE 4 (X4 AND Y4)");
    ch=getch();
   outtextxy(400,400,"Ü");
   num=getch();
   outtextxy(420,400,"Ü");
    initializer();
    getch();
}


void grid_system::boundary2()
{
    for(int i=3;i<459;i++)
 outtextxy(0,i,"Ü");

  for(i=0;i<632;i++)
 outtextxy(i,459,"Ü");

  for(i=3;i<459;i++)
 outtextxy(632,i,"Ü");


  for(i=0;i<632;i++)
 outtextxy(i,1,"Ü");

}


void grid_system::password()
{ password_initializer();


  char_[0]=getch();
  outtextxy(380,400,"Ü");

  char_[1]=getch();
  outtextxy(400,400,"Ü");

  char_[2]=getch();
  outtextxy(420,400,"Ü");

  char_[3]=getch();
  outtextxy(440,400,"Ü");


}

void grid_system::password_initializer()
{
strcat(v[0].arpit,v[1].arpit);
strcat(v[0].arpit,v[2].arpit);
strcat(v[0].arpit,v[3].arpit);


}





void main()
{ clrscr();
 a.graphics_initializer();
 a.boundary();
 a.move_to();
 for(h=0;h<4;h++)
{  a.graphics_initializer();

  if(h==0)
  a.text1();
else  if(h==1)
  a.text2();
else  if(h==2)
  a.text3();
else  if(h==3)
  a.text4();

  closegraph();
  clrscr();
   }

 a.graphics_initializer();
 a.boundary2();
 a.interface();
 a.random_number_initializer();
 outtextxy(32,400,"ENTER THE PASSWORD ");
 a.password();
 getch();
 closegraph();
 clrscr();
 a.graphics_initializer();
  settextstyle(1,0,5);
  if(strcmp(v[0].arpit,char_)==0)
  outtextxy(300,200,"password correct");

  else outtextxy(300,200,"password doesn't match");
  getch();
  closegraph();

}