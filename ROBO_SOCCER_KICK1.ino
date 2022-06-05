#define l_f 7
#define l_b 8
#define r_f 9
#define r_b 10
#define kick_f 3
#define kick_b 4
#define en1 5
#define en2 6
int speedCar = 255;
int speedCarr = 125;
int speed_Coeff = 4; 
int command;
void setup() {
  pinMode(l_f, OUTPUT);
  pinMode(l_b, OUTPUT);
  pinMode(r_f, OUTPUT);
  pinMode(r_b, OUTPUT);
  pinMode(kick_f, OUTPUT);
  pinMode(kick_b, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  Serial.begin(9600);

 
}


  void forward()
{
  analogWrite(en1, speedCar);
  analogWrite(en2, speedCar);
  digitalWrite(l_f, 1);
  digitalWrite(l_b, 0);
  digitalWrite(r_f, 0);
  digitalWrite(r_b, 1);
}

void backward()
{
   analogWrite(en1, speedCar);
  analogWrite(en2,speedCar);
  digitalWrite(l_f, 0);
  digitalWrite(l_b, 1);
  digitalWrite(r_f, 1);
  digitalWrite(r_b, 0);
}

void left()
{
   analogWrite(en1,speedCar);
  analogWrite(en2,speedCar);
  digitalWrite(l_f, 0);
  digitalWrite(l_b, 1);
  digitalWrite(r_f, 0);
  digitalWrite(r_b, 1);
  
}

void right()
{
   analogWrite(en1, speedCar);
  analogWrite(en2, speedCar);
  digitalWrite(l_f, 1);
  digitalWrite(l_b, 0);
  digitalWrite(r_f, 1);
  digitalWrite(r_b, 0);
 
}
  void kstop()
{
   analogWrite(en1, 0);
  analogWrite(en2, 0);
  digitalWrite(l_f, 0);
  digitalWrite(l_b, 0);
  digitalWrite(r_f, 0);
  digitalWrite(r_b, 0);
  
}


void forwardright()
{
   analogWrite(en1, speedCarr);
  analogWrite(en2, speedCar);
  digitalWrite(l_f, 1);
  digitalWrite(l_b, 0);
  digitalWrite(r_f, 0);
  digitalWrite(r_b, 1);
}
void forwardleft()
{
   analogWrite(en1, speedCar);
  analogWrite(en2, speedCarr);
  digitalWrite(l_f, 1);
  digitalWrite(l_b, 0);
  digitalWrite(r_f, 0);
  digitalWrite(r_b, 1);
  
}
void backleft()
{
    analogWrite(en1, speedCar);
  analogWrite(en2,speedCarr);
  digitalWrite(l_f, 0);
  digitalWrite(l_b, 1);
  digitalWrite(r_f, 1);
  digitalWrite(r_b, 0);
}
void backright()
{
   analogWrite(en1, speedCarr);
  analogWrite(en2,speedCar);
  digitalWrite(l_f, 0);
  digitalWrite(l_b, 1);
  digitalWrite(r_f, 1);
 digitalWrite(r_b, 0);}
  void kickf()
{
  digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
  
}
void loop() {
  if(Serial.available() >0)
  {
    command = Serial.read();
    kstop();
    if(command!='X'){
    command = Serial.read();  
   switch(command){
    case '0':
        speedCar = 100;
        break;
      case '1':
        speedCar = 140;
        break;
      case '2':
        speedCar = 155;
        break;
      case '3':
        speedCar = 165;
        break;
      case '4':
        speedCar = 180;
        break;
      case '5':
        speedCar = 195;
        break;
      case '6':
        speedCar = 205;
        break;
      case '7':
        speedCar = 220;
        break;
      case '8':
        speedCar = 230;
        break;
      case '9':
        speedCar = 245;
        break;
      case 'q':
        speedCar=255;
        break;
      case 'F':
      forward();
      break;
     case 'R':
    right();
   break;
    case 'B':
    backward();
   break;
    case 'L':
    left();
   break;
   
    case 'I':
    forwardleft();
   break;
    case 'G':
    forwardright();
   break;
    case 'J':
    backleft();
   break; 
   case 'H':
    backright();
   break;
   default:
   kstop();
   break;
   
   
  }
  }
  if(command=='X'){
    command = Serial.read();  
   switch(command){
    case '0':
        speedCar = 100;
        break;
      case '1':
        speedCar = 140;
        break;
      case '2':
        speedCar = 155;
        break;
      case '3':
        speedCar = 165;
        break;
      case '4':
        speedCar = 180;
        break;
      case '5':
        speedCar = 195;
        break;
      case '6':
        speedCar = 205;
        break;
      case '7':
        speedCar = 220;
        break;
      case '8':
        speedCar = 230;
        break;
      case '9':
        speedCar = 245;
        break;
      case 'q':
        speedCar=255;
        break;
      case 'F':
      forward();
        digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
      break;
     case 'R':
       digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    right();
   break;
    case 'B':
      digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    backward();
   break;
    case 'L':
      digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    left();
   break;
   
    case 'I':
      digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    forwardleft();
   break;
    case 'G':
      digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    forwardright();
   break;
    case 'J':
      digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    backleft();
   break; 
   case 'H':
     digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
    backright();
   break;
     digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
   default:
     digitalWrite(kick_f, 1);
  digitalWrite(kick_b, 0);
   kstop();
   break;
   
  }
  }
  }
  
}
