var SerialPort = require('serialport');
var Port = new SerialPort("COM3", {
  baudRate: 9600
});

port.on('data', function (data) {
  console.log('Data:', data[0]);
});
for (var i =0;i< data.length; i++)
switch (Estado) {
  case 0:
    if (data[i] == 97){
    Estado =1;
    Sensor1Tmp =0;
    console.log("Iniciando...");
    }
    break;
  case 1:
    if (data[i] == 99) {
    Sensor1 = Sensor1Tmp;
    Sensor1Tmp = 0;
    console.log("Valor Actual: " + Sensor1);
  }else{
    if (data[i] == )
  }
    break;
    case 1:
      if (data[i] == 101) {
      Sensor2 = Sensor1Tmp;
      Sensor2Tmp = 0;
      console.log("Valor Actual: " + Sensor1);
    }
  default:

}
