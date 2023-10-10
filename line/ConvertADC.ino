void ConvertADC() { //ดำ = 0, ขาว = 1
  ReadADC();
  L1 = analog(4);
   L2 = analog(3);
   C = analog(2);
   R2 = analog(1);
   R1 = analog(0);
  if (L1 < RefL1) L1 = 0;  else L1 = 1;
  if (L2 < RefL2) L2 = 0;  else L2 = 1;
  if (C < RefC) C = 0;  else C = 1;
  if (R1 < RefR1) R1 = 0;  else R1 = 1;
  if (R2 < RefR2) R2 = 0;  else R2 = 1;
}
