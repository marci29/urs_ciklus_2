/* 6. Kod koristi TCA0 sklop u Normal Opreation načinu rada za implementaciju vlastite funkcije za realizaciju blokirajuće pauze. 
Nadopuniti kod tako da pauza traje 500ms.
Napomena: Za upisivanje vrijednosti u registre koristiti heksadekadske vrijednosti dobivene iz odgovarajućih registara u pomoćnom dokumentu za ispit. */

#define F_CPU 3333333
void delay(uint16_t ms){
	while(ms--){
		// wait for OVF

		// clear OVF flag

	}
}
void main() {
uint16_t period;
	TCAO.SINGLE.CTRLB = ;  	// set Normal mode
	period = 	                             	// set period to 1 ms
	TCAO.SINGLE.PER = period;
	TCAO.SINGLE.INTFLAGS |=;  		// clear overflow flag
	TCAO.SINGLE.CTRLA = 	;  	// prescaler x1; enable TCA (run timer)
	…
	delay(500);
	…
}
