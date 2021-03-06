EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:custom
LIBS:kinesis-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "13 nov 2014"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L C C4
U 1 1 545804FB
P 2850 4250
F 0 "C4" H 2850 4350 40  0000 L CNN
F 1 "1uF" H 2856 4165 40  0000 L CNN
F 2 "~" H 2888 4100 30  0000 C CNN
F 3 "~" H 2850 4250 60  0000 C CNN
	1    2850 4250
	-1   0    0    1   
$EndComp
$Comp
L R R3
U 1 1 545805E8
P 2500 4000
F 0 "R3" V 2580 4000 40  0000 C CNN
F 1 "22" V 2507 4001 40  0000 C CNN
F 2 "~" V 2430 4000 30  0000 C CNN
F 3 "~" H 2500 4000 30  0000 C CNN
	1    2500 4000
	0    -1   -1   0   
$EndComp
$Comp
L R R2
U 1 1 545805FA
P 2500 3800
F 0 "R2" V 2580 3800 40  0000 C CNN
F 1 "22" V 2507 3801 40  0000 C CNN
F 2 "~" V 2430 3800 30  0000 C CNN
F 3 "~" H 2500 3800 30  0000 C CNN
	1    2500 3800
	0    -1   -1   0   
$EndComp
Entry Wire Line
	6450 2450 6550 2550
Entry Wire Line
	6450 2550 6550 2650
Entry Wire Line
	6450 2650 6550 2750
Entry Wire Line
	6450 2750 6550 2850
Entry Wire Line
	6450 2950 6550 3050
Entry Wire Line
	6450 3050 6550 3150
Entry Wire Line
	6450 2850 6550 2950
Entry Wire Line
	6450 3150 6550 3250
Wire Wire Line
	10250 1800 10750 1800
Entry Wire Line
	10750 1800 10850 1900
Entry Wire Line
	10750 1900 10850 2000
Entry Wire Line
	10750 2000 10850 2100
Entry Wire Line
	10750 2800 10850 2900
Entry Wire Line
	10750 2900 10850 3000
Entry Wire Line
	10750 3000 10850 3100
Entry Wire Line
	10750 3100 10850 3200
Entry Wire Line
	10750 3200 10850 3300
Entry Wire Line
	10750 3300 10850 3400
$Comp
L AT90S8515-P IC2
U 1 1 545A62EA
P 9250 3500
F 0 "IC2" H 8400 5380 40  0000 L BNN
F 1 "AT90S8515-P" H 9700 1550 40  0000 L BNN
F 2 "DIL40" H 9250 3500 30  0000 C CIN
F 3 "" H 9250 3500 60  0000 C CNN
	1    9250 3500
	1    0    0    -1  
$EndComp
NoConn ~ 10250 2650
Entry Wire Line
	10750 3650 10850 3750
Entry Wire Line
	10750 3750 10850 3850
Entry Wire Line
	10750 3850 10850 3950
Entry Wire Line
	10750 3950 10850 4050
Entry Wire Line
	10750 4050 10850 4150
Entry Wire Line
	10750 4150 10850 4250
Entry Wire Line
	10750 4350 10850 4450
Entry Wire Line
	10750 4250 10850 4350
NoConn ~ 8250 4900
NoConn ~ 8250 5000
NoConn ~ 8250 1800
Wire Wire Line
	10250 1900 10750 1900
Wire Wire Line
	10250 2000 10750 2000
Wire Wire Line
	10250 2100 10750 2100
Wire Wire Line
	10250 2200 10750 2200
Wire Wire Line
	10250 2300 10750 2300
Wire Wire Line
	10250 2400 10750 2400
Wire Wire Line
	10250 2500 10750 2500
Text Label 10350 1800 0    60   ~ 0
A
Text Label 10350 1900 0    60   ~ 0
B
Text Label 10350 2000 0    60   ~ 0
C
Text Label 10350 2100 0    60   ~ 0
G
Wire Wire Line
	10250 2800 10750 2800
Wire Wire Line
	10250 2900 10750 2900
Wire Wire Line
	10250 3000 10750 3000
Wire Wire Line
	10250 3100 10750 3100
Wire Wire Line
	10250 3200 10750 3200
Wire Wire Line
	10250 3300 10750 3300
Wire Wire Line
	10250 3400 10750 3400
Wire Wire Line
	10250 3500 10750 3500
