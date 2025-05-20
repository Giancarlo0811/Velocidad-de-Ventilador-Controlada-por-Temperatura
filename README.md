# Velocidad-de-Ventilador-Controlada-por-Temperatura
Control de la velocidad de un ventilador por temperatura con Arduino UNO usando PWM y un Termistor.

🎬 **Demostración: [Video](https://www.youtube.com/watch?v=LNJPHR0Pbnc)**

## ⚡ Componentes
- Arduino UNO
- Termistor de 10K
- MOSFET SW50N06 canal n
- Resistor de 10K
- Ventilador de 5V/360mA

## 📐 Esquemático
![alt text](./Imagenes/Diagrama.PNG)

### 🔧 Detalles
- Divisor de Voltaje: El termistor varía su resistencia en función de la temperatura y el arduino lee el valor del divisor de voltaje en el pin analógico A0.
- La corriente de salida de un pin del Arduino no es suficiente para el ventilador. El MOSFET es necesario para poder manejar la carga (ventilador) con una corriente mayor.

## 📷 Montaje en protoboard
![alt text](./Imagenes/Montaje.jpg)