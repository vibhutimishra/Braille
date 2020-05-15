/*

*/
#include<Servo.h>

Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(7);
  servo5.attach(8);
  servo6.attach(9);
  Serial.begin(9600);
}
void func1(int str[6],int a,int b,int c, int d, int e, int f)
{
    str[0]=a;
    str[1]=b;
    str[2]=c;
    str[3]=d;
    str[4]=e;
    str[5]=f;
}

char inchar;
int str[6];

void loop() {




    if(Serial.available()>0)
    {
      inchar=Serial.read();
    }

    switch(inchar)
        {
            case ' ':func1(str,0,0,0,0,0,0);
                     break;
            case '!':func1(str,0,1,1,0,1,1);
                     break;
            case '"':func1(str,0,0,0,1,0,0);
                     break;
            case '#':func1(str,0,1,0,1,1,1);
                     break;
            case '$':func1(str,1,1,1,0,0,1);
                     break;
            case '%':func1(str,1,1,0,0,0,1);
                     break;
            case '&':func1(str,1,1,1,0,1,1);
                     break;
            case '(':func1(str,1,0,1,1,1,1);
                     break;
            case ')':func1(str,1,1,1,1,1,1);
                     break;
            case '*':func1(str,1,0,0,0,0,1);
                     break;
            case '+':func1(str,0,1,0,0,1,1);
                     break;
            case ',':func1(str,0,0,0,0,0,1);
                     break;
            case '-':func1(str,0,0,0,0,1,1);
                     break;
            case '.':func1(str,0,1,0,0,0,1);
                     break;
            case '/':func1(str,0,1,0,0,1,0);
                     break;
            case '0':func1(str,0,0,0,1,1,1);
                     break;
            case '1':func1(str,0,0,1,0,0,0);
                     break;
            case '2':func1(str,0,0,1,0,1,0);
                     break;
            case '3':func1(str,0,0,1,1,0,0);
                     break;
            case '4':func1(str,0,0,1,1,0,1);
                     break;
            case '5':func1(str,0,0,1,0,0,1);
                     break;
            case '6':func1(str,0,0,1,1,1,0);
                     break;
            case '7':func1(str,0,0,1,1,1,1);
                     break;
            case '8':func1(str,0,0,1,0,1,1);
                     break;
            case '9':func1(str,0,0,0,1,1,0);
                     break;
            case ':':func1(str,1,0,0,1,0,1);
                     break;
            case ';':func1(str,0,0,0,1,0,1);
                     break;
            case '<':func1(str,1,0,1,0,0,1);
                     break;
            case '=':func1(str,1,1,1,1,1,1);
                     break;
            case '>':func1(str,0,1,0,1,1,0);
                     break;
            case '?':func1(str,1,1,0,1,0,1);
                     break;
            case '@':func1(str,0,1,0,0,0,0);
                     break;
            case 'a':func1(str,1,0,0,0,0,0);
                     break;
            case 'b':func1(str,1,0,1,0,0,0);
                     break;
            case 'c':func1(str,1,1,0,0,0,0);
                     break;
            case 'd':func1(str,1,1,0,1,0,0);
                     break;
            case 'e':func1(str,1,0,0,1,0,0);
                     break;
            case 'f':func1(str,1,1,1,0,0,0);
                     break;
            case 'g':func1(str,1,1,1,1,0,0);
                     break;
            case 'h':func1(str,1,0,1,1,0,0);
                     break;
            case 'i':func1(str,0,1,1,0,0,0);
                     break;
            case 'j':func1(str,0,1,1,1,0,0);
                     break;
            case 'k':func1(str,1,0,0,0,1,0);
                     break;
            case 'l':func1(str,1,0,1,0,1,0);
                     break;
            case 'm':func1(str,1,1,0,0,1,0);
                     break;
            case 'n':func1(str,1,1,0,1,1,0);
                     break;
            case 'o':func1(str,1,0,0,1,1,0);
                     break;
            case 'p':func1(str,1,1,1,0,1,0);
                     break;
            case 'q':func1(str,1,1,1,1,1,0);
                     break;
            case 'r':func1(str,1,0,1,1,1,0);
                     break;
            case 's':func1(str,0,1,1,0,1,0);
                     break;
            case 't':func1(str,0,1,1,1,1,0);
                     break;
            case 'u':func1(str,1,0,0,0,1,1);
                     break;
            case 'v':func1(str,1,0,1,0,1,1);
                     break;
            case 'w':func1(str,0,1,1,1,0,1);
                     break;
            case 'x':func1(str,1,1,0,0,1,1);
                     break;
            case 'y':func1(str,1,1,0,1,1,1);
                     break;
            case 'z':func1(str,1,0,0,1,1,1);
                     break;
            case 91:func1(str,0,1,1,0,0,1);
                    break;
            case 92:func1(str,1,0,1,1,0,1);
                    break;
            case 93:func1(str,1,1,1,1,0,1);
                    break;
            case '^':func1(str,0,1,0,1,0,0);
                     break;
            case '_':func1(str,0,1,0,1,0,1);
                     break;
        }



    if(str[0]==1)
    {
      servo1.write(90);
    }
    else if(str[0]==0)
    {
      servo1.write(0);
    }




    if(str[1]==1)
    {
      servo2.write(90);
    }
    else if(str[1]==0)
    {
      servo2.write(0);
    }
    if(str[2]==1)
    {
      servo3.write(90);
    }
    else if(str[2]==0)
    {
      servo3.write(0);
    }
    if(str[3]==1)
    {
      servo4.write(90);
    }
    else if(str[3]==0)
    {
      servo4.write(0);
    }
    if(str[4]==1)
    {
      servo5.write(90);
    }
    else if(str[4]==0)
    {
      servo5.write(0);
    }
    if(str[5]==1)
    {
      servo6.write(90);
    }
    else if(str[5]==0)
    {
      servo6.write(0);
    }

    Serial.print(inchar);
}
