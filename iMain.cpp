#include "iGraphics.h"
#include<iostream>
using namespace std;

int x = 1000;
int y = 100;

int s11 = 255;
int s12 = 255;
int s13 = 255;
int s14 = 0;
int s15 = 255;
int s16 = 255;
int s17 = 255;


int s21 = 255;
int s22 = 255;
int s23 = 255;
int s24 = 0;
int s25 = 255;
int s26 = 255;
int s27 = 255;

int m11 = 255;
int m12 = 255;
int m13 = 255;
int m14 = 0;
int m15 = 255;
int m16 = 255;
int m17 = 255;

int m21 = 255;
int m22 = 255;
int m23 = 255;
int m24 = 0;
int m25 = 255;
int m26 = 255;
int m27 = 255;

int h11 = 255;
int h12 = 255;
int h13 = 255;
int h14 = 0;
int h15 = 255;
int h16 = 255;
int h17 = 255;

int h21 = 255;
int h22 = 255;
int h23 = 255;
int h24 = 0;
int h25 = 255;
int h26 = 255;
int h27 = 255;


int red = 255;

int cnd = 1;
int cnd2 = 1;

int min = 1;
int min2 = 1;

int hour = 1;

char srt;





//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();





	// Dot Circles

	iSetColor(red, 0, 0);
	iFilledCircle(1280, 600, 30, 100);

	iSetColor(red, 0, 0);
	iFilledCircle(1280, 300, 30, 100);

	iSetColor(red, 0, 0);
	iFilledCircle(660, 600, 30, 100);

	iSetColor(red, 0, 0);
	iFilledCircle(660, 300, 30, 100);





	// Right Second Digit

	iSetColor(s11, 0, 0); // Left Down Column
	iFilledRectangle(x + 550 + 50, y, 20, 300);

	iSetColor(s12, 0, 0); // Left Up Column
	iFilledRectangle(x + 550 + 50, y + 320, 20, 300);

	iSetColor(s13, 0, 0); // Up Row
	iFilledRectangle(x + 550 + 50, y + 630, 220, 20);

	iSetColor(s14, 0, 0); // Middle Row
	iFilledRectangle(x + 25 + 550 + 50, y + 300, 170, 20);

	iSetColor(s15, 0, 0); // Down Row
	iFilledRectangle(x + 550 + 50, y - 25, 220, 20);

	iSetColor(s16, 0, 0); // Right Up Column
	iFilledRectangle(x + 200 + 550 + 50, y + 320, 20, 300);

	iSetColor(s17, 0, 0); // Right Down Column
	iFilledRectangle(x + 200 + 550 + 50, y, 20, 300);


	// Left Second Digit

	iSetColor(s21, 0, 0); // Left Down Column
	iFilledRectangle(x + 280 + 50, y, 20, 300);

	iSetColor(s22, 0, 0); // Left Up Column
	iFilledRectangle(x + 280 + 50, y + 320, 20, 300);

	iSetColor(s23, 0, 0); // Up Row
	iFilledRectangle(x + 280 + 50, y + 630, 220, 20);

	iSetColor(s24, 0, 0); // Middle Row
	iFilledRectangle(x + 25 + 280 + 50, y + 300, 170, 20);

	iSetColor(s25, 0, 0); // Down Row
	iFilledRectangle(x + 280 + 50, y - 25, 220, 20);

	iSetColor(s26, 0, 0); // Right Up Column
	iFilledRectangle(x + 200 + 280 + 50, y + 320, 20, 300);

	iSetColor(s27, 0, 0); // Right Down Column
	iFilledRectangle(x + 200 + 280 + 50, y, 20, 300);





	// Right Minute Digit

	iSetColor(m11, 0, 0); // Left Down Column
	iFilledRectangle(x, y, 20, 300);

	iSetColor(m12, 0, 0); // Left Up Column
	iFilledRectangle(x, y + 320, 20, 300);

	iSetColor(m13, 0, 0); // Up Row
	iFilledRectangle(x, y + 630, 220, 20);

	iSetColor(m14, 0, 0); // Middle Row
	iFilledRectangle(x + 25, y + 300, 170, 20);

	iSetColor(m15, 0, 0); // Down Row
	iFilledRectangle(x, y - 25, 220, 20);

	iSetColor(m16, 0, 0); // Right Up Column
	iFilledRectangle(x + 200, y + 320, 20, 300);

	iSetColor(m17, 0, 0); // Right Down Column
	iFilledRectangle(x + 200, y, 20, 300);


	// Left Minute Digit

	iSetColor(m21, 0, 0); // Left Down Column
	iFilledRectangle(x - 300, y, 20, 300);

	iSetColor(m22, 0, 0); // Left Up Column
	iFilledRectangle(x - 300, y + 320, 20, 300);

	iSetColor(m23, 0, 0); // Up Row
	iFilledRectangle(x - 300, y + 630, 220, 20);

	iSetColor(m24, 0, 0); // Middle Row
	iFilledRectangle(x - 300 + 25, y + 300, 170, 20);

	iSetColor(m25, 0, 0); // Down Row
	iFilledRectangle(x - 300, y - 25, 220, 20);

	iSetColor(m26, 0, 0); // Right Up Column
	iFilledRectangle(x - 300 + 200, y + 320, 20, 300);

	iSetColor(m27, 0, 0); // Right Down Column
	iFilledRectangle(x - 300 + 200, y, 20, 300);





	// Right Hour Digit

	iSetColor(h11, 0, 0); // Left Down Column
	iFilledRectangle(x - 600, y, 20, 300);

	iSetColor(h12, 0, 0); // Left Up Column
	iFilledRectangle(x - 600, y + 320, 20, 300);

	iSetColor(h13, 0, 0); // Up Row
	iFilledRectangle(x - 600, y + 630, 220, 20);

	iSetColor(h14, 0, 0); // Middle Row
	iFilledRectangle(x - 600 + 25, y + 300, 170, 20);

	iSetColor(h15, 0, 0); // Down Row
	iFilledRectangle(x - 600, y - 25, 220, 20);

	iSetColor(h16, 0, 0); // Right Up Column
	iFilledRectangle(x - 600 + 200, y + 320, 20, 300);

	iSetColor(h17, 0, 0); // Right Down Column
	iFilledRectangle(x - 600 + 200, y, 20, 300);


	// Left Hour Digit

	iSetColor(h21, 0, 0); // Left Down Column
	iFilledRectangle(x - 850, y, 20, 300);

	iSetColor(h22, 0, 0); // Left Up Column
	iFilledRectangle(x - 850, y + 320, 20, 300);

	iSetColor(h23, 0, 0); // Up row
	iFilledRectangle(x - 850, y + 630, 220, 20);

	iSetColor(h24, 0, 0); // Middle Row
	iFilledRectangle(x - 850 + 25, y + 300, 170, 20);

	iSetColor(h25, 0, 0); // Down Row
	iFilledRectangle(x - 850, y - 25, 220, 20);

	iSetColor(h26, 0, 0); // Right Up Column
	iFilledRectangle(x - 850 + 200, y + 320, 20, 300);

	iSetColor(h27, 0, 0); // Right Down Column
	iFilledRectangle(x - 850 + 200, y, 20, 300);







}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	if (mx > 1500 && mx < 1600)
	{
		if (my>800 && my < 880)
		{
			srt = 's';
		}
	}
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
	if (key == 's')
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


	if (key == GLUT_KEY_UP)
	{

	}
	if (key == GLUT_KEY_DOWN)
	{

	}


}


