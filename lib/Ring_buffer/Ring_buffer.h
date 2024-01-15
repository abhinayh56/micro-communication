#ifndef RING_BUFFER
#define RING_BUFFER

#include <stdint.h>

class Ring_buffer{
    public:
        Ring_buffer();
        uint8_t read();
        void write(uint8_t data);
        void flush();

    private:
        const static uint16_t buff_size = 1000;
        uint8_t buff[buff_size];
        uint16_t write_index = 0;
        uint16_t read_index  = 0;
};

#endif