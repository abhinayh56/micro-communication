#ifndef DATASTRUCT
#define DATASTRUCT

#include <stdint.h>

// https://logicio.com/HTML/datatypesandvariables.htm

// data type names
#define TYPE_BOOL     0
#define TYPE_CHAR     1
#define TYPE_INT_8    2
#define TYPE_U_INT_8  3
#define TYPE_INT_16   4
#define TYPE_U_INT_16 5
#define TYPE_INT_32   6
#define TYPE_U_INT_32 7
#define TYPE_INT_64   8
#define TYPE_U_INT_64 9
#define TYPE_FLOAT    10
#define TYPE_DOUBLE   11

// data type size in bytes
#define LEN_BOOL     1
#define LEN_CHAR     1
#define LEN_INT_8    1
#define LEN_U_INT_8  1
#define LEN_INT_16   2
#define LEN_U_INT_16 2
#define LEN_INT_32   4
#define LEN_U_INT_32 4
#define LEN_INT_64   8
#define LEN_U_INT_64 8
#define LEN_FLOAT    4
#define LEN_DOUBLE   8

#define PKT_START 0x21

#pragma pack(push, 1)
struct Tx_Rx_packet_BOOL{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    bool    payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_CHAR{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    char    payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_INT_8{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    int8_t  payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_U_INT_8{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    uint8_t payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_INT_16{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    int16_t payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_U_INT_16{
    uint8_t  start = PKT_START;
    uint8_t  msg_id;
    uint8_t  msg_seq = 0;
    uint16_t payload;
    uint8_t  chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_INT_32{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    int32_t payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_U_INT_32{
    uint8_t  start = PKT_START;
    uint8_t  msg_id;
    uint8_t  msg_seq = 0;
    uint32_t payload;
    uint8_t  chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_INT_64{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    int64_t payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_U_INT_64{
    uint8_t  start = PKT_START;
    uint8_t  msg_id;
    uint8_t  msg_seq = 0;
    uint64_t payload;
    uint8_t  chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_FLOAT{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    float   payload;
    uint8_t chk;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Tx_Rx_packet_DOUBLE{
    uint8_t start = PKT_START;
    uint8_t msg_id;
    uint8_t msg_seq = 0;
    double  ayload;
    uint8_t chk;
};
#pragma pack(pop)

#endif