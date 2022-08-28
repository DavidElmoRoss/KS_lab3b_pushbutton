/*
Title:      Program to toggle RED LED ON/OFF using RIGHT Pushbutton
Author:     Dave Ross
Date:       Aug 27th, 2022
Description:    This program will cause the RED Led to toggle
                (switch) On and Off every time the RIGHT push
                button is pressed. It will use the XOR logic
                function to do this.
*/

#include "mbed.h"

// Hardware Definitions
DigitalOut RED(LED1);           // Label Red is associated with RED LED Pin
DigitalIn right_pb(SW2);        // Label right_pb is associated with the Right PB pin

#include "mbed.h"               // include the mbed library

// main() runs in its own thread in the OS
int main()
{
    RED=1;                              // turn OFF RED led
    for(;;)                             // endless loop
    {
        if(right_pb==0)                 // If right pb is pressed
        {
            RED=!RED;                   // toggle RED LED
            while(right_pb^1==1);       // wait till right pb is released
        }
    }
}

