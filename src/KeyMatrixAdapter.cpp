/*
 Name:		smy_keymatrix_adapter.cpp
 Created:	2/6/2021 10:40:40 AM
 Author:	GPD
 Editor:	http://www.visualmicro.com
*/

#include "KeyMatrixAdapter.h"

char KeyMatrixAdapter::GetCharFromKey()
{
	KeyPressed = false;
	for (int r = 0; r < KeysInCol; r++) {
		SetRowPinsLow();
		digitalWrite(RowPins[r], 1);
		for (int c = 0; c < KeysInRow; c++) {
			if (digitalRead(ColPins[c])) {
				KeyPressed = true;
				SetRowPinsLow();
				return KeyLayout[r][c];
			}
		}
	}
	SetRowPinsLow();
	return '|';
}
void KeyMatrixAdapter::SetRowPinsLow()
{
	for (int r = 0; r < KeysInCol; r++) {
		digitalWrite(RowPins[r], 0);
	}
}
