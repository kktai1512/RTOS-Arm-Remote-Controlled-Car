#include "basicConfig.h"
#define MASK(x) (1 << (x))

#define ECHO_IN 1 // PortA Pin 1
#define TRIG_OUT 4 // PortD Pin 4
#define ECHO_IN2 2 // PortA Pin 2
#define TRIG_OUT2 5 // PortD Pin 5


#define SPEED_OF_SOUND 343000.0 // 343 m/s
#define PRESCALER 16

#define uS(x)									(48 * x)
#define mS(x)									(48000 * x)

void initTimer(void);
void resetTimer(void);
void initUltrasonic(void); 
void pulse(void);
void TPM2_IRQHandler(void);
void initUltrasonic2(void);
void disableUltrasonic(void);
void pulse2(void);
void initTimer2(void);
