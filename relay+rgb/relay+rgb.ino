#define RED 11  // присваиваем имя RED для пина 11
#define GRN 12 // присваиваем имя GRN для пина 12
#define BLU 13  // присваиваем имя BLU для пина 13


 
void setup() {
   pinMode(RED, OUTPUT);  // используем Pin11 для вывода
   pinMode(GRN, OUTPUT); // используем Pin12 для вывода
   pinMode(BLU, OUTPUT);  // используем Pin13 для вывода

   pinMode(8, OUTPUT);

   digitalWrite(8, LOW);
}
 
void loop() {

   digitalWrite(RED, HIGH); // включаем красный свет
   digitalWrite(GRN, LOW);
   digitalWrite(BLU, LOW);
 
   delay(1000); // устанавливаем паузу для эффекта
 
   digitalWrite(RED, LOW);
   digitalWrite(GRN, HIGH); // включаем зеленый свет
   digitalWrite(BLU, LOW);
 
   delay(1000); // устанавливаем паузу для эффекта
 
   digitalWrite(RED, LOW);
   digitalWrite(GRN, LOW);
   digitalWrite(BLU, HIGH); // включаем синий свет
 
  delay(1000); // устанавливаем паузу для эффекта
}