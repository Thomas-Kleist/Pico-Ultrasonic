#include "ultrasonicObject.h"
extern "C" {
#include "ultrasonic.h"
}

Ultrasonic::Ultrasonic(int trigPinToSet, int echoPinToSet)
{
    trigPin = trigPinToSet;
    echoPin = echoPinToSet;
    setupUltrasonicPins(trigPin, echoPin);
}

int Ultrasonic::getCM()
{
    return getCm(trigPin, echoPin);
}

int Ultrasonic::getINCH()
{
    return getInch(trigPin, echoPin);
}