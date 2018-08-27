//#define led1 1
//#define led2 2
//#define led3 3
//define led4 4
//#define led5 5
//#define led6 6
//#define led7 7
//     1   2   3
//         4
//     5   6   7
#define botao 8

void setup()
  {
    for(int i =1 ;i<=7;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW); //seta em low todos leds e como saída
  }
  
  randomSeed(analogRead(0));
  pinMode(botao,INPUT_PULLUP); //seta pino do botao como input pull-up
  
  }
  
void RandomLed (int demora)
  {int r;
    r=random(1,8);
    digitalWrite(r,HIGH); //acende um led aleatório
    delay(demora); //deixa ligado por um tempo determinado
    digitalWrite(r,LOW); // apaga o led que acendeu
  }
  
void loop()
  {
   if(digitalRead(botao)==LOW)
   {
    for (int a=0;a<100;a++) //criar efeitinho
    {
      RandomLed(50);
    }
    for (int i=1;i<=10;i++) //criar efeitinho
    {
      RandomLed(i*100);
    }
    
    int dado;
    dado=random(1,7); //número que saiu no dado
    
    if(dado==1)
    {
      digitalWrite(4,HIGH);      
    }
    else if(dado==2)
    {
      digitalWrite(1,HIGH);
      digitalWrite(7,HIGH);
    }
    else if(dado==3)
    {
      digitalWrite(1,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(7,HIGH);      
    }
    else if(dado==4)
    {
      digitalWrite(1,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
    }
    else if(dado==5)
    {
      digitalWrite(1,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
    }
    else if(dado==6)
    {
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
    }

  }
  }
