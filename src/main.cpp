#include <mbed.h>

DigitalOut myled(LED1);

int main() {

  // put your setup code here, to run once:

  while(1) {
    myled = 1;
    HAL_Delay(50);
    myled = 0;
    HAL_Delay(50);
  }
}