# 💡 Arduino ile Basit LED Devresi

Bu projede bir **Arduino** ve birkaç temel malzeme kullanarak **basit bir LED yakma devresi** kurmayı öğreneceksiniz.

🔗 [GitHub Sayfasına Gitmek için Tıklayın](#)

🔧 Aşağıda **Tinkercad devre şeması** da bulunmaktadır.  
🔗 [Tinkercad Tasarımına Göz At](#)

---

## 🧰 Gerekli Malzemeler

- 1 adet **LED**
- 1 adet **direnç** (330Ω veya 220Ω)
- 1 adet **Arduino**
- 1 adet **breadboard**
- 2 adet **jumper kablo**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: LED'i Breadboard'a Yerleştirin

- LED'i breadboard’un bir köşesine takın.
- **Uzun bacak (+)** pozitif (anot),  
  **Kısa bacak (-)** negatif (katot) uçtur.

---

### 🔹 Adım 2: Direnci Bağlayın

- **330Ω veya 220Ω** değerinde bir direnç alın.
- Direncin bir ucunu **LED'in uzun bacağına** bağlayın.

---

### 🔹 Adım 3: Arduino Bağlantılarını Yapın

- Bir **jumper kablosu** ile direncin boşta kalan ucunu Arduino'nun **8. pinine** bağlayın.
- Diğer bir jumper kablosu ile LED’in **kısa bacağını (–)** Arduino’nun **GND pinine** bağlayın.

---

### 🔹 Adım 4: Arduino Kodunu Yükleyin

Arduino IDE'ye aşağıdaki kodu yapıştırın ve karta yükleyin:

```cpp
void setup() {
  pinMode(8, OUTPUT); // 8. pini çıkış olarak tanımlıyoruz
}

void loop() {
  digitalWrite(8, HIGH); // LED'i yak
  delay(500);            // 500ms bekle
  digitalWrite(8, LOW);  // LED'i söndür
  delay(500);            // 500ms bekle
}
