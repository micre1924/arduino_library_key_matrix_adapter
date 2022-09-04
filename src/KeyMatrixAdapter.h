/*
 Name:		smy_keymatrix_adapter.h
 Created:	2/6/2021 10:40:40 AM
 Author:	GPD
 Editor:	http://www.visualmicro.com
*/

#ifndef _smy_keymatrix_adapter_h
#define _smy_keymatrix_adapter_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class KeyMatrixAdapter {
public:
	bool KeyPressed;
	uint8_t
		RowPins[100],
		ColPins[100],
		KeysInRow,
		KeysInCol;
	char KeyLayout[100][100];
	//If Key is Pressed KeyPressed is true
	char GetCharFromKey();
	void SetRowPinsLow();
};
