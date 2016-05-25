#ifndef _ARM_GEN
#define _ARM_GEN

// ------ ARM GENERAL DEFINITIONS -----------

// ------ CONSTANTS -------------------------

#define MEMORY_CAPACITY 65536
#define TOTAL_REGISTERS 17
#define GEN_PURPOSE_REG 13
#define INSTRUCTION_BYTE_SIZE 4

// ------ PIPELINE --------------------------                                   

typedef struct Pipeline
{
    int32_t* fetched;
    int32_t* decoded;
} Pipeline;

// ------ CURRENT STATE  --------------------                                      

typedef struct CurrentState
{
    Pipeline *pipeline;
    int32_t* registers[GEN_PURPOSE_REG];
    int PC;
    int32_t* CPRS;
    int8_t memory[MEMORY_CAPACITY];
} CurrentState;

#endif
