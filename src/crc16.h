#include <inttypes.h>

uint16_t crc16(const char* data, uint16_t len)
{
	uint16_t crc = 0xFFFF;

	while (len--) {
		crc ^= *data++ << 8;

		for (int i = 0; i < 8; i++) {
			crc = crc & 0x8000 ? (crc << 1) ^ 0x1021 : crc << 1;
		}
	}

	return crc;
}