/*
  vacGuage.h - Library for vacuum gauge.
  Created by Liudingxin, February 7, 2019.
  Released into the public domain.
*/

#ifndef vacGauge_h
#define vacGauge_h

#include "Arduino.h"

class vacGauge {
private:
	int _inAnalog;

public:
	void setGauge(int);
	float read();
};

#endif