/*
 * MainMenu.h
 *
 * Created: 07/11/2014 1:19:48
 *  Author: HAL
 */ 


#ifndef WINCONTROLLERMENU_H_
#define WINCONTROLLERMENU_H_

#include "Window.h"

/*
	//3-Controller Settings
	*/

const int nControllerButtons = 8;
static char* controllerButtonText[nControllerButtons] = {
	"Time & Date",
	"Sensor Polling",
	"SD Card",
	"Sound:",
	"Serial Debugging:"
};
static int controllerButtons[nControllerButtons];


class WinControllerMenu: public Window {
	public:
		WinControllerMenu(UTFT *lcd, UTouch *touch);
		WinControllerMenu(const WinControllerMenu &other);
		WinControllerMenu& operator=(const WinControllerMenu &other);
		virtual ~WinControllerMenu();
		void draw();
		void update();
		int processTouch(int x, int y);
	
	protected:
		void print();
};



#endif