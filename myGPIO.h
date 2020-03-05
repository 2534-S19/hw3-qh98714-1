/*
 * myGPIO.h
 *
 *  Created on:
 *      Author:HAO QIAN
 *
 */

#ifndef MYGPIO_H_
#define MYGPIO_H_

// This function initializes the peripherals used in the program.
void initGPIO();
// This function returns the value of Launchpad S1.
unsigned char checkStatus_LaunchpadS1();
// This function returns the value of Launchpad S2.
unsigned char checkStatus_LaunchpadS2();
// This function returns the value of Boosterpack S1.
unsigned char checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
unsigned char checkStatus_BoosterpackS2();
// This function turns on Launchpad LED1.
void turnOn_LaunchpadLED1();
// This function turns off Launchpad LED1.
void turnOff_LaunchpadLED1();
// This function turns on Launchpad Red LED2.
void turnOn_LaunchpadLED2Red();
// This function turns off Launchpad Red LED2.
void turnOff_LaunchpadLED2Red();
// This function turns on Launchpad Blue LED2.
void turnOn_LaunchpadLED2Blue();
// This function turns off Launchpad Blue LED2.
void turnOff_LaunchpadLED2Blue();
// This function turns on Launchpad Green LED2.
void turnOn_LaunchpadLED2Green();
// This function turns off Launchpad Green LED2.
void turnOff_LaunchpadLED2Green();
// This function turns on Boosterpack Red LED.
void turnOn_BoosterpackLEDRed();
// This function turns off Boosterpack Red LED.
void turnOff_BoosterpackLEDRed();
// This function turns on Boosterpack Green LED.
void turnOn_BoosterpackLEDGreen();
// This function turns off Boosterpack Green LED.
void turnOff_BoosterpackLEDGreen();
// This function turns on Boosterpack Blue LED.
void turnOn_BoosterpackLEDBlue();
// This function turns off Boosterpack Blue LED.
void turnOff_BoosterpackLEDBlue();

// TODO: Define any constants that are local to myGPIO.c using #define
#define BUFFER_SIZE 5

// When a button is pressed, it is grounded (logic 0)
#define PRESSED 0

// The bitmask for left Launchpad Board button, also known as Button1 or Launchpad S1
#define L1 BIT1    // P1.1
#define L2 BIT4     //P1.4

#define LEFT_LED BIT0       // P1.0
#define S1 BIT1       //P5.1
#define S2 BIT5   //P3.5

// LED2
#define LED2_RED BIT0   //P2.0
#define LED2_GREEN BIT1 //P2.1
#define LED2_BLUE BIT2  //P2.2

//BOOSTER LED
#define BOOSTER_RED BIT6  //P2.6
#define BOOSTER_GREEN BIT4//P2.4
#define BOOSTER_BLUE BIT6 //P5.6

#endif /* MYGPIO_H_ */

