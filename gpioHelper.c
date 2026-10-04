/******************************************************************************************
 *
 * Function Name: gpioHelper.c
 * 
 * Author Name:   E. Tucker
 *
 * Description:
 *
 * Change Log:
 *
 ****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "gpioHelper.h"

void gpioExport( int pin ) {

  int fd = open( "/sys/class/gpio/export", O_WRONLY);

  if ( fd >= 0 ) {
      dprintf( fd, "%d, pin );
      close( fd );
  }

}

void gpioDirection( int pin, const char* dir ) {

  char path[64];

  snprintf( path, sizeof( path ),
            "/sys/class/gpio/gpio%d/direction", pin );

  int fd = open( path, O_WRONLY );

  if ( fd >= 0 ) {

    write( fd, dir, dir[0] == 'i' ? 2 : 3);
    close( fd );

  }
}
