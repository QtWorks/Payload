#include "StarPacket0x01.h"
//x is the number to edit
//k selects the bit (0 - 31)
//b is what to set the bit to (1 or 0)
uint32_t SetBit(uint32_t x, unsigned char k, bool b) {
	if(b) {
	    return ( x | (0x01 << k) );
	}
	else {
	    return ( x & ~(0x01 << k) );
	}
}
//x is the number to check
//k is the bit to report within x
bool GetBit(uint32_t x, unsigned char k) {
	return ( x & (0x01 << k) ) != 0;
}

StarPacket0x01::StarPacket0x01() {
    packet = 0x0002A; //asterisk = 0x2A
}
void StarPacket0x01::setConnectivityBit(bool x) {
    if(x) {
        packet = SetBit(packet, 8, 1);
    }
    else {
        packet = SetBit(packet, 8, 0);
    }
}
bool StarPacket0x01::getConnectivityBit() {
    return GetBit(packet, 8);
}

void StarPacket0x01::setPingServerBit(bool x) {
    if(x) {
        packet = SetBit(packet, 9, 1);
    }
    else {
        packet = SetBit(packet, 9, 0);
    }
}
bool StarPacket0x01::getPingServerBit() {
    return GetBit(packet, 9);
}

void StarPacket0x01::setNetworkBit(bool x) {
    if(x) {
        packet = SetBit(packet, 10, 1);
    }
    else {
        packet = SetBit(packet, 10, 0);
    }
}
bool StarPacket0x01::getNetworkBit() {
    return GetBit(packet, 10);
}

void StarPacket0x01::setCaptureBit(bool x) {
    if(x) {
        packet = SetBit(packet, 14, 1);
    }
    else {
        packet = SetBit(packet, 14, 0);
    }
}
bool StarPacket0x01::getCaptureBit() {
    return GetBit(packet, 14);
}

void StarPacket0x01::setNamingBit(bool x) {
    if(x) {
        packet = SetBit(packet, 15, 1);
    }
    else {
        packet = SetBit(packet, 15, 0);
    }
}
bool StarPacket0x01::getNamingBit() {
    return GetBit(packet, 15);
}

void StarPacket0x01::setADLCBit(bool x) {
    if(x) {
        packet = SetBit(packet, 16, 1);
    }
    else {
        packet = SetBit(packet, 16, 0);
    }
}
bool StarPacket0x01::getADLCBit() {
    return GetBit(packet, 16);
}

void StarPacket0x01::setTransmissionBit(bool x) {
    if(x) {
        packet = SetBit(packet, 17, 1);
    }
    else {
        packet = SetBit(packet, 17, 0);
    }
}
bool StarPacket0x01::getTransmissionBit() {
    return GetBit(packet, 17);
}