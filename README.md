# ClusterOverSPIforPi
This is a cluster set up for RaspberryPi 3 A+ over Serial Peripheral Interface


## Pinout setup

| Singal | Master Pi Pin | Slave 1 | Connection Type |
| ------ | --------------| ------- | --------------- |
| SCLK   | Pin 11        | Pin 11. | Shared          |
| MOSI   | Pin 13        | Pin 13. | Shared          |
| MISO           | Pin 15        | Pin 15  | Shared          |
| Select Slave 1 | Pin 29        | Pin 7   | Direct          |
| GND            | Pin 6         | Pin 6   | Shared          |
