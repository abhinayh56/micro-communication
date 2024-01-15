#include "Ring_buffer.h"

Ring_buffer::Ring_buffer(){
}

uint8_t Ring_buffer::read(){
    if (read_index == write_index){
        // buffer is empty
    }

    uint8_t data = buff[read_index];
    read_index = (read_index + 1) % buff_size;
    return data;
}

void Ring_buffer::write(uint8_t data){
    if ((write_index + 1) % buff_size == read_index){
        // buffer is full, avoid overflow
    }

    buff[write_index] = data;
    write_index = (write_index + 1) % buff_size;
}

void Ring_buffer::flush(){
    write_index = 0;
    read_index  = 0;
}