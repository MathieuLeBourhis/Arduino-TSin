/* début du programme
Nom : Cligno_LED13 
Fonctionnement : Commande sans arrêt le clignotement
 d'une LED. 
Les temps ON (active ou allumée) et OFF (inactive ou éteinte) 
sont identiques : 0.1s. La LED celle connectée sur la broche 13. 
*/ 

void setup() 
{
    pinMode(6, OUTPUT);     // la broche 13 est définie en sortie. 
}

void loop() 
{
    digitalWrite(6, HIGH);     // allume la LED 
    delay(1000);     // attend, en ms, le temps indiqué entre parenthèse
   digitalWrite(6, LOW);     // éteint la LED 
   delay(2000);     // attend, en ms, le temps indiqué entre parenthèse 
}
    //fin du programme//
