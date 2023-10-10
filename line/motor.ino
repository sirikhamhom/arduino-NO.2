void MotorStop(){
  ao();
  delay(10);
}

void Forward(int MotorSpeed, int Time){
  InitialSpeed(MotorSpeed);  //กำหนดความเร็วมอเตอร์
  fd2(LeftSpeed, RightSpeed);  //เดินไปข้างหน้า
  delay(Time);
}

void Backward(int MotorSpeed, int Time){  //เดินหน้าหน่วงเวลา
//  InitialSpeedBack(MotorSpeed);  //กำหนดความเร็วมอเตอร์
  bk2(LeftSpeed, RightSpeed);  //เดินไปข้างหน้า
  delay(Time);
}

void TurnLeft() { //เลี้ยวซ้าย
  MotorStop();
  sr(TurnSpeed); //หมุนซ้าย
  delay(180);
  ConvertADC();
  while (L2 == 1) { //ถ้่าเจอขาวอยู่ วนอ่านค่าสีไปเรื่อยๆ จนเจอดำ
      ConvertADC();
  }
  MotorStop();
}

void TurnRight() { //เลี้ยวขวา
  MotorStop();
  sl(TurnSpeed); //หมุนขวา
  delay(180);    //ปรับค่าให้เลี้ยวตรงเส้น
  ConvertADC();
  while (R2 == 1) { //ถ้่าเจอขาวอยู่วนอ่านค่าสีไปเรื่อยๆ จนเจอดำ
     ConvertADC();
  }
  MotorStop();
}

void UTurn() { //ขวา
  MotorStop();
  sr(TurnSpeed); //หมุนขวา
  delay(180);    //ปรับค่าให้เเเลยแยกตัด เพื่อหมุนกลับ
  ConvertADC();
  while (R2 == 1) { //ถ้่าเจอขาวอยู่วนอ่านค่าสีไปเรื่อยๆ จนเจอดำ
      ConvertADC();
  }
  MotorStop();
}
