# STM32 HAL libraries/programs (Nucleo board STM32-l476rg)
ledIntensity - interrupt-driven code 
• the ability to change the period of the 
sawtooth by pressing the blue button. By default, a 
period of 10 seconds is used.
• If the user presses the blue button during a given 
time, the sawtooth period is changed to 
that time tp. 
• If the user presses the button twice, in a “short” 
period (1 second), the system resets and the period 
returns to its default value (10 seconds).
• Everytime the period is changed, its new value 
is sent through the serial port.
