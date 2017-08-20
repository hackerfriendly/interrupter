/*
 * constants.h
 * Contains defined constants, user-modifiable macros, and structures
 * Read the manual to see what to modify
 */
 
#ifndef __CONSTANTS_H

#include "system.h"

/****Coil-dependent configuration variables: change these to match your coil****/

//multiply the pulsewidths by this constant, good for quick 'n dirty scaling
#define LOOKUP_TABLE_SCALE 2

//minimum on-time, in microseconds
#define MIN_ON_TIME 5

//on-times in microseconds, don't forget to multiply by LOOKUP_TABLE_SCALE!
#define ON_TIME_ARRAY_LENGTH 20
static int on_times[] = 
{33, 33, 33, 33, 27, 23, 20, 20, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7};

/****End coil config variables****/

/****Instrument-dependent configuration variables: change to match your MIDI device****/

//sustain time, in microseconds
#define SUSTAIN_TIME 750000

//velocity mapping table
static byte vel_map[] =
{128, 128, 129, 129, 130, 130, 131, 131, 132, 132, 133, 133, 134, 134, 135, 135,
 136, 136, 137, 137, 138, 138, 139, 139, 140, 140, 141, 141, 142, 142, 143, 143,
 144, 144, 145, 145, 146, 146, 147, 147, 148, 148, 149, 149, 150, 150, 151, 151,
 152, 152, 153, 153, 154, 154, 155, 155, 156, 156, 157, 157, 158, 158, 159, 159,
 160, 160, 161, 161, 162, 162, 163, 163, 164, 164, 165, 165, 166, 166, 167, 167,
 168, 168, 169, 169, 170, 170, 171, 171, 172, 172, 173, 173, 174, 174, 175, 175,
 176, 176, 177, 177, 178, 178, 179, 179, 180, 181, 181, 182, 182, 183, 183, 184,
 184, 185, 185, 186, 186, 187, 187, 188, 188, 189, 189, 190, 190, 191, 191, 192, 
 192, 193, 193, 194, 194, 195, 195, 196, 196, 197, 197, 198, 198, 198, 199, 199,
 200, 200, 201, 201, 202, 202, 203, 203, 204, 204, 205, 205, 206, 206, 207, 207,
 208, 208, 209, 209, 210, 210, 211, 211, 212, 212, 213, 213, 214, 214, 215, 215,
 216, 216, 217, 217, 218, 218, 219, 219, 220, 220, 221, 221, 222, 222, 223, 223,
 224, 224, 225, 225, 226, 226, 227, 227, 228, 228, 229, 229, 230, 230, 231, 231, 
 232, 232, 233, 233, 234, 234, 235, 235, 236, 236, 237, 237, 238, 238, 239, 239,
 240, 240, 241, 241, 242, 242, 243, 243, 244, 244, 245, 245, 246, 246, 247, 247,
 248, 248, 249, 249, 250, 250, 251, 251, 252, 252, 253, 253, 254, 254, 255, 255};
 
//lets us change the way velocity mapping works (linear, LUT, something else...)
#define map_velocity(v) (vel_map[v])

//map the sustain time as well
#define map_sustain(t) ((float) t / (float) SUSTAIN_TIME)
/****End instrument config variables****/

/****System stuff****/
#define NOTE_BUFFER_SIZE 4

//don't mess with these!
#define BITS_8 256
#define BITS_16 65536
#define TIMER_2_MIN 35

#define __CONSTANTS_H
#endif