void secchange() //second's right digit change code
{
	if (cnd == 0)
	{
		s11 = s12 = s13 = s14 = s15 = s16 = s17 = 255;
		s14 = 0;
	}

	else if (cnd == 1)
	{
		s14 = 255;
		s11 = s12 = s13 = s14 = s15 = 0;
	}

	else if (cnd == 2)
	{
		s11 = s12 = s13 = s14 = s15 = 255;
		s12 = s17 = 0;
	}

	else if (cnd == 3)
	{
		s11 = s12 = s13 = s14 = s15 = s17 = 255;
		s11 = s12 = 0;
	}

	else if (cnd == 4)
	{
		s11 = s12 = s13 = s14 = s15 = s17 = 255;
		s11 = s13 = s15 = 0;
	}

	else if (cnd == 5)
	{
		s11 = s12 = s13 = s14 = s15 = s17 = 255;
		s11 = s16 = 0;
	}

	else if (cnd == 6)
	{
		s11 = s12 = s13 = s14 = s15 = s16 = s17 = 255;
		s16 = 0;
	}

	else if (cnd == 7)
	{
		s11 = s12 = s13 = s14 = s15 = s16 = s17 = 255;
		s11 = s12 = s14 = s15 = 0;
	}

	else if (cnd == 8)
	{

		s11 = s12 = s13 = s14 = s15 = s16 = s17 = 255;

	}

	else if (cnd == 9)
	{

		s11 = s12 = s13 = s14 = s15 = s16 = s17 = 255;

		s11 = s15 = 0;
	}


	cnd++;

	if (cnd == 10)
	{
		cnd = 0;
	}
}


void sec_change() //second's left digit change code
{
	if (cnd2 == 0)
	{
		s21 = s22 = s23 = s24 = s25 = s26=s27=255;
		s24 = 0;
	}

	else if (cnd2 == 1)
	{
		s24 = 255;
		s21 = s22 = s23 = s24 = s25 = 0;
	}

	else if (cnd2 == 2)
	{
		s21 = s22 = s23 = s24 = s25 = 255;
		s22 = s27 = 0;
	}

	else if (cnd2 == 3)
	{
		s21 = s22 = s23 = s24 = s25 = s27 = 255;
		s21 = s22 = 0;
	}

	else if (cnd2 == 4)
	{
		s21 = s22 = s23 = s24 = s25 = s27 = 255;
		s21 = s23 = s25 = 0;
	}

	else if (cnd2 == 5)
	{
		s21 = s22 = s23 = s24 = s25 = s27 = 255;
		s21 = s26 = 0;
	}


	cnd2++;


		if (cnd2 == 6)
		{
			cnd2 = 0;
		}
}


