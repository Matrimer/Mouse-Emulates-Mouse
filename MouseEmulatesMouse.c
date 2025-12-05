#include <stdio.h>
#include <stdlib.h>
#include <xdo.h>
#include <unistd.h>

#include <EmulateMouse.c>

int main()
{
  int xOrig, yOrig, x, y, screen = 0;
  int vDeadzone, hDeadzone;
  const xdo_t xdo;
  // if RMB pressed
    // int xdo_get_mouse_location(const xdo_t *xdo, int *xOrig, int *yOrig, *screen_num);
    for (xdo_get_mouse_location(const xdo_t *xdo, *xOrig, *yOrig, *screen), RMB NOT RELEASED, xdo_get_mouse_location(*xdo, x, y, null))
    {
      if (xOrig - x < vDeadzone)
        // Mouse down
      else if (xOrigin - x > vDeadzoone)
        // Mouse up

      if (yOrig - y < hDeadzone)
        // Mouse left
      else if (yOrig - y > hDeadzone)
        // Mouse right
    }
  

  int xdo_move_mouse(*xdo, xOrig, yOrig, screen);
  return 0;
}