Text Label 10350 2800 0    60   ~ 0
DL2
Text Label 10350 2900 0    60   ~ 0
DR1
Text Label 10350 3000 0    60   ~ 0
DR2
Text Label 10350 3100 0    60   ~ 0
DL1
Text Label 10350 3400 0    60   ~ 0
SCL
Text Label 10350 3500 0    60   ~ 0
SDA
Wire Wire Line
	10250 3650 10750 3650
Wire Wire Line
	10250 3750 10750 3750
Wire Wire Line
	10250 3850 10750 3850
Wire Wire Line
	10250 3950 10750 3950
Wire Wire Line
	10250 4050 10750 4050
Wire Wire Line
	10250 4150 10750 4150
Wire Wire Line
	10250 4250 10750 4250
Wire Wire Line
	10250 4350 10750 4350
Text Label 10350 3650 0    60   ~ 0
R1
Text Label 10350 3750 0    60   ~ 0
R2
Text Label 10350 3850 0    60   ~ 0
R3
Text Label 10350 3950 0    60   ~ 0
R4
Text Label 10350 4050 0    60   ~ 0
R5
Text Label 10350 4150 0    60   ~ 0
R6
Text Label 10350 4250 0    60   ~ 0
R7
Text Label 10350 4350 0    60   ~ 0
R8
Wire Wire Line
	10250 4500 10750 4500
Wire Wire Line
	10250 4600 10750 4600
Wire Wire Line
	10250 4700 10750 4700
Wire Wire Line
	10250 4800 10750 4800
Wire Wire Line
	10250 4900 10750 4900
Wire Wire Line
	10250 5000 10750 5000
Wire Wire Line
	10250 5100 10750 5100
Wire Wire Line
	10250 5200 10750 5200
Text Label 10350 4600 0    60   ~ 0
FS1
Text Label 10350 5000 0    60   ~ 0
FS3
Text Label 10350 5200 0    60   ~ 0
FS2
$Comp
L GND #PWR01
U 1 1 545A7377
P 9250 5600
F 0 "#PWR01" H 9250 5600 30  0001 C CNN
F 1 "GND" H 9250 5530 30  0001 C CNN
F 2 "" H 9250 5600 60  0000 C CNN
F 3 "" H 9250 5600 60  0000 C CNN
	1    9250 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 5500 9250 5600
Text Label 10350 4700 0    60   ~ 0
CLOCK
Text Label 10350 4800 0    60   ~ 0
DATA
NoConn ~ 10750 4700
NoConn ~ 10750 4800
Text Label 10350 3200 0    60   ~ 0
KP
Text Label 10350 3300 0    60   ~ 0
PGM
Text Label 10350 2500 0    60   ~ 0
BUZZ
NoConn ~ 8250 2300
NoConn ~ 8250 2700
$Comp
L GND #PWR02
U 1 1 545A7565
P 4750 5700
F 0 "#PWR02" H 4750 5700 30  0001 C CNN
F 1 "GND" H 4750 5630 30  0001 C CNN
F 2 "" H 4750 5700 60  0000 C CNN
F 3 "" H 4750 5700 60  0000 C CNN
	1    4750 5700
	1    0    0    -1  
$EndComp
Entry Wire Line
	6450 3650 6550 3750
Entry Wire Line
	6450 3750 6550 3850
Entry Wire Line
	6450 4150 6550 4250
Entry Wire Line
	6450 4250 6550 4350
Entry Wire Line
	6450 4050 6550 4150
Entry Wire Line
	6450 4350 6550 4450
NoConn ~ 3750 2850
Wire Wire Line
	1200 2000 6450 2000
NoConn ~ 3750 3050
Wire Wire Line
	2750 3800 3750 3800
Wire Wire Line
	2750 3900 3750 3900
Wire Wire Line
	2750 3900 2750 4000
Wire Bus Line
	6550 2100 6550 6050
Wire Bus Line
	10850 1600 10850 6050
