#include <iostream>
#include <map>

using namespace std;

class AirportRecord {
    public:
        string code;
        string name;
        string city;
        string country;
        int latDegree;
        int latMinute;
        int latSecond;
        string latDirection;
        int lonDegree;
        int lonMinute;
        int lonSecond;
        string lonDirection;
        int alt;

    AirportRecord() {};
    ~AirportRecord() {};
}