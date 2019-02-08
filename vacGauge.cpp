/*
  vacGuage.cpp - Library for vacuum gauge.
  Created by Liudingxin, February 7, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "vacGauge.h"

void vacGauge::setGauge(int ina) {
	this->_inAnalog = ina;
}

float vacGauge::read() {
	int sensorRead = analogRead(_inAnalog);
	float U = (float)sensorRead / 1024 * 5;  //CCG 0.5 ~1.7V; Pirani gauge 1.7 ~ 4.5V 
	float exponent = 2.5*U - 6.25;
	float vacValue = pow(10, exponent);
	return vacValue;
}