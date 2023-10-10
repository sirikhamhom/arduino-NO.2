void ConvertADC(){  //ดำ = 0, ขาว = 1
  ReadADC();
  if(L<RefL) L=0;  else L=1;
  if(C<RefC) C=0;  else C=1;
  if(R<RefR) R=0;  else R=1;
}
