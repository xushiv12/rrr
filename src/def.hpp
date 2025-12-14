#define A_S Adafruit_SSD1306
#define GO Wire.begin
#define DO d.begin
#define DO1 d.clearDisplay
#define DO2 d.setTextSize
#define DO3 d.setTextColor
#define DO4 d.setCursor
#define DO5 d.print
#define DO6 d.display
#define D d(128,64,&Wire,-1)
#define stop delay
#define DEF A_S D;
#define S_S SSD1306_SWITCHCAPVCC
#define IP 0x3C
#define happy happyface()
#define sad sadface()
#define anger angerface()
#define cute cuteface() 
#define spin aaa.write
#define RUN void setup()
#define NO void loop(){}
Servo aaa; 
DEF
void happyface(){   
    GO(); 
	DO(S_S,IP); 
	DO1();
	DO2(3);
	DO3(WHITE);
	DO4(0,0);
	DO5("\n O u O");
	DO6();
}
void sadface(){
    GO();    
	DO(S_S,IP); 
	DO1();
	DO2(3);
	DO3(WHITE);
	DO4(0,0);
	DO5("\n O n O");
	DO6();
}
void angerface(){ 
    GO();   
	DO(S_S,IP); 
	DO1();
	DO2(3);
	DO3(WHITE);
	DO4(0,0);
	DO5("\n > m <");
	DO6();
}
void cuteface(){  
    GO();  
	DO(S_S,IP); 
	DO1();
	DO2(3);
	DO3(WHITE);
	DO4(0,0);
	DO5("\n O w O");
	DO6();
}
void set(){
	aaa.attach(A2);
}
class STOP{
	public:
		STOP(){
	    }
	    STOP(uint8_t a){
	    	delay(a);
		}
};
void draw(String sss){
	GO();  
	DO(S_S,IP); 
	DO1();
	DO2(1);
	DO3(WHITE);
	DO4(0,0);
	DO5(sss);
	DO6();
}
