const { SerialPort } = require('serialport');
const arduino = new SerialPort({path:'COM3', baudRate: 9600});

function ligarLed1(){
    arduino.write('A');
    desligarLed2();
    setTimeout(desligarLed1, 2000);
}

function desligarLed1(){
    arduino.write('B');
    ligarLed2();
    setTimeout(ligarLed1, 2000)
}

function ligarLed2(){
    arduino.write('C');
}

function desligarLed2(){
    arduino.write('D');
}

setTimeout(ligarLed1, 2000);
