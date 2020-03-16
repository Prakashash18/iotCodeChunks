void setup() {
  Particle.subscribe("menu_PC", menuHandler, MY_DEVICES);
  printMenu();
}

void loop(){
  // DO NOT EDIT
  //*****************************
}

void printMenu(){
  //fill up this function to print menu

}

void menuHandler(const char *event, const char *data){
  Serial.print("Selected ");
  Serial.print(event);
  Serial.print(" option ");
  Serial.println(data);


}
