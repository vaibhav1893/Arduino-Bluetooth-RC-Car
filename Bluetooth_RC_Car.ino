#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3);   // RX, TX

// L298N Pins
#define ENA 5
#define ENB 6

#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

int speedValue = 200;

void setup()
{
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    analogWrite(ENA, speedValue);
    analogWrite(ENB, speedValue);

    Serial.begin(9600);
    BT.begin(9600);

    stopMotors();
}

void loop()
{
    if (BT.available())
    {
        char cmd = BT.read();

        Serial.println(cmd);

        switch(cmd)
        {
            case 'F':
                forward();
                break;

            case 'B':
                backward();
                break;

            case 'L':
                left();
                break;

            case 'R':
                right();
                break;

            case 'S':
                stopMotors();
                break;

            case '1':
                speedValue = 120;
                setSpeed();
                break;

            case '2':
                speedValue = 180;
                setSpeed();
                break;

            case '3':
                speedValue = 255;
                setSpeed();
                break;
        }
    }
}

void setSpeed()
{
    analogWrite(ENA, speedValue);
    analogWrite(ENB, speedValue);
}

void forward()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);

    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}

void backward()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);

    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}

void left()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);

    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}

void right()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);

    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}

void stopMotors()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);

    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}
