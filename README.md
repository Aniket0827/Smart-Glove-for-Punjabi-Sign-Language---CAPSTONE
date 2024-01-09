# Smart-Glove-for-Punjabi-Sign-Language---CAPSTONE

Smart Glove for Punjabi Sign Language

## Project Overview
The Smart Glove for Punjabi Sign Language is an innovative initiative designed to enhance communication accessibility for individuals using sign language. This project incorporates advanced hardware components such as Flex Sensors and an ESP32 microcontroller, calibrated through the Arduino IDE. The system employs a Python script to interpret gestures in real-time and trigger corresponding audio outputs, offering a valuable tool for the hearing-impaired.
The sign language used is refered from the All India Pingalwara Charitable Society (Regd) Amritsar.
Link:https://pingalwara.org/insights/learn-sign-language-in-punjabi/

## Project Objectives
### Accessibility Enhancement:

- Create a communication tool that bridges the gap between the hearing-impaired and the general population, facilitating seamless interaction through Punjabi Sign Language.
Intuitive Gesture Recognition:

- Develop a system that accurately recognizes and interprets various sign language gestures using strategically placed Flex Sensors on the Smart Glove.
Real-time Speech Output:

- Implement a Python script to establish a serial communication link with the ESP32, enabling real-time translation of recognized gestures into corresponding audio outputs.
Calibration for Precision:

- Provide a calibration mechanism through the Arduino IDE to ensure the accurate detection and interpretation of sign language gestures, enhancing the reliability of the system.

### User-Friendly Experience:

Create a user-friendly interface, enabling easy setup and usage of the Smart Glove, promoting its adoption among users and caregivers.

## Detailed Steps
### 1. Hardware Setup

#### Flex Sensors:
- Integrate Flex Sensors onto the glove, strategically placing them to capture diverse hand gestures.
#### ESP32:
- Connect the Flex Sensors to the ESP32 microcontroller, ensuring secure and functional wiring.

### 2. Calibration Using Arduino IDE

- Upload the provided calibration code to the ESP32 through the Arduino IDE.
- Follow calibration instructions to fine-tune sensor readings, ensuring precise gesture recognition.

### 3. Audio File Preparation
   
- Populate the data/ directory with audio files corresponding to specific sign language gestures (e.g., 1.wav, 2.wav, etc.).
- Ensure sequential naming of audio files for accurate mapping with recognized gestures.

### 4. Serial Connection Configuration
   
- In the Python script, configure the serial connection parameters (e.g., COM12, 9600) to match the ESP32's communication port.

### 5. Run the Python Script
   
- Execute the Python script to initiate the real-time monitoring of gestures from the ESP32.

- Observe the console for gesture recognition feedback.

### 6. Gesture Recognition and Audio Output
   
- As gestures are recognized (non-zero action), the script triggers the playback of the corresponding audio file from the data/ directory.

### 7. Iterative Testing and Improvement
   
- Conduct iterative testing to refine gesture recognition accuracy and audio playback synchronization.

- Seek user feedback and make necessary adjustments for an optimal user experience.

## Acknowledgments
This project is inspired by the commitment to inclusivity and technological innovation. Special thanks to the open-source community for contributing to the development of this impactful solution.
