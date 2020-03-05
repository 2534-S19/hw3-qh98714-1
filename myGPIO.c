/*
 * GPIO.c
 *
 *  Created on:
 *      Author:HAO QIAN
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    P1DIR |= LEFT_LED;
    P2DIR |= LED2_RED;
    P2DIR |= LED2_GREEN;
    P2DIR |= LED2_BLUE;
    P2DIR |= BOOSTER_RED;
    P2DIR |= BOOSTER_GREEN;
    P5DIR |= BOOSTER_BLUE;


    P1DIR &= ~L1;
    P1DIR &= ~L2;
    P5DIR &= ~S1;
    P3DIR &= ~S2;

    P1REN |= L1;
    P1REN |= L2;
    P5REN |= S1;
    P3REN |= S2;

    P1OUT |= L1;
    P1OUT |= L2;
    P5OUT |= S1;
    P3OUT |= S2;
    // Launchpad S1

    // Launchpad S2

    // Boosterpack S1

    // Boosterpack S2

    // Launchpad LED1

    // Launchpad LED2 Red

    // Launchpad LED2 Green

    // Launchpad LED2 Blue

    // Boosterpack LED Red

    // Boosterpack LED Green

    // Boosterpack LED Blue


    // Turn off all LEDs at the start.
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    return ((P5REN & S1 BIT1) == S1 BIT1)
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return ((P3REN & S2 BIT5) == S2 BIT5)
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return ((P1REN & L1 BIT1) == L1 BIT1)
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return ((P1REN & S2 BIT4) == S2 BIT4)
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1DIR = P1DIR |  L1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1DIR = P1DIR &  ~L1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P1DIR = P1DIR |  L2;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P1DIR = P1DIR &  ~L2;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2DIR = P2DIR |  L1;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2DIR = P2DIR &  ~L1;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2DIR = P2DIR | L1;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2DIR = P2DIR &  ~L1;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2DIR = P2DIR | L1;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2DIR = P2DIR &  ~L1;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2DIR = P2DIR | L2;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2DIR = P2DIR &  ~L2;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5DIR = P5DIR | L1;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5DIR = P5DIR &  ~L1;
}
