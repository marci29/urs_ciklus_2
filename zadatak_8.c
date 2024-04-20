/* 8. Napisati program koji na serijsko sučelje jednom ispiše sve znakove 8-bitne ASCII tablice redom,
bez obzira radi li se o alfanumeričkim ili specijalnim znakovima. Na sustavu STM32F407, za slanje znakova koristiti izlaz USART2 i funkciju printf(). 
Potrebno je napraviti retargeting ulazno-izlaznih funkcija koje posredno koriste semihosting. 
Pretpostaviti da je inicijalizacija Flasha i izvora takta napravljena. 
Također pretpostaviti da je zadana funkcija oblika init_USART2() za inicijalizaciju USART sučelja i GPIO priključaka. 
Slanje započinje upisom u najniži bajt registra USART_DR a završava nakon što se postavi 7. bit u registru USART_SR. 
Ponovnim upisom u najniži bajt USART_DR 7. bit USART_SR se automatski briše. */
