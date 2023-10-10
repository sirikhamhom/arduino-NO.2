void Trac(int MotorSpeed) { //เดินตามเส้นธรรมดา
  ConvertADC();
    if (C == 0){ 
    fd(MotorSpeed);
  }
  else if (L1 == 0){ 
    tl(MotorSpeed);
  }
  else if (R1 == 0){ 
    tr(MotorSpeed);
  }
  else if (R2 == 0){ 
    fd2(-MotorSpeed/2, MotorSpeed);
  }
  else if (L2 == 0){ 
    fd2(MotorSpeed, -MotorSpeed/2);
  }
}

void TracNormalJC(int MotorSpeed, int Time) {  //แทรกเส้นธรรมดาเจอแยกหยุด
  Forward(MotorSpeed, Time);
  ConvertADC();
  while (L1 == 1 ||L2 ==1|| R1 == 1||R2 == 1) { //ยังไม่เจอแยก
    Trac(MotorSpeed);
  }
  Forward(MotorSpeed, Time);  //เดินหน้าไปอีกนิดตาม Time
}
