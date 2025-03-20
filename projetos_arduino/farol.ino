int carRed = 12; // assign the car lights
int carYellow = 11;
int carGreen = 10;
int pedRed = 9; // assign the pedestrian lights
int pedGreen = 8;
int buttom = 2; // button pin
int crossTime = 5000; // time allowed to cross
unsigned long changeTime; // time since button pressed

void setup() {
pinMode(carRed, OUTPUT);
pinMode(carYellow, OUTPUT);
pinMode(carGreen, OUTPUT);
pinMode(pedRed, OUTPUT);
pinMode(pedGreen, OUTPUT);
pinMode(buttom, INPUT); // button on pin 2

int carCicle(){
    digitalWrite(carGreen,LOW);
    digitalWrite(carRed,HIGH);
    delay(crossTime);
    digitalWrite(carRed,LOW); //Espera o tempo de passagem e desliga o farol vermelho e liga o amarelo
    
    digitalWrite(carYellow,HIGH);
    delay(1000);
    digitalWrite(carYellow, LOW);
    ;
    delay(2000);
    //return 
    
}

int pedCicle(){
    
}


}

void loop(){
    int buttomstate = digitalRead(buttom);
    car
    
}