/*void setup(){
   TCCR1A=0; TCCR1B=0;
   // RESET lại 2 thanh ghi
  DDRB |= (1 << PB2);
  // Đầu ra PB2 là OUTPUT ( pin 10)
 
    TCCR1A |= (1 << WGM11);
    TCCR1B |= (1 << WGM12)|(1 << WGM13);
    // chọn Fast PWM chế độ chọn TOP_value tự do  ICR1
    TCCR1A |= (1 << COM1B1);
    // So sánh thường( none-inverting)
    ICR1 = 30000;
    // xung răng cưa tràn sau 30000 P_clock
    OCR1B = 15000;
    // Value=15000 -> độ rộng 50 %
    TCCR1B |= (1 << CS10);
    // F_clock/1=16mhz
    //F_pwm=16mhz/30001=533.315 hz
}
void loop(){
}*/
float angle;
int a=3;
int b=4;
void setup(){
   TCCR1A=0; TCCR1B=0;
   // RESET lại 2 thanh ghi
  DDRB |= (1 << PB2);
  // Đầu ra PB2 là OUTPUT ( pin 10)
 
    TCCR1A |= (1 << WGM11);
    TCCR1B |= (1 << WGM12)|(1 << WGM13);
    // chọn Fast PWM chế độ chọn TOP_value tự do  ICR1
    TCCR1A |= (1 << COM1B1);
    // So sánh thường( none-inverting)
    ICR1 = 319999;
    // xung răng cưa tràn sau 319999 P_clock
    OCR1B = 40200;      // 9000~40200
    // Value=15000 -> độ rộng 12,5 %
    TCCR1B |= (1 << CS10);
    // F_clock/1=16mhz
    //F_pwm=16mhz/319999=50 hz
}
void loop(){

    }
