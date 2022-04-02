
const pin_t MY_LED = D0;
SYSTEM_THREAD(ENABLED);

char *name_in_morse[] = {
        "-", ".", "-", "*", // K
        ".", ".", "-", "*", // U
        ".", ".", ".", "*", // S
        ".", ".", ".", ".", "*", // H
        ".", "-", "*",// A
        "-", ".", "*"// N
    };


void setup()
{
	pinMode(MY_LED, OUTPUT);
}


void loop()
{
	
	for(int i = 0; i < sizeof(name_in_morse) / sizeof(char); i++){
	    
	    if (name_in_morse[i]==".")
	    {
            digitalWrite(MY_LED, HIGH);
            delay(1s);
            digitalWrite(MY_LED, LOW);
	    }
	    
	    if(name_in_morse[i]=="-")
	    {
            digitalWrite(MY_LED, HIGH);
            delay(3s);
            digitalWrite(MY_LED, LOW);
	    }
	    
	    if (name_in_morse[i]=="*")
	    {
	        digitalWrite(MY_LED, LOW);
            delay(3s);
	    }
	    
	    digitalWrite(MY_LED, LOW);
        delay(3s);
	}
}
