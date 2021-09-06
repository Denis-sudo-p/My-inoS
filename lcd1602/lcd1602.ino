    #include <LiquidCrystal.h>
    #include <SimpleDHT.h>
    
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    SimpleDHT11 dht11(7);

    float temperature = 0;
    float humidity = 0;
    int result_code = 0;

    void setup() 
    {
      pinMode(8, OUTPUT);
      lcd.begin(16, 2);
      lcd.clear();
    }
    void loop() 
    {
      lcd.setCursor(0,0);
      lcd.print("Temp: ");
      lcd.print(temperature); 
      lcd.print(" C");
      
      lcd.setCursor(0,2);
      lcd.print("Hum: ");
      lcd.print(humidity); 
      lcd.print(" %");

      if (humidity <= 40.00){
        tone(8, 1000);
        }

        if (temperature <= 20.00){
        tone(8, 6650);
        }
      
      result_code = dht11.read2(&temperature, &humidity, NULL);

      if (result_code != SimpleDHTErrSuccess) {
    lcd.print("Read DHT11 failed. Error: ");
    lcd.print(result_code);
    delay(1000);
    return;
  }
  delay(1500);
}