Text Label 6050 4350 0    60   ~ 0
DL1
Text Label 6050 4250 0    60   ~ 0
DR2
Text Label 6050 4150 0    60   ~ 0
DR1
Text Label 6050 4050 0    60   ~ 0
DL2
Text Label 6050 2450 0    60   ~ 0
R1
Text Label 6050 2550 0    60   ~ 0
R2
Text Label 6050 2650 0    60   ~ 0
R3
Text Label 6050 2750 0    60   ~ 0
R4
Text Label 6050 2850 0    60   ~ 0
R5
Text Label 6050 2950 0    60   ~ 0
R6
Text Label 6050 3050 0    60   ~ 0
R7
Text Label 6050 3150 0    60   ~ 0
R8
Text Label 6050 5050 0    60   ~ 0
A
Text Label 6050 5150 0    60   ~ 0
B
Text Label 6050 5250 0    60   ~ 0
C
Text Label 6050 5350 0    60   ~ 0
G
Text Label 1300 3800 0    60   ~ 0
D+
Text Label 1300 4000 0    60   ~ 0
D-
NoConn ~ 10750 2200
NoConn ~ 10750 2300
NoConn ~ 10750 2400
Text Label 10350 4500 0    60   ~ 0
GND
NoConn ~ 10750 4900
NoConn ~ 10750 5100
Text Label 6050 3450 0    60   ~ 0
KP
Text Label 6050 3350 0    60   ~ 0
PGM
$Comp
L ATMEGA32U4-A U1
U 1 1 5462E0B1
P 4900 4000
F 0 "U1" H 3950 5700 40  0000 C CNN
F 1 "ATMEGA32U4-A" H 5600 2500 40  0000 C CNN
F 2 "TQFP44" H 4900 4000 35  0000 C CIN
F 3 "" H 6000 5100 60  0000 C CNN
	1    4900 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 4850 3750 5600
Wire Wire Line
	4450 2200 5150 2200
Connection ~ 4700 2200
Connection ~ 4800 2200
Connection ~ 5050 2200
Connection ~ 4800 2000
Wire Wire Line
	6000 2450 6450 2450
Wire Wire Line
	6000 2550 6450 2550
Wire Wire Line
	6000 2650 6450 2650
Wire Wire Line
	6000 2750 6450 2750
Wire Wire Line
	6000 2850 6450 2850
Wire Wire Line
	6000 2950 6450 2950
Wire Wire Line
	6000 3050 6450 3050
Wire Wire Line
	6000 3150 6450 3150
Wire Wire Line
	6000 5050 6450 5050
Wire Wire Line
	6000 5150 6450 5150
Wire Wire Line
	6000 5250 6450 5250
Wire Wire Line
	6000 4050 6450 4050
Wire Wire Line
	6000 4150 6450 4150
Wire Wire Line
	6000 4250 6450 4250
Wire Wire Line
	6000 4350 6450 4350
Wire Wire Line
	6000 4550 6450 4550
Entry Wire Line
	6450 3350 6550 3450
Entry Wire Line
	6450 3450 6550 3550
Entry Wire Line
	6450 5050 6550 5150
Entry Wire Line
	6450 5150 6550 5250
Entry Wire Line
	6450 5250 6550 5350
Entry Wire Line
	6450 5350 6550 5450
Entry Wire Line
	6450 4650 6550 4750
Wire Wire Line
	6000 3350 6450 3350
Wire Wire Line
	6000 3450 6450 3450
Wire Wire Line
	1200 5600 6450 5600
Connection ~ 4950 5600
Connection ~ 4850 5600
Wire Wire Line
	4750 5600 4750 5700
Connection ~ 4750 5600
Connection ~ 4500 5600
Text Label 6050 4550 0    60   ~ 0
HWB
Wire Wire Line
	6000 5350 6450 5350
Wire Wire Line
	6000 3650 6450 3650
Wire Wire Line
	6000 3750 6450 3750
Text Label 6050 3650 0    60   ~ 0
SCL
Text Label 6050 3750 0    60   ~ 0
SDA
Wire Wire Line
	6000 3850 6450 3850
Wire Wire Line
	6000 3950 6450 3950
Wire Wire Line
	6000 4650 6450 4650
Text Label 6050 4650 0    60   ~ 0
BUZZ
NoConn ~ 10750 4600
NoConn ~ 10750 5000
NoConn ~ 10750 5200
Entry Wire Line
	10750 3400 10850 3500
Entry Wire Line
	10750 3500 10850 3600
Entry Wire Line
	10750 4500 10850 4600
Wire Wire Line
	2850 4050 3750 4050
Text Label 2950 4050 0    60   ~ 0
UCAP
Wire Wire Line
	6000 4850 6450 4850
Wire Wire Line
	6000 4950 6450 4950
NoConn ~ 6450 4850
NoConn ~ 6450 4950
NoConn ~ 6450 4550
$Comp
L USB-MINI-B CON1
U 1 1 546431C1
P 2100 5050
F 0 "CON1" H 1850 5500 60  0000 C CNN
F 1 "USB-MINI-B" H 2050 4550 60  0000 C CNN
F 2 "" H 2100 5050 60  0000 C CNN
F 3 "" H 2100 5050 60  0000 C CNN
	1    2100 5050
	0    1    1    0   
