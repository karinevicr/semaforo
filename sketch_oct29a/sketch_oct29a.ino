const int verdePin = 13;   // Pino do LED verde
const int amareloPin = 11; // Pino do LED amarelo
const int vermelhoPin = 9;  // Pino do LED vermelho

void setup() {
    pinMode(verdePin, OUTPUT);        // Define o pino do LED verde como saída
    pinMode(amareloPin, OUTPUT);      // Define o pino do LED amarelo como saída
    pinMode(vermelhoPin, OUTPUT);     // Define o pino do LED vermelho como saída
}

void loop() {
    faseVermelha();
    faseAmarela(); 
    faseVerde();
    faseAmarela(); 
}

void faseVermelha() {
    digitalWrite(vermelhoPin, HIGH);  // Acende o vermelho
    delay(6000);                      // 6 segundos
    digitalWrite(vermelhoPin, LOW);   // Apaga o vermelho
}

void faseAmarela() {
    digitalWrite(amareloPin, HIGH);   // Acende o amarelo
    delay(2000);                      // 2 segundos
    digitalWrite(amareloPin, LOW);    // Apaga o amarelo
}

void faseVerde() {
    digitalWrite(verdePin, HIGH);     // Acende o verde
    delay(4000);                      // 4 segundos
    digitalWrite(verdePin, LOW);      // Apaga o verde
}
