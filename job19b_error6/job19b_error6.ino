void setup() {
  Serial.begin(9600);

  //10 random weights of individuals
  double weights[10] = {50, 60.2, 60.5, 65.1, 69.2, 69.7, 70, 77, 80, 90};
  
  //add 0.5 kg to each person after a heavy lunch
  for(int i=0; i<10; i++){
    weights[i] = weights[i] + 0.5;
  }

  //print the new weights
  for(int i=0; i<10; i++){
    Serial.println(weight[i]);
  }
}

void loop(){

}
