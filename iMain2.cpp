#include "iGraphics.h"
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int image[5];
int countscore=0;
bool collisiondetector;
int window_posx=800;
int window_posy=600;
class rectangle{
public:
	int posx, posy, width, height,index;
	rectangle(int posx,int posy,int  width, int height,int index){
		this->posx=posx;
		this->posy=posy;
		this->width=width;
		this->height=height;
		this->index=index;
	}


void showimage(){
	iShowImage(posx,posy,height, width,image[index]);
}
	
	}basketball(650,500,40,40,0),hoop(700,500,60,60,1),hoop1(700,400,50,50,1),hoop2(700,300,50,50,1),cannon(100,400,50,50,2),basketball1(650,400,40,40,0),basketball2(650,300,40,40,0);
	
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
bool collide(rectangle obj1, rectangle obj2){
	if(obj1.posx<(obj2.posx+obj2.width)&&obj2.posx<(obj1.posx+obj1.height)&&obj1.posy<(obj2.posy+obj2.height)&&obj2.posy<(obj1.posy+obj1.height)){
		return true;}
	else
		return false;}
		
		

void iDraw()
{
	iClear();
	basketball.showimage();
	basketball1.showimage();
	basketball2.showimage();
	hoop.showimage();
	hoop1.showimage();
	hoop2.showimage();
	cannon.showimage();
	if(basketball.posx<=0){
		basketball.posx=650;
	}
	collisiondetector=collide(cannon,basketball);
	if(collisiondetector){
		basketball.posx=650;
		countscore++;
		cout<<countscore<<endl;
	}

	if(basketball1.posx<=0){
		basketball1.posx=650;
	}
	collisiondetector=collide(cannon,basketball1);
	if(collisiondetector){
		basketball2.posx=650;
		countscore++;
		cout<<countscore<<endl;
	}

	if(basketball2.posx<=0){
		basketball2.posx=650;
	}
	collisiondetector=collide(cannon,basketball2);
	if(collisiondetector){
		basketball2.posx=650;
		countscore++;
		cout<<countscore<<endl;
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	cannon.posx=mx;
	cannon.posy=my;
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}
void loadImage()
{
	image[0]=iLoadImage("basketball.png");

	image[1]=iLoadImage("cannon.png");

	image[2]=iLoadImage("hoop.png");
}
void movement(){
	
	basketball.posx-=20;
	basketball1.posx-=20;
	basketball2.posx-=20;
}
int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(window_posx,window_posy, "Project Title");
	///updated see the documentations
	loadImage();
	iSetTimer(20,movement);
	cout<<countscore<<endl;
	iStart();
	return 0;
}