void ShowADC(){
  ReadADC();
  oled.clear();
  oled.text(0,0, "L = %d ", L);
  oled.text(1,0, "C = %d ", C);
  oled.text(2,0, "R = %d ", R);
  oled.show();
}
