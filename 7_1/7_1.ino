#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET -1  // Reset pin # (or -1 if sharing Arduino reset pin)                        

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define DHT_PIN 5       // Pin connected to DHT11 sensor

DHT dht(DHT_PIN, DHT22);

void setup() {
  Serial.begin(115200);
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while (true) {
      // Don't proceed, loop forever
    }
  }

  display.clearDisplay();

  // Initialize DHT sensor
  dht.begin();

  // Rest of your existing code...
}

void loop() {
  // Read temperature and humidity from DHT11 sensor
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Update OLED display with temperature and humidity values
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Temp: ");
  display.print(temperature);
  display.println(" Celcius");
  display.print("Humidity: ");
  display.print(humidity);
  display.println(" %");
  display.display();

  delay(2000);
}
