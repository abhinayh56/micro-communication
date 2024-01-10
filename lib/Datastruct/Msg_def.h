#ifndef MSG_DEF
#define MSG_DEF

#include "Datastruct.h"

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

#endif