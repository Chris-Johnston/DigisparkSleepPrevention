// https://github.com/Chris-Johnston/DigisparkSleepPrevention

// wiggles the mouse every minute to prevent the mouse 
// from going to sleep
// useful when something has to run on the computer
// and the computer must stay on

// one minute
#define WAIT_TIME (60 * 1000)

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  // move the mouse a bit
  DigiMouse.moveX(50);
  DigiMouse.moveY(50);

  DigiMouse.delay(100);

  // move it back
  DigiMouse.moveX(-50);
  DigiMouse.moveY(-50);

  // wait the longer interval
  DigiMouse.delay(WAIT_TIME);
}
