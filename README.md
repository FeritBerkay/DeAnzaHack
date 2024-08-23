# DeAnzaHack

For the Hacklathino event at De Anza College, we developed a Morse Code password retriever project. The event was focused on hardware projects, and our team's goal was to create a tool that could encode and decode passwords using Morse Code. This project uses an Arduino, a push button, and an LED to handle the input, encoding, and display of passwords in Morse Code.

### Project Description:

Our project allows users to store and retrieve passwords for different accounts. The system can either display part of the password using Morse Code or allow the user to type the password using the push button. By pressing and holding the button, users can input dots and dashes, representing characters in Morse Code, which are then converted to plaintext passwords.

### Code Overview:

- **Morse Code Encoding and Decoding**: The system translates input from the push button into Morse Code. The input is then stored and compared with pre-stored passwords for various accounts. The LED blinks corresponding to dots and dashes, providing a visual representation of the password.

- **Password Verification**: Users can select from a list of accounts and verify their passwords by either typing or listening to the password in Morse Code. The code checks the user's input against the stored password and gives feedback if the password is correct or incorrect.

- **New Account Creation**: The system also allows for the creation of new accounts. Users can input the account name and a Morse Code password, which is stored for future retrieval.

This project demonstrates our understanding of hardware integration with software logic, as well as how to work with input devices (buttons), output devices (LEDs), and Morse Code for encoding and decoding information.
