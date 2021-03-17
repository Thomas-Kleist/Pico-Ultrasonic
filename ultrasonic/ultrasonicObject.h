class Ultrasonic
{
    private:
    int trigPin;
    int echoPin;

    public:
    Ultrasonic(int trigPin, int echoPin);
    int getCM();
    int getINCH();
};