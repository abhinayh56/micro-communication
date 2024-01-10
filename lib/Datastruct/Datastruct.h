#ifndef DATASTRUCT
#define DATASTRUCT

#include <stdint.h>

#pragma pack(push, 1)
struct Tx_Rx_packet_i{
    uint8_t start;
    uint8_t msg_id;
    uint8_t msg_seq;
    uint8_t len;
    uint8_t payload[4];
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_c{
    uint8_t start;
    uint8_t msg_id;
    uint8_t msg_seq;
    uint8_t len;
    uint8_t payload[1];
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_b{
    uint8_t start;
    uint8_t msg_id;
    uint8_t msg_seq;
    uint8_t len;
    uint8_t payload[1];
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_f{
    uint8_t start;
    uint8_t msg_id;
    uint8_t msg_seq;
    uint8_t len;
    uint8_t payload[4];
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_d{
    uint8_t start;
    uint8_t msg_id;
    uint8_t msg_seq;
    uint8_t len;
    uint8_t payload[8];
    uint8_t chk;
};
#pragma pack(pop)

#endif