## RGB LED Control Using Potentiometers - University assignment

This code demonstrates how to control an RGB LED using three potentiometers. The values of the potentiometers are read by the Arduino board and mapped to the corresponding RGB values for the LED.

### Components

| Name | Quantity | Component |
|------|----------|-----------|
| U1 | 1 | Arduino Uno R3 |
| Rpot1, Rpot2, Rpot3 | 3 | 250 kΩ Potentiometer |
| R1, R3, R2 | 3 | 1 kΩ Resistor |
| D1 | 1 | RGB LED |

### Example

![Example](/example/example.gif)
### Code Explanation

The three potentiometers are connected to analog input pins A0, A1, and A2. The values of these pins are read using the `analogRead()` function and then mapped to the corresponding RGB values(0-255) using the `map()` function.

The RGB LED is connected to pins 11, 9, and 10 for red, green, and blue, respectively. The analog values for the RGB colors are then sent to the LED using the `analogWrite()` function.

The values of the RGB colors are also printed to the Serial Monitor using the `Serial.print()` and `Serial.println()` functions.

## Author

- [Junior Camargo](https://github.com/JuniorC07)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.