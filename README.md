# ClusterOverSPIforPi
This is a cluster set up for RaspberryPi 3 A+ over Serial Peripheral Interface

## Pi pinout

| Function       | Pin |   | Pin | Function       |
| -------------- | --- | - | --- | -------------- |
| 3V3            |   1 |   |   2 | 5V             |
| GPIO 2         |   3 |   |   4 | 5V             |
| GPIO 3         |   5 |   |   6 | GND            |
| GPIO 4         |   7 |   |   8 | GPIO 14        |
| GND            |   9 |   |  10 | GPIO 15        |
| GPIO 17        |  11 |   |  12 | GPIO 18        |
| GPIO 27        |  13 |   |  14 | GND            |
| GPIO 22        |  15 |   |  16 | GPIO 23        |
| 3V3            |  17 |   |  18 | GPIO 24        |
| **MSOI**       |  19 |   |  20 | GND            |
| **MISO**       |  21 |   |  22 | GPIO 25        |
| **SCLK**       |  23 |   |  24 | GPIO 8         |
| **GND**        |  25 |   |  26 | GPIO 7         |
| **DD NOT USE** |  27 |   |  28 | **DO NOT USE** |
| GPIO 5         |  29 |   |  30 | GND            |
| GPIO 6         |  31 |   |  32 | GPIO 12        |
| GPIO 13        |  33 |   |  34 | GND            |
| GPIO 19        |  35 |   |  36 | GPIO 16        |
| GPIO 26        |  37 |   |  38 | GPIO 20        |
| GND            |  39 |   |  40 | GPIO 21        |

## Pinout setup

| Singal | Master Pi Pin | Slave 1 | Connection Type |
| ------ | --------------| ------- | --------------- |
| SCLK   | Pin 23        | Pin 23 | Shared          |
| MOSI   | Pin 19        | Pin 19 | Shared          |
| MISO           | Pin 21        | Pin 21  | Shared          |
| Select Slave 1 | Pin 29        | Pin 29    | Direct          |
| GND            | Pin 25         | Pin 25   | Shared          |

## Master Pi pinout

| Location      | Function       | Pin |   | Pin | Function       | Location |
| ------------- | -------------- | --- | - | --- | -------------- | -------- |
| Empty         | 3V3            |   1 |   |   2 | 5V             | Empty    |
| Empty         | GPIO 2         |   3 |   |   4 | 5V             | Empty    |
| Empty         | GPIO 3         |   5 |   |   6 | GND            | Empty    |
| Empty         | GPIO 4         |   7 |   |   8 | GPIO 14        | Empty    |
| Empty         | GND            |   9 |   |  10 | GPIO 15        | Empty    |
| Empty         | GPIO 17        |  11 |   |  12 | GPIO 18        | Empty    |
| Empty         | GPIO 27        |  13 |   |  14 | GND            | Empty    |
| Empty         | GPIO 22        |  15 |   |  16 | GPIO 23        | Empty    |
| Empty         | 3V3            |  17 |   |  18 | GPIO 24        | Empty    |
| To all slaves | **MSOI**       |  19 |   |  20 | GND            | Empty    |
| To all slaves | **MISO**       |  21 |   |  22 | GPIO 25        | Empty    |
| To all slaves | **SCLK**       |  23 |   |  24 | GPIO 8         | Empty    |
| To all slaves | **GND**        |  25 |   |  26 | GPIO 7         | Empty    |
| Empty         | **DD NOT USE** |  27 |   |  28 | **DO NOT USE** | Empty    |
| To Slave 1    | **GPIO 5**     |  29 |   |  30 | GND            | Empty    |
| Empty         | GPIO 6         |  31 |   |  32 | GPIO 12        | Empty    |
| Empty         | GPIO 13        |  33 |   |  34 | GND            | Empty    |
| Empty         | GPIO 19        |  35 |   |  36 | GPIO 16        | Empty    |
| Empty         | GPIO 26        |  37 |   |  38 | GPIO 20        | Empty    |
| Empty         | GND            |  39 |   |  40 | GPIO 21        | Empty    |

## Slave 1 Pi pinout

| Location      | Function       | Pin |   | Pin | Function       | Location |
| ------------- | -------------- | --- | - | --- | -------------- | -------- |
| Empty         | 3V3            |   1 |   |   2 | 5V             | Empty    |
| Empty         | GPIO 2         |   3 |   |   4 | 5V             | Empty    |
| Empty         | GPIO 3         |   5 |   |   6 | GND            | Empty    |
| Empty         | GPIO 4         |   7 |   |   8 | GPIO 14        | Empty    |
| Empty         | GND            |   9 |   |  10 | GPIO 15        | Empty    |
| Empty         | GPIO 17        |  11 |   |  12 | GPIO 18        | Empty    |
| Empty         | GPIO 27        |  13 |   |  14 | GND            | Empty    |
| Empty         | GPIO 22        |  15 |   |  16 | GPIO 23        | Empty    |
| Empty         | 3V3            |  17 |   |  18 | GPIO 24        | Empty    |
| To all nodes  | **MSOI**       |  19 |   |  20 | GND            | Empty    |
| To all nodes  | **MISO**       |  21 |   |  22 | GPIO 25        | Empty    |
| To all nodes  | **SCLK**       |  23 |   |  24 | GPIO 8         | Empty    |
| To all nodes  | **GND**        |  25 |   |  26 | GPIO 7         | Empty    |
| Empty         | **DD NOT USE** |  27 |   |  28 | **DO NOT USE** | Empty    |
| To Master     | **GPIO 5**     |  29 |   |  30 | GND            | Empty    |
| Empty         | GPIO 6         |  31 |   |  32 | GPIO 12        | Empty    |
| Empty         | GPIO 13        |  33 |   |  34 | GND            | Empty    |
| Empty         | GPIO 19        |  35 |   |  36 | GPIO 16        | Empty    |
| Empty         | GPIO 26        |  37 |   |  38 | GPIO 20        | Empty    |
| Empty         | GND            |  39 |   |  40 | GPIO 21        | Empty    |
