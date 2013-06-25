#include <CapacitiveSensorDue.h>

/*
 * Prototyping Interfaces Capacitive Cover Patch.
 * Based on:
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger
 * resistor values yield larger sensor values.
 * For the Prottypinf Interfaces Capacitive Cover a 20M resistor is a good starting value.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this
 * pin.
 * Links:
 * http://playground.arduino.cc//Main/CapacitiveSensor?from=Main.CapSense
 * https://github.com/arduino-libraries/CapacitiveSensor
 */

CapacitiveSensorDue cs_4_2 = CapacitiveSensorDue(4,2);	// Start testing with approximately 20M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup()					
{
	Serial.begin(9600);
}

void loop()					
{
	unsigned long start = millis();         // Set Variable to unsigned long to avoid overflow
	unsigned long total1 = cs_4_2.read(30); // Set Variable to unsigned long to avoid overflow
	
	//Serial.print(millis() - start);	// check on performance in milliseconds
	//Serial.print(",");			// tab character for debug windown spacing
	Serial.println(total1);			// print sensor output 1
	
	delay(10);				// arbitrary delay to limit data to serial port
}
