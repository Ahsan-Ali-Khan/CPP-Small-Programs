/*note output depends on the resolution of your screen.
However concept will be clear so that you can make it yourself*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<winbgim.h>>
int main()
{
int driver=DETECT,mode;    //detect graphics driver automatically
int i,j;
float x,y;

initgraph(&driver,&mode,"C://TC//BGI");      //initialize graph

for(j=0;j<100;j++){     //loop for replacing two flags
if(j%2==0){             //when j is even first flag will visible
setcolor(BROWN);        //setting colour for the arcs
arc(200,160,45,135,100);       //top left arc1
arc(341,19,360-135,360-45,100);   //top right arc1
arc(200,161,45,135,100);          //top left arc2    -- for getting thicker boundary
arc(341,20,360-135,360-45,100);   //top right arc2
//setfillstyle(SOLID_FILL,RED);
//floodfill(200,150,BROWN);
//putpixel(270,115,10);

setcolor(BROWN);
arc(200,210,45,135,100);           //second left arc1
arc(341,69,360-135,360-45,100);    //second right arc1
arc(200,211,45,135,100);           //second left arc2
arc(341,70,360-135,360-45,100);    //second right arc2
//setfillstyle(SOLID_FILL,WHITE);
//floodfill(200,150,BROWN);
//putpixel(270,165,10);

setcolor(BROWN);
arc(200,260,45,135,100);           //third left arc1
arc(341,119,360-135,360-45,100);   //third right arc1
arc(200,261,45,135,100);           //third left arc2
arc(341,120,360-135,360-45,100);   //third right arc2
//setfillstyle(SOLID_FILL,GREEN);
//floodfill(275,215,BROWN);
//putpixel(270,215,10);

setcolor(BROWN);
arc(200,310,45,135,100);            //last left arc1
arc(341,169,360-135,360-45,100);    //last right arc1
arc(200,311,45,135,100);            //last left arc2
arc(341,170,360-135,360-45,100);    //last right arc2

setcolor(BROWN);
line(130,80,130,460);            //left vertical line1
line(131,80,131,460);            //left vertical line2
line(129,80,129,460);            //left vertical line3 --for thicker hoisting stick

line(410,90,410,240);            //right verical line

/*colouring begins
note :- setfillstyle is used to select which colour you want to fill
	and with which pattern.
	floodfill is used to fill the colour from the given coordinates
	upto the boundary of given colour

*/

setfillstyle(SOLID_FILL,RED);//to select colour in upper layer
floodfill(275,115,BROWN);         //to fill colour in upper layer

setfillstyle(SOLID_FILL,WHITE);   //to select colour in middle layer
floodfill(275,165,BROWN);         //to fill colour in middle layer

setfillstyle(SOLID_FILL,GREEN);   //to select colour in bottom layer
floodfill(275,215,BROWN);         //to fill colour in bottom layer

setcolor(BLUE);                  //colour the chakra
circle(270,165,20);              //chakra boundary i.e. circle

for(i=0;i<=360;i+=15)            //algorithm to make 24 lines in the chakra
{
 x=20*sin(i*3.14/180);
 y=20*cos(i*3.14/180);
 setcolor(BLUE);
 line(270,165,270-x,165+y);
}
delay(250);                      //250 mili second delay before clear screen
system("cls");//clrscr();                        //clear output screen
}
if(j%2!=0){                      //conditions for displaying second flag
setcolor(BROWN);                 // when j is odd ,second will visible .
arc(340,160,45,135,100);         // everything is similar except the x-axis .
arc(200,19,360-135,360-45,100);
arc(340,161,45,135,100);
arc(200,20,360-135,360-45,100);
//setfillstyle(SOLID_FILL,RED);
//floodfill(200,150,BROWN);
//putpixel(270,115,10);

setcolor(BROWN);
arc(340,210,45,135,100);
arc(200,69,360-135,360-45,100);
arc(340,211,45,135,100);
arc(200,70,360-135,360-45,100);
//setfillstyle(SOLID_FILL,WHITE);
//floodfill(200,150,BROWN);
//putpixel(270,165,10);

setcolor(BROWN);
arc(340,260,45,135,100);
arc(200,119,360-135,360-45,100);
arc(340,261,45,135,100);
arc(200,120,360-135,360-45,100);
//setfillstyle(SOLID_FILL,GREEN);
//floodfill(275,215,BROWN);
//putpixel(270,215,10);

setcolor(BROWN);
arc(340,310,45,135,100);
arc(200,169,360-135,360-45,100);
arc(340,311,45,135,100);
arc(200,170,360-135,360-45,100);

setcolor(BROWN);
line(130,80,130,460);
line(131,80,131,460);
line(129,80,129,460);

line(410,90,410,240);


setfillstyle(SOLID_FILL,RED);
floodfill(275,115,BROWN);
setfillstyle(SOLID_FILL,WHITE);
floodfill(275,165,BROWN);
setfillstyle(SOLID_FILL,GREEN);
floodfill(275,215,BROWN);

setcolor(BLUE);
circle(270,165,20);

for(i=0;i<=360;i+=15)
{
 x=20*sin(i*3.14/180);
 y=20*cos(i*3.14/180);
 setcolor(BLUE);
 line(270,165,270-x,165+y);
}
delay(250);
system("cls");//clrscr();
}
}
getch();
return(0);
}
