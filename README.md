Arduino LED Blinking Project (Arduino Uno R3)
📌 Overview

This project demonstrates a basic LED blinking circuit using an Arduino Uno R3 and a breadboard. It is designed for beginners to understand digital output control, basic wiring, and Arduino programming. The circuit and simulation are created using Tinkercad.

🛠 Components Used

Arduino Uno R3

Breadboard

3 × LEDs (Red, Yellow, Green)

3 × Resistors (220Ω or 330Ω)

Jumper wires

USB cable (for power and programming)

🔌 Circuit Description

Each LED is connected to a digital pin of the Arduino through a current-limiting resistor.

The anodes (longer leg) of the LEDs are connected to Arduino digital pins.

The cathodes (shorter leg) are connected to GND.

The Arduino is powered via USB.

LEDs blink in a predefined sequence using delays in the Arduino code.

📐 Circuit Diagram

The circuit diagram was designed and simulated using Tinkercad.

(Add your image here in GitHub)

![Circuit Diagram](Brilliant Habbi-Bigery.png)

💻 Arduino Code

The Arduino sketch controls the LEDs by toggling the digital pins HIGH and LOW with delays in between.

File: led_blinking.ino

// Example structure (replace with your actual code if needed)
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
}

🚀 How to Run the Project

Open Tinkercad or Arduino IDE

Create the circuit as shown in the diagram

Upload the code to the Arduino Uno

Observe the LEDs blinking in sequence

🎯 Learning Outcomes

Understanding Arduino digital I/O pins

Interfacing LEDs with Arduino

Using resistors for current limiting

Writing basic Arduino programs

Simulating circuits using Tinkercad

🔮 Future Improvements

Add push buttons to control blinking

Use PWM for brightness control

Implement patterns or traffic-light logic

📄 License

This project is open-source and free to use for educational purposes.