void minchange() //minute's right digit change code
{
	if (min == 0)
	{

		m11 = m12 = m13 = m14 = m15 = m16 = m17 = 255;
		m14 = 0;
	}

	if (min == 1)
	{
		m14 = 255;
		m11 = m12 = m13 = m14 = m15 = 0;
	}

	if (min == 2)
	{
		m11 = m12 = m13 = m14 = m15 = 255;
		m12 = m17 = 0;
	}

	if (min == 3)
	{
		m11 = m12 = m13 = m14 = m15 = m17 = 255;
		m11 = m12 = 0;
	}

	if (min == 4)
	{
		m11 = m12 = m13 = m14 = m15 = m17 = 255;
		m11 = m13 = m15 = 0;
	}

	if (min == 5)
	{
		m11 = m12 = m13 = m14 = m15 = m17 = 255;
		m11 = m16 = 0;
	}

	if (min == 6)
	{
		m11 = m12 = m13 = m14 = m15 = m16 = m17 = 255;
		m16 = 0;
	}

	if (min == 7)
	{
		m11 = m12 = m13 = m14 = m15 = m16 = m17 = 255;
		m11 = m12 = m14 = m15 = 0;
	}

	if (min == 8)
	{
		m11 = m12 = m13 = m14 = m15 = m16 = m17 = 255;
	}


	if (min == 9)
	{
		m11 = m12 = m13 = m14 = m15 = m16 = m17 = 255;
		m11 = 0;
	}


	min++;

	if (min == 10)
	{
		min = 0;
	}
}


void min_change() //minute's left digit change code
{
	if (min2 == 0)
	{
		m21 = m22 = m23 = m24 = m25 = m26 = m27 = 255;
		m24 = 0;
	}

	if (min2 == 1)
	{
		m24 = 255;
		m21 = m22 = m23 = m24 = m25 = 0;
	}

	if (min2 == 2)
	{
		m21 = m22 = m23 = m24 = m25 = 255;
		m22 = m27 = 0;
	}

	if (min2 == 3)
	{
		m21 = m22 = m23 = m24 = m25 = m27 = 255;
		m21 = m22 = 0;
	}

	if (min2 == 4)
	{
		m21 = m22 = m23 = m24 = m25 = m27 = 255;
		m21 = m23 = m25 = 0;
	}

	if (min2 == 5)
	{
		m21 = m22 = m23 = m24 = m25 = m27 = 255;
		m21 = m26 = 0;
	}


	min2++;

		if (min2 == 6)
		{
			min2 = 0;
		}
}

void hourchange() //hour's right digit change code
{
	if (hour == 0)
	{
		h11 = h12 = h13 = h14 = h15 = h16=h17= 255;
		h14 = 0;
	}

	if (hour == 1)
	{
		h14 = 255;
		h11 = h12 = h13 = h14 = h15 = 0;
	}

	if (hour == 2)
	{
		h11 = h12 = h13 = h14 = h15 = 255;
		h12 = h17 = 0;
	}

	if (hour == 3)
	{
		h11 = h12 = h13 = h14 = h15 = h17 = 255;
		h11 = h12 = 0;
	}

	if (hour == 4)
	{
		h11 = h12 = h13 = h14 = h15 = h17 = 255;
		h11 = h13 = h15 = 0;
	}

	if (hour == 5)
	{
		h11 = h12 = h13 = h14 = h15 = h17 = 255;
		h11 = h16 = 0;
	}

	if (hour == 6)
	{
		h11 = h12 = h13 = h14 = h15 = h16 = h17 = 255;
		h16 = 0;
	}

	if (hour == 7)
	{
		h11 = h12 = h13 = h14 = h15 = h16 = h17 = 255;
		h11 = h12 = h14 = h15 = 0;
	}

	if (hour == 8)
	{

		h11 = h12 = h13 = h14 = h15 = h16 = h17 = 255;
	}

	if (hour == 9)
	{
		h11 = 0;
	}


	hour++;

	if (hour == 10)
	{
		hour = 0;
	}
}



int main()
{


	cin >> srt;

	if (srt == 's')
	{

		iSetTimer(1000, secchange);
		iSetTimer(10000, sec_change);
		iSetTimer(60000, minchange);
		iSetTimer(600000, min_change);
		iSetTimer(3600000, hourchange);

	}

	///srand((unsigned)time(NULL));
	iInitialize(2000, 1000, "Stop Watch");
	///updated see the documentations

	return 0;
}
