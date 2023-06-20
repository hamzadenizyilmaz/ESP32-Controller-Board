# ESP32-Controller-Board

![alt text](https://github.com/hamzadenizyilmaz/ESP32-Controller-Board/blob/main/ESP32-Controller-Board.png)

(https://github.com/hamzadenizyilmaz/ESP32-Controller-Board/blob/main/ESP32-Controller-Board_1.png)

(https://github.com/hamzadenizyilmaz/ESP32-Controller-Board/blob/main/ESP32-Controller-Board_2.png)

(https://github.com/hamzadenizyilmaz/ESP32-Controller-Board/blob/main/ESP32-Controller-Board_3.png)

(https://github.com/hamzadenizyilmaz/ESP32-Controller-Board/blob/main/ESP32-Controller-Board_4.png)

Objectives of the Project:

Building a simple relay control circuit using an ESP32 microcontroller.
To open and close the relays using the digital pins of the ESP32.
Controlling various devices (lights, motors, fans, etc.) via relays.
Controlling relays remotely through wireless connection with ESP32.

Beginning of the project:

Before you start using the project, you must use a suitable software development environment to program the ESP32 microcontroller. You can use a popular platform like Arduino IDE.
Connect the ESP32's development board to the computer with the USB cable.
Open Arduino IDE and choose the correct port and board of ESP32.
Write or upload the appropriate code to ESP32. This code will make ESP32 start the WiFi connection and web server.
To program the ESP32, upload the code to the ESP32 by clicking the "Upload" button.

Connecting to a wireless network:

ESP32 uses a WiFi connection to wirelessly control your project.
Open the serial monitor of the ESP32 and observe the status of the WiFi connection. You will see a message asking for the name (SSID) and password of your WiFi network.
An IP address will be assigned for the ESP32's web server and you will see this IP address on the serial monitor.

Controlling relays using the web interface:

Open a web browser using the ESP32's assigned IP address.
In the web browser you will see a simple user interface connecting to the web server of the ESP32. This interface will contain a set of buttons or commands by which the relays are controlled.
You will see an interface arranged with one on and one off button for each relay.
Click on the corresponding buttons to turn the relevant relay on or off.
When you click the buttons, ESP32 will control the relays and turn the corresponding relay on or off.
The status of the relays can be monitored visually via the LEDs placed on the ESP32. For example, an on relay may have a flashing LED.

Effect of remotely controlled relays:

Each relay will control a load as you specified in the project. This load could be lights, motors, fans or any other electrical device.
When the relays are turned on, the loads they are connected to will also start working and when closed they will stop.
The switching on and off of the relays will be done via the web server of the ESP32. Therefore, you can control the relays from any device that has access to the network you are connected to the ESP32.
For example, you can control the relays using a smartphone or computer connected to your home WiFi network. In this way, you can control the relays remotely, whether you are inside or outside the house.

Circuit Connections:

After you have properly placed the components on the PCB, you need to make the circuit connections.
The control pins (coil pins) of the relays must be connected to the D23, D21, D22 and D19 pins of the ESP32. These are the digital output pins of the ESP32 and will turn the relays on and off.
The relays' VCC (supply) pins must be connected to a 12V power supply.
The relays' GND (ground) pins must be connected to the ground of the power supply.
The relays' NO (Normally Open) and COM (Common) terminals must be connected to one side of the load you want to connect. The other side of the load must be connected to the other side of the power supply.
The 1N4007 diodes must be reverse polarized in parallel with the relay coils to avoid voltage reversals from the relay coils.
BC547 transistors are used to convert low current from ESP32 to high current. The tab (T) pin of each transistor should be connected to the relay coil, the collector (C) pin to the positive (12V) side of the power supply and the emitter (E) pin to ground.

Programming:

You can use the Arduino IDE or a similar software development environment to control the ESP32.
You need to write the appropriate code for ESP32. This code allows the ESP32 to establish the WiFi connection, start the web server and control the relays.
The program you install on the ESP32 will enable the ESP32 to connect to the WiFi network and get an assigned IP address.
While programming, you need to associate the D23, D21, D22 and D19 pins of the ESP32 with the control pins of the relays. These pins will provide signals to turn the relays on and off.
In your program, you need to create the web server and web interface of the ESP32. The web interface should contain buttons or commands to control the relays.

Application Usage:

Connect the ESP32 to the power source and load its program.
The ESP32 will connect to the WiFi network and get an assigned IP address.
Using a suitable device (smartphone, tablet, computer) open a web browser with the ESP32's assigned IP address.
In the web interface, you will see buttons or commands to control the relays.
Click on the corresponding button to turn the relevant relay on or off.
ESP32 will control the relays and turn the relevant relay on and off when you click the buttons.
The status of the relays can be monitored via the LEDs on the ESP32 or visual feedback displayed on the web interface.
The loads controlled by the relays (lights, motors, fans, etc.) will turn on and off according to the status of the relays.

Internet access:

Thanks to the ESP32's WiFi connection, you can connect your project to the internet.
You need to connect the web server of the ESP32 to a wireless access point (router) connected to the network you manage.
You can control your project with any device (smartphone, tablet, computer) connected to the network to which the ESP32 is connected.
As long as your device has internet access, you can control your project from anywhere in the world.

Remote access:

You can access your project remotely using the IP address assigned to the ESP32.
Open your device's web browser and enter the ESP32's IP address in the address bar.
You can use the web interface to control the relays via the ESP32's web server.
You can turn the relays on or off by clicking the corresponding buttons.
Thanks to the remote access feature, you can control your project remotely even when you are not at home. For example, you can turn relays on and off via a smartphone app.

Programming and Customization:

You can use the Arduino IDE or similar software development environment to program the ESP32.
You can customize the program you wrote to control ESP32. For example, you can add timers or automatic scenarios to schedule relays.
You can add additional components or sensors to expand the project. For example, you can create an interactive automation system with sensors such as a temperature sensor or a motion sensor.
By integrating with Internet-based services or APIs, you can make your project more complex and functional. For example, you can get weather data and automatically control the relays according to the weather.

Security:

When using the project, it is important to consider the safety precautions.
It is important that you use a strong password and user authentication method to access the ESP32's web server.
You should also make sure that the power supply and electrical connections are safe and sound.
When using the project for remote access, it is recommended to use a secure network and firewall to minimize security vulnerabilities.
