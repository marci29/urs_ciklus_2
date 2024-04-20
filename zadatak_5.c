/* 5. Kod koristi TCA0sklop u Normal Opreation načinu rada za implementaciju vlastite funkcije za realizaciju blokirajuće pauze. 
Nadopuniti kod tako da pauza traje 500ms.
Napomena: Za upisivanje vrijednosti u registre koristiti heksadekadske vrijednosti dobivene iz odgovarajućih registara u pomoćnom dokumentu za ispit. */

#define F_CPU 3333333
void delay(uint16_t ms){
	while(ms--){
		// wait for OVF
		_________________________ // (TCA0.SINGLE.INTFLAGS & 0x01)

		// clear OVF flag
		
   		 ________________________ // (0x01)
	}
}
void main() {
uint16_t period;
	TCAO.SINGLE.CTRLB = ________	// set Normal mode 0 (0x00)
	period = __________ // set period to 1 ms
	TCAO.SINGLE.PER = ________;
	TCAO.SINGLE.INTFLAGS |= ______ // clear overflow flag (0x01)
	TCAO.SINGLE.CTRLA = ___________  // prescaler x1; enable TCA (run timer)
	…
	delay(500);
	…
}
