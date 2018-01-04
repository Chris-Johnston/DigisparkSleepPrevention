// https://github.com/Chris-Johnston/DigisparkSleepPrevention

// wiggles the mouse every few seconds 
// to prevent the mouse 
// from going to sleep
// useful when something has to run on the computer
// and the computer must stay on

#define WAIT_TIME 15000

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  for(int i = 0; i < 50; i++)
  {
    DigiMouse.moveX(5);
    DigiMouse.moveY(5);

    DigiMouse.delay(3);
  }

  for(int i = 0; i < 50; i++)
  {
    DigiMouse.moveX(-5);
    DigiMouse.moveY(-5);

    DigiMouse.delay(3);
  }
  // wait the longer interval
  DigiMouse.delay(WAIT_TIME);
}
