void CalError(){  //การคำนวณค่า Error
  ConvertADC(); //เปลี่ยนจาก analog เป็น digital (0 = ดำ,1 = ขาว)
  if ((L1 == 1) && (L2 == 1) && (C == 1) && (R2== 1) && (R1 == 0)) Error = 4;
  else if ((L1 == 1) && (L2 == 1) && (C == 1) && (R2 == 0) && (R1 == 0)) Error = 3;
  else if ((L1 == 1) && (L2 == 1) && (C == 1) && (R2 == 0) && (R1 == 1)) Error = 2;
  else if ((L1 == 1) && (L2 == 1) && (C == 0) && (R2 == 0) && (R1 == 1)) Error = 1;
  else if ((L1 == 1) && (L2 == 1) && (C == 0) && (R2 == 1) && (R1 == 1)) Error = 0;
  else if ((L1 == 1) && (L2 == 0) && (C == 0) && (R2 == 1) && (R1 == 1)) Error = -1;
  else if ((L1 == 1) && (L2 == 0) && (C == 1) && (R2 == 1) && (R1 == 1)) Error = -2;
  else if ((L1 == 0) && (L2 == 0) && (C == 1) && (R2 == 1) && (R1 == 1)) Error = -3;
  else if ((L1 == 0) && (L2 == 1) && (C == 1) && (R2 == 1) && (R1 == 1)) Error = -4;
  else if ((L1 == 0) && (L2 == 0) && (C == 0) && (R2 == 0) && (R1 == 0)) Error = 100;
  else if  ((11 == 0) && (L2 == 0) && (C == 0))  Error = 101;
  else if  ((C == 0) && (R2 == 0) && (R1 == 0))  Error = 102;
}
