# Nokia 1100

Reutilizar LCD de Nokia 1100.

### Components:
* Arduino Uno.
* Protoboard.
* Nokia 1100 LCD.
* Cables.

### ¿Cómo construir el circuito?

Soldar los pads del display para armar el cableado.

<p align=“center”>
  <img src=“https://github.com/catorceveces/nokia1100/blob/main/pics/pads.jpeg” width=“310” height=“310”>
</p>

Las conexiones a Arduino de cada uno de los ochos pads del display:

LED: 3.3v
VDD: 3.3v
VDDI: 3.3v
SCLK: Pin 13
SDA: Pin 11
GND: GND
CS: Pin 10
RES: Pin 12

<p align=“center”>
  <img src=“https://github.com/catorceveces/nokia1100/blob/main/pics/image.jpg” width=310 height=“310”>
</p>

*Es importante alimentar la protoboard con 3.3v de Arduino, ya que 5v van a quemar la pantalla*.

En este caso utilicé una protoboard secundaria para la salida de 3.3v de Arduino. Esa sub protoboard vinculará cada uno de los pads que se alimentan de ese voltaje.

Una vez cableado, instalar [esta librería](https://github.com/vasiliucatalinmihai/Arduino-library-nokia-1100-lcd--PCF8814).

<p align=“center”>
  <img src=“https://github.com/catorceveces/nokia1100/blob/main/pics/final.jpeg" width=“620” height=“310”>
</p>
