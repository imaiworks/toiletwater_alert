#define BEATTIME 200 //音を出している時間(msec)
#define SPEAKER 12 //スピーカーの出力ピン番号
#define  watorLevelPin  A0 // wator level sensor pin used

int loopcnt=0;
int waterLevel=0;

void setup() {

  // put your setup code here, to run once:
    pinMode(12,OUTPUT);
    Serial.begin(9600);
    loopcnt=0;
}

void loop() {
  // put your main code here, to run repeatedly:



  waterLevel = analogRead(watorLevelPin);
  Serial.println("Water Level: " + String(waterLevel) + "");
  if(waterLevel > 550) {
    
    loopcnt=0;
  }
  else
  {
    loopcnt++;
    Serial.println("loopcnt:"+String(loopcnt));
    
    if(loopcnt>50)
    {
      if(loopcnt%10==0)
      {
        // tone(SPEAKER,262,BEATTIME) ; // ド
        // delay(BEATTIME) ;
        // tone(SPEAKER,330,BEATTIME) ; // ミ
        // delay(BEATTIME) ;
        // tone(SPEAKER,392,BEATTIME) ; // ソ


        tone(SPEAKER,392,BEATTIME) ;//そ
        delay(BEATTIME) ;
        tone(SPEAKER,349,BEATTIME) ; //ふぁ
        delay(BEATTIME) ;
        tone(SPEAKER,330,BEATTIME) ;//み
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        tone(SPEAKER,392,BEATTIME) ;//そ
        delay(BEATTIME) ;
        tone(SPEAKER,523,BEATTIME) ;//ど
        delay(BEATTIME) ;
        tone(SPEAKER,494,BEATTIME) ; //し
        delay(BEATTIME) ;
        
        delay(BEATTIME) ;
        tone(SPEAKER,392,BEATTIME) ; //そ
        delay(BEATTIME) ;
        tone(SPEAKER,555+32,BEATTIME) ; //　れ
        delay(BEATTIME) ;
        tone(SPEAKER,523,BEATTIME) ; // ど
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        tone(SPEAKER,591+36+36,BEATTIME) ; // み
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        delay(BEATTIME) ;

        tone(SPEAKER,523,BEATTIME) ; // ど
        delay(BEATTIME) ;
        tone(SPEAKER,494,BEATTIME) ; //し
        delay(BEATTIME) ;
        tone(SPEAKER,440,BEATTIME) ; //ら
        delay(BEATTIME) ;
        delay(BEATTIME) ;

        tone(SPEAKER,610+36+36+18,BEATTIME) ; // ふぁ
        delay(BEATTIME) ;
        tone(SPEAKER,555+32,BEATTIME) ; //　れ
        delay(BEATTIME) ;
        tone(SPEAKER,523,BEATTIME) ; // ど
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        tone(SPEAKER,494,BEATTIME) ; // し
        delay(BEATTIME) ;
        delay(BEATTIME) ;
        tone(SPEAKER,523,BEATTIME) ; // ど
        delay(BEATTIME) ;
        delay(BEATTIME) ;
      }

    }

  }
  delay(1000) ;
}
