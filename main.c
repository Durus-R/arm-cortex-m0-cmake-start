//
// Created by infohoschie on 09.12.24.
//

#include "devices/random.h"
#include "devices/uart.h"

#include <stdbool.h>
#include <string.h>


int main( void )
{
  //waitRelease();

  // Initialize the Module
  rng_init();

  uart_init();
  for (int i=0; i< strlen("Hello World!"); i++) {
    uart_writeByte("Hello World"[i]);
  }
  while ( 1 );
}
