/* 1. Prikazan je dio izvornog kôda programa koji koristi TCA0 sklop u Normal operation načinu rada
za implementaciju vlastite funkcijeza realizaciju blokirajuće pauze. 
Nadopunite nedostajuće dijelove programskog kôda tako da program generira pauzu u trajanju od 500 ms.
Napomena: Za upisivanje vrijednosti u registre koristiti heksadecimalne vrijednosti dobivene iz odgovarajućih registara u pomoćnoj dokumentaciji za ispit. */

#define F_CPU 3333333
void delay(uint16_t ms) 
	while(ms--) {
	____________________;
	____________________;
	}
}
void main() {
	uint16_t period;
	TCA0.SINGLE.CTRLB = _______________;
	period = ____________;
	TCA0.SINGLE.PER = period;
	TCA0.SINGLE.INTFLAGS |= _____________;
	TCA0.SINGLE.CTRLA = _____________;
	...
delay(500);
...
}
