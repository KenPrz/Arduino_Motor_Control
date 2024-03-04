# Arduino Motor Control

This repository contains Arduino code for controlling two motors in both forward and backward directions using an H-bridge motor driver.

## Overview

The Arduino sketch provided in this repository demonstrates how to control two motors connected to an Arduino using an H-bridge motor driver. The motors are controlled in both forward and backward directions, with a delay between each movement.

## Components Required

- Arduino board
- H-bridge motor driver
- 2 - 4 DC motors
- Jumper wires

## How to Use
1. Upload the Arduino sketch to your Arduino board.
2. Open the serial monitor to observe the motor movements.
3. The motors will alternate between moving forward and backward with a one-second delay between each movement.

## Code Explanation

- The code initializes the motor pins as outputs in the `setup()` function.
- It then alternates between moving the motors forward and backward in the `loop()` function.
- Messages indicating the direction of motor movement are printed to the serial monitor.

## Modifying the Code

To customize the motor control behavior, you can modify the delay intervals, change the pin connections, or adjust the motor control logic in the code.
