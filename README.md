&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__Hi👋__,Welcome to the tutorial on making a mini counter project using an Arduino UNO and a 4-digit digital tube! In this project, we will implement a forward timing display for a 4-bit digital tube with simple hardware connections and code. It's easy to implement in a few steps, so let's get started 🚀!
- 📝 Project Profile
- ✨ Functional Features
- 🏗 Project structure
- 🚀 Installation and operation
- 🔧 Instructions for use 
# 4 digit digital tube
## Project Profile
A 4-digit digital tube is an electronic display device that is controlled by an Arduino UNO to display four digits (from digits to thousands). The working principle of the digital tube is based on 7-segment LEDs that can control the display of each digit independently.  
## Functional Features
- 📏 Clear display: 4 digits can be displayed at the same time with clear display.  
- 🎮 Efficient control: precise control through Arduino UNO.  
- ⚙️ Easy to operate: suitable for beginners, simple hardware connection and code.  
- 🔋 Low Power Consumption: Suitable for long time operation with low power consumption.  
## Project structure
```
│── README.md：Detailed description document for the project.
│── Number_Cube：Project core code file that controls the display of a 4-digit digital tube.
```
## Installation and operation steps
### Material Preparation:
- Arduino UNO: The core microcontroller used to control the digital tube.  
- 4-digit digital tube: used to display four digits.  
- Breadboard: for circuit connections.  
- Male-to-male DuPont cable: for hardware connections. 
- USB cable: for connecting Arduino and computer.
### Wiring Instructions:
- a, b, c, d, e, f, g, dp: These pins control the seven-segment display portion of the digital tube and the decimal point display, respectively.    
- 1, 2, 3, 4: These four pins control the digit, tens, hundreds and thousands display of the digital tube respectively.    
- When wiring, please refer to the following diagram to connect each pin of the digital tube to the corresponding pin of the Arduino UNO.
![image](https://github.com/user-attachments/assets/afbe0836-be92-42f0-966f-53135039ed15)
### The code runs:
1、Connect the Arduino UNO to the computer using the USB cable.   
2、Open the Number_Cube.ino file in the Arduino IDE.   
3、Select the correct development board and port: Click Tools -> Board -> Arduino UNO, then click Tools -> Port to select the correct port.    
4、Click Compile and upload the code to the Arduino UNO.   
![image](https://github.com/user-attachments/assets/cd520298-7eda-4f9b-bce8-398e393a2805)  

## Instructions for use
1、By adjusting the timer and delay settings in the code, you can customize the display speed of the digital tube.  
2、The default implementation of the project is forward timing, i.e., gradually starting from 0 to display the timing. You can also modify the code to add countdown or other display functions according to your needs.  
3、If a common cathode digital tube is used, simply change the appropriate logic control in the code to ensure correct display.  
