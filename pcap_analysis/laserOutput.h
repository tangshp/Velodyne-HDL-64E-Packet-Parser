#include <pcap.h>
#include "packetOutput.h"
#include <string>

class laserOutput : public packetOutput{
private:

public:
	laserOutput(string outFile) : packetOutput(outFile) {
		fprintf(pktFile, "Packet Data\n");

		fprintf(pktFile,
			"%s%s%s%s%s%s%s%s",
			"GPS Timestamp,",
			"Timestamp in us,",
			"Status Type,",
			"Status Type Decimal,",
			"Status Type ASCII,",
			"Status Value,",
			"Status Value Decimal,",
			"Status Value ASCII\n");
	}

	//Takes in a pointer to beginning of the packet. Requires
	//that packptr points to memory allocated at 1248 bytes
	void printCalibrationData(const u_char* packptr){

	}

	~laserOutput(){}
};