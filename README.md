
# Watchdog_AVR

This project demonstrates the implementation of a **Watchdog Timer (WDT)** in AVR microcontrollers. The Watchdog Timer is used to reset the system in case of software malfunction or unresponsiveness, ensuring system stability and reliability.

## Features

- Configurable **Watchdog Timer** for system monitoring.
- Demonstrates resetting the microcontroller upon timeout.
- Provides sample code for AVR microcontrollers using **C**.
- Implements best practices for embedded systems design.

## Prerequisites

Before running the code, ensure you have:

- **AVR microcontroller** (e.g., ATmega328P).
- **AVR-GCC Compiler** for compiling the C code.
- **AVRDUDE** for uploading the compiled code to the microcontroller.
- A suitable development environment like **Atmel Studio** or **Arduino IDE** (optional).

## Setup and Usage

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/abdulrahman-masoud/Watchdog_AVR.git
   cd Watchdog_AVR
   ```

2. **Open the Project**:
   - Use your preferred IDE to open the source code.

3. **Compile the Code**:
   - Compile the `main.c` file using AVR-GCC or your chosen compiler.

4. **Upload to Microcontroller**:
   - Use a programmer and AVRDUDE to upload the compiled HEX file to the microcontroller.

   ```bash
   avrdude -p <MCU> -c <Programmer> -U flash:w:<compiled_file>.hex
   ```

   Replace `<MCU>` and `<Programmer>` with your microcontroller and programmer type.

5. **Observe the Results**:
   - Monitor the microcontroller's behavior when the Watchdog Timer triggers a system reset.

## File Structure

- `main.c`: Main source file containing the Watchdog Timer implementation.
- `README.md`: Project overview and setup instructions.

## How It Works

1. The **Watchdog Timer** is initialized with a predefined timeout period.
2. The application logic periodically resets the timer using `wdt_reset()`.
3. If the application fails to reset the timer within the timeout period, the microcontroller resets itself.
4. The code demonstrates a simple scenario where the system is intentionally allowed to hang to trigger the watchdog.

## Customization

- Adjust the WDT timeout period by modifying the timer configuration in the `main.c` file.
- Extend the application logic as needed to simulate different scenarios.

## License

This project is licensed under the MIT License. Feel free to use and modify the code as needed.

## Contributions

Contributions are welcome! Feel free to open issues or submit pull requests to improve the project.

## Contact

For any questions or feedback, reach out via:
- [GitHub Profile](https://github.com/abdulrahman-masoud)