$EndComp
$Comp
L VCC #PWR03
U 1 1 54643698
P 2400 4400
F 0 "#PWR03" H 2400 4500 30  0001 C CNN
F 1 "VCC" H 2400 4500 30  0000 C CNN
F 2 "" H 2400 4400 60  0000 C CNN
F 3 "" H 2400 4400 60  0000 C CNN
	1    2400 4400
	1    0    0    -1  
$EndComp
Text Notes 2600 2750 0    60   ~ 0
Teensy 2.0\n(not fully drawn)
$Comp
L CONN_7 B7K-PH-K-S1
U 1 1 54643939
P 1950 6900
F 0 "B7K-PH-K-S1" V 1920 6900 60  0000 C CNN
F 1 "CONN_7" V 2020 6900 60  0000 C CNN
F 2 "" H 1950 6900 60  0000 C CNN
F 3 "" H 1950 6900 60  0000 C CNN
	1    1950 6900
	1    0    0    -1  
$EndComp
Connection ~ 3750 5600
Connection ~ 2400 5600
Connection ~ 2250 5600
Connection ~ 1950 5600
Wire Wire Line
	2400 4400 2400 4500
Wire Wire Line
	2250 4000 2250 4500
Wire Wire Line
	1200 3800 2250 3800
Wire Wire Line
	2100 3800 2100 4500
Wire Wire Line
	2850 4450 2850 5600
Connection ~ 2850 5600
Entry Wire Line
	1100 6800 1200 6900
Entry Wire Line
	1100 6900 1200 7000
Entry Wire Line
	1100 7000 1200 7100
Entry Wire Line
	1100 6700 1200 6800
Wire Wire Line
	1200 6600 1600 6600
Wire Wire Line
	1200 6700 1600 6700
Wire Wire Line
	1200 6800 1600 6800
Wire Wire Line
	1200 6900 1600 6900
Wire Wire Line
	1200 7000 1600 7000
Wire Wire Line
	1200 7100 1600 7100
Wire Wire Line
	1200 7200 1600 7200
Text Label 1300 6600 0    60   ~ 0
FS2
Text Label 1300 6700 0    60   ~ 0
FS1
Text Label 1300 6800 0    60   ~ 0
VCC
Text Label 1300 6900 0    60   ~ 0
D-
Text Label 1300 7000 0    60   ~ 0
D+
Text Label 1300 7100 0    60   ~ 0
GND
Text Label 1300 7200 0    60   ~ 0
FS3
NoConn ~ 3750 2450
Wire Wire Line
	3600 2000 3600 3650
Wire Wire Line
	3600 3650 3750 3650
NoConn ~ 1950 4500
Wire Bus Line
	1100 1900 1100 7100
NoConn ~ 1200 6600
NoConn ~ 1200 6700
NoConn ~ 1200 7200
Connection ~ 2100 3800
Wire Wire Line
	1200 4000 2250 4000
Entry Wire Line
	1100 3700 1200 3800
Entry Wire Line
	1100 3900 1200 4000
Text Label 10350 1500 0    60   ~ 0
VCC
Entry Wire Line
	1100 1900 1200 2000
Text Label 1250 2000 0    60   ~ 0
VCC
Entry Wire Line
	1100 5500 1200 5600
Connection ~ 1800 5600
Text Label 1300 5600 0    60   ~ 0
GND
Wire Wire Line
	9250 5500 10750 5500
Entry Wire Line
	10750 5500 10850 5600
Text Label 10350 5500 0    60   ~ 0
GND
Wire Wire Line
	9250 1500 10750 1500
Entry Wire Line
	10750 1500 10850 1600
Connection ~ 3600 2000
Wire Wire Line
	4800 2000 4800 2200
Entry Wire Line
	6450 2000 6550 2100
Text Label 6050 2000 0    60   ~ 0
VCC
Connection ~ 5050 5600
Entry Wire Line
	6450 5600 6550 5700
Text Label 6050 5600 0    60   ~ 0
GND
NoConn ~ 6450 3850
NoConn ~ 6450 3950
Wire Wire Line
	1800 4500 1500 4500
Wire Wire Line
	1500 4500 1500 5600
Connection ~ 1500 5600
Entry Wire Line
	10750 2500 10850 2600
Entry Wire Line
	10750 2100 10850 2200
Text Notes 1000 5300 1    60   ~ 0
Sacrificial USB cable from header to Teensy
Text Notes 7850 5950 0    60   ~ 0
Ribbon cable between Teensy pins and socket
Wire Bus Line
	10850 6050 6550 6050
$EndSCHEMATC
