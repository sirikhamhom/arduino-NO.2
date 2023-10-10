void InitialSpeed(int MotorSpeed){
  Error = 0;
  PreError = 0;
  Integral = 0;
  Ki = 0;
  MaxSpeed = MotorSpeed;
    if(MotorSpeed < 50){
      Kp = 40;
      Kd = 60;
       LeftSpeed = MotorSpeed - 0;
       RightSpeed = MotorSpeed - 0;
    }
    else if(MotorSpeed <= 70){
      Kp = 40;
      Kd = 20;
       LeftSpeed = MotorSpeed - 0;
       RightSpeed = MotorSpeed - 0;
    }
    else if(MotorSpeed <= 100){
      Kp = 20;
      Kd = 40;
       LeftSpeed = MotorSpeed - 0;
       RightSpeed = MotorSpeed - 0;
    }
}
