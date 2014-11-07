/*
 * MainMenu.cpp
 *
 * Created: 07/11/2014 1:20:03
 *  Author: HAL
 */ 
#include "WinSD.h"

WinSD::WinSD(UTFT *lcd, UTouch *touch) : Window(lcd,touch) { }

WinSD::WinSD(const WinSD &other) : Window(other) { }
	
WinSD& WinSD::operator=(const WinSD& other) {
	_lcd = other._lcd;
	_touch = other._touch;
	return *this;
}

/*
//Draws main menu into LCD
//_actScreen == 1
void GUI::drawMainMenu() {
	_actScreen = 1;
	_lcd->fillScr(VGA_WHITE);
	_buttons.deleteAllButtons();
	printMenuHeader("- Main Menu -");
	printFlowButtons(false,false,true,mainMenuButtons);
	printMainMenu();
	_buttons.drawButtons();
}
*/