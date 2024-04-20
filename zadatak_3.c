/* 3. Kod koristi TCAO sklop u PWM(single slope) načinu rada za generiranje PWM signala s radnim omjerom 75% na pinu PD2(korištenje CMP2 compare kanala). 
Nadopuniti kod tako da program radi opisanu funkciju. 
Napomena: Za upisivanje vrijednosti u registre koristiti heksadekadske vrijednosti dobivene iz odgovarajućih registara u pomoćnom dokumentu za ispit. */

#define F_CPU 3333333
void main() { 
uint16_t period;

       TCA0.SINGLE.CTRLB |= ;  // postavi mod single slope PWM (0x3)
       TCA0.SINGLE.CTRLB |= ;  		// omoguci CMP2
       period = ;  		// izracunaj period iz F_CPU
       TCA0.SINGLE.PER = ;
       TCA0.SINGLE.CMP2 = ;  		// izracunaj vrijednost compare registra

       PORTMUX.TCAROUTEA= ;  // povezi CMP2 s PORTD 
       TCA.SINGLE.CTRLA |= ;  	// pokreni TCA0
       while(1);
}
