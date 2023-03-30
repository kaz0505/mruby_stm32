#include <mbed.h>

DigitalOut myled(LED1);

int main() {

  // put your setup code here, to run once:

  while(1) {
    myled = 1;
    HAL_Delay(100);
    myled = 0;
    HAL_Delay(900);
  }
}