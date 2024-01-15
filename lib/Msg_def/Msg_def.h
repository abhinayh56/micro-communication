#ifndef MSG_DEF
#define MSG_DEF

#include "Datastruct.h"
#include "Arduino.h"
#include "Ring_buffer.h"

// list of message names / ID
#define HEART_BEAT    = 0
#define KP            = 1
#define KI            = 2
#define KD            = 3
#define U_MAX         = 4
#define ENCODER_COUNT = 5
#define ENCODER_ANGLE = 6
#define ENCODER_SPEED = 7
#define MOTOR_ANGLE   = 8
#define MOTOR_SPEED   = 9
#define MOTOR_V       = 10
#define MOTOR_I       = 11

// data type of message
#define HEART_BEAT_TYPE    TYPE_BOOL
#define KP_TYPE            TYPE_FLOAT
#define KI_TYPE            TYPE_FLOAT
#define KD_TYPE            TYPE_FLOAT
#define U_MAX_TYPE         TYPE_FLOAT
#define ENCODER_COUNT_TYPE TYPE_INT_32
#define ENCODER_ANGLE_TYPE TYPE_DOUBLE
#define ENCODER_SPEED_TYPE TYPE_DOUBLE
#define MOTOR_ANGLE_TYPE   TYPE_DOUBLE
#define MOTOR_SPEED_TYPE   TYPE_DOUBLE
#define MOTOR_V_TYPE       TYPE_DOUBLE
#define MOTOR_I_TYPE       TYPE_DOUBLE

// length of message in payload
#define HEART_BEAT_LEN    LEN_BOOL
#define KP_LEN            LEN_FLOAT
#define KI_LEN            LEN_FLOAT
#define KD_LEN            LEN_FLOAT
#define U_MAX_LEN         LEN_FLOAT
#define ENCODER_COUNT_LEN LEN_INT_32
#define ENCODER_ANGLE_LEN LEN_DOUBLE
#define ENCODER_SPEED_LEN LEN_DOUBLE
#define MOTOR_ANGLE_LEN   LEN_DOUBLE
#define MOTOR_SPEED_LEN   LEN_DOUBLE
#define MOTOR_V_LEN       LEN_DOUBLE
#define MOTOR_I_LEN       LEN_DOUBLE

void send_HEART_BEAT(BOOL val){
    Tx_Rx_packet_BOOL temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_BOOL)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_BOOL));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_BOOL));
}

void send_KP(FLOAT val){
    Tx_Rx_packet_FLOAT temp_str; 
    temp_str.payload = val; 

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_FLOAT)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_FLOAT));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_FLOAT));
}

void send_KI(FLOAT val){
    Tx_Rx_packet_FLOAT temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_FLOAT)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_FLOAT));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_FLOAT));
}

void send_KD(FLOAT val){
    Tx_Rx_packet_FLOAT temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_FLOAT)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_FLOAT));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_FLOAT));
}

void send_U_MAX(FLOAT val){
    Tx_Rx_packet_FLOAT temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_FLOAT)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_FLOAT));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_FLOAT));
}

void send_ENCODER_COUNT(INT_32 val){
    Tx_Rx_packet_INT_32 temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_INT_32)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_INT_32));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_INT_32));
}

void send_ENCODER_ANGLE(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

void send_ENCODER_SPEED(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

void send_MOTOR_ANGLE(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val;

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

void send_MOTOR_SPEED(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val; 

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

void send_MOTOR_V(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val; 

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

void send_MOTOR_I(DOUBLE val){
    Tx_Rx_packet_DOUBLE temp_str; 
    temp_str.payload = val; 

    uint8_t byte_arr[sizeof(struct Tx_Rx_packet_DOUBLE)];
    memcpy(byte_arr, &temp_str, sizeof(struct Tx_Rx_packet_DOUBLE));
    Serial.write(byte_arr, sizeof(struct Tx_Rx_packet_DOUBLE));
}

#endif