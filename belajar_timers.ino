void setup() {
  Serial.begin(115200);
  TCCR1A = 0;
  TCCR1B = 0;
  //OCR1A = 31249; //comparator COMPA OCR1A/B = (Fxtal/prescaler.Ftarget)-1
  //OCR1B = 15624; //comparator COMPB OCR1A/B = (Fxtal/prescaler.Ftarget)-1
  //TCNT1 = 3036; //TCNT1 = 65536 - Fxtal/prescaler.Ftarget
  //TCCR1B |= (1<<CS10); //prescaler 1
  //TCCR1B |= (1<<CS12); //prescaler 256
  //TCCR1B |= (1<<CS12) | (1<<WGM12); //prescaler 256, CTC mode
  TCCR1A |= (1<<WGM10) | (1<<COM1A1) | (1<<COM1B1); //faastpwm non-inverting pin 9&10
  TCCR1B |= (1<<CS10) | (1<<WGM12); //prescaler 1, FastPWM 8bit
  //TIMSK1 |= (1<<TOIE1); //enable timer overflow
  //TIMSK1 |= (1<<OCIE1A) | (1<<OCIE1B); //enable OCR1A/OCR1B interrupt
}

//ISR(TIMER1_COMPA_vect){ //ISR menggunakan comparator OCR1A
//  Serial.println(millis());
//}
//ISR(TIMER1_COMPB_vect){ //ISR menggunakan comparator OCR1B
//  Serial.println(millis());
//}
//ISR(TIMER1_OVF_vect){ //ISR Overflow menggunakan TCNT1
//  Serial.println(millis());
//  TCNT1 = 3036;
//}

void loop() {
  // put your main code here, to run repeatedly:

}
