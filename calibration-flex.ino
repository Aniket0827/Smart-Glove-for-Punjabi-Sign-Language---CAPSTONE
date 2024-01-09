#include<LiquidCrystal.h>
LiquidCrystal lcd(23, 22, 21, 19, 18, 5);  // rs, en, d4, d5, d6, d7
const int FLEX_SENSORS[5] = {13, 12, 14, 27, 26};
void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600); 
  lcd.setCursor(0, 0);
  lcd.print("Gesture");
  lcd.setCursor(0, 1);
  lcd.print("Recognition Sys.");
  for (int i = 0; i < 5; i++) {
    pinMode(FLEX_SENSORS[i] , INPUT);
  }
  delay(100);
}

int action;
int storeAction;
void loop() {
  // testFlexSensors();
  setFlexValues();
  doOperation();
  delay(500);

}

void doOperation() {
  if (storeAction != action) {
    storeAction = action;
    Serial.println(action);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(action);
  }
}

void testFlexSensors() {
  for (int i = 0; i < 5; i++) {
    Serial.print(i + 1);
    Serial.print(" ");
    Serial.println(analogRead(FLEX_SENSORS[i]));
  }
}

void setFlexValues() {
  action = 0;

  int valueFlex[5] = {0};
  valueFlex[0] = map(analogRead(FLEX_SENSORS[0]), 230, 450, 0, 2);
  valueFlex[1] = map(analogRead(FLEX_SENSORS[1]), 210, 290, 0, 2);
  valueFlex[2] = map(analogRead(FLEX_SENSORS[2]), 280, 350, 0, 2);
  valueFlex[3] = map(analogRead(FLEX_SENSORS[3]), 60, 230, 0, 2);
  valueFlex[4] = map(analogRead(FLEX_SENSORS[4]), 260, 480, 0, 2);

  for (int i = 0; i < 5; i++) {
    if (valueFlex[i] >= 2)
      valueFlex[i] = 1;
    if (valueFlex[i] <= 0)
      valueFlex[i] = 0;
    action |= valueFlex[i] << i;
  }
}