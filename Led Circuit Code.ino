void setup()//Hazırlık kısmı.
{
  pinMode(8, OUTPUT); // İkinci pni çıkış olarak tanımladık.
}

void loop()
{
  digitalWrite(8, HIGH);// Ledi yakar.
  delay(500); // Ledin yanması ve sönmesi arasına 1 saniyelik gecikme ekler.
  digitalWrite(8, LOW);// Ledi söndürür.
  delay(500); // Ledin yanması ve sönmesi arasına 1 saniyelik gecikme ekler.
}
