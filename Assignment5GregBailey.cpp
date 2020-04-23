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

void inputAirportRecord(AirportRecord& airportRecord) {
    string filename = "air16.txt";
    File input;
    Boolean successful;
    AirportRecord r;
    int dataSize;

    input.openFile(filename, File::openForRead, successful);
    if(successful) {
        input.read(dataSize, successful);
        for (int i = 0, i < dataSize; i++) {
            input.read(r.code, successful);
            input.read(r.name, successful);
            input.read(r.city, successful);
            input.read(r.county, successful);
            input.read(r.latDegree, successful);
            input.read(r.latMinute, successful);
            input.read(r.latSecond, successful);
            input.read(r.latDirection, successful);
            input.read(r.lonDegree, successful);
            input.read(r.lonMinute, successful);
            input.read(r.lonSecond successful);
            input.read(r.lonDirection, successful);
            input.read(r.alt);
        } // end for
    } // end if
} // inputAirportRecord

int main() {

} // end main