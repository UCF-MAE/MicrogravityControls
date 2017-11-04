// THIS CODE DOES NOT WORK
#include <msp430.h> 
#include <msp430g2553.h>

void main(void)
{
        WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer

        P1DIR |= BIT6;                          // Set P1.6 (LED) to output direction
        P1OUT &= ~BIT6;                         // Set the LED off

        int status = 0;

        P2SEL &= (~BIT1); // Set P2.1 SEL as GPIO
        P2DIR &= (~BIT1); // Set P2.1 SEL as Input
        P2IES |= (BIT1); // Falling Edge 1 -> 0
        P2IFG &= (~BIT1); // Clear interrupt flag for P2.1

        while( 1 ) {
            if(P2IFG & BIT1){
                P1OUT |= BIT6;          // Set LED on when button down
                //_delay_cycles(100000);
            }else{
                P1OUT &= ~BIT6;         // Set LED off when button off
                //_delay_cycles(100000);
            }
            //P1OUT |= BIT6;
            //_delay_cycles(100000);
            //P1OUT &= ~BIT6;
            //_delay_cycles(100000);
        }
}
