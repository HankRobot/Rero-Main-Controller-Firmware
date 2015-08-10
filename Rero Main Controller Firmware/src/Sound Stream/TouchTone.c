/*******************************************************************************
 * Wave file for touch tone.
 * The original wave file was downloaded from http://www.freesfx.co.uk/
 *
 * Company: Cytron Technologies Sdn Bhd
 * Website: http://www.cytron.com.my
 * Email:   support@cytron.com.my
 *******************************************************************************/

#include "Sound Stream/TouchTone.h"



/*******************************************************************************
* PUBLIC GLOBAL VARIABLES                                                      *
*******************************************************************************/

const unsigned char pucTouchTone[] = {
    0x7E, 0x8F, 0x66, 0x99, 0x72, 0x85, 0x90, 0x78, 0xC2, 0x2D, 0x80, 0xA0,
    0x36, 0x75, 0x6F, 0x78, 0x99, 0x97, 0x79, 0x72, 0xBA, 0x4F, 0x95, 0xA0,
    0x58, 0xAE, 0x74, 0x75, 0x8A, 0x6A, 0x99, 0x6D, 0x89, 0x84, 0x81, 0x8B,
    0x77, 0x73, 0x9A, 0x67, 0x88, 0x81, 0x75, 0x96, 0x7C, 0x82, 0x84, 0x7B,
    0x86, 0x7E, 0x7E, 0x7F, 0x8A, 0x7B, 0x7C, 0x87, 0x82, 0x80, 0x86, 0x7F,
    0x7F, 0x83, 0x7E, 0x86, 0x7F, 0x85, 0x81, 0x80, 0x87, 0x7F, 0x81, 0x86,
    0x7F, 0x84, 0x82, 0x7F, 0x84, 0x80, 0x81, 0x85, 0x7F, 0x83, 0x81, 0x81,
    0x83, 0x80, 0x81, 0x80, 0x82, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7C,
    0x7C, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F
};

//const unsigned char pucTouchTone[] = {
//    0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x84, 0x84,
//    0x84, 0x82, 0x84, 0x85, 0x86, 0x83, 0x82, 0x7F, 0x80, 0x7F, 0x81, 0x81,
//    0x82, 0x80, 0x81, 0x81, 0x7F, 0x7F, 0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7B,
//    0x7D, 0x7D, 0x7F, 0x7F, 0x7F, 0x7D, 0x7C, 0x7A, 0x7B, 0x7A, 0x78, 0x74,
//    0x72, 0x77, 0x7A, 0x7D, 0x7D, 0x7E, 0x7D, 0x7E, 0x7C, 0x7D, 0x7C, 0x7A,
//    0x77, 0x78, 0x79, 0x7D, 0x7E, 0x7F, 0x81, 0x82, 0x82, 0x81, 0x7F, 0x80,
//    0x7F, 0x80, 0x7F, 0x81, 0x80, 0x82, 0x85, 0x87, 0x89, 0x85, 0x83, 0x82,
//    0x82, 0x82, 0x81, 0x7F, 0x80, 0x7F, 0x81, 0x82, 0x85, 0x85, 0x82, 0x81,
//    0x7E, 0x7E, 0x7A, 0x7A, 0x7B, 0x7C, 0x7E, 0x7D, 0x7E, 0x7F, 0x7F, 0x7F,
//    0x7E, 0x7E, 0x7A, 0x77, 0x73, 0x76, 0x78, 0x79, 0x76, 0x76, 0x78, 0x7D,
//    0x7E, 0x7F, 0x7E, 0x7D, 0x79, 0x79, 0x79, 0x7B, 0x79, 0x78, 0x77, 0x7B,
//    0x7D, 0x7F, 0x7F, 0x81, 0x80, 0x81, 0x80, 0x7E, 0x7F, 0x7F, 0x81, 0x82,
//    0x85, 0x83, 0x83, 0x83, 0x87, 0x86, 0x85, 0x81, 0x80, 0x7F, 0x80, 0x7F,
//    0x82, 0x83, 0x82, 0x83, 0x84, 0x86, 0x84, 0x81, 0x7E, 0x7D, 0x7B, 0x79,
//    0x76, 0x79, 0x7C, 0x7F, 0x7F, 0x7F, 0x81, 0x7F, 0x7F, 0x7D, 0x7D, 0x78,
//    0x73, 0x6F, 0x72, 0x76, 0x7A, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7D, 0x7D,
//    0x7A, 0x75, 0x74, 0x77, 0x79, 0x7C, 0x7B, 0x7C, 0x7D, 0x7F, 0x80, 0x7F,
//    0x80, 0x7E, 0x7E, 0x7F, 0x7E, 0x80, 0x81, 0x83, 0x87, 0x88, 0x88, 0x84,
//    0x82, 0x83, 0x82, 0x7F, 0x7E, 0x7E, 0x7F, 0x80, 0x82, 0x86, 0x88, 0x87,
//    0x83, 0x83, 0x82, 0x81, 0x7D, 0x7A, 0x7B, 0x7B, 0x79, 0x79, 0x79, 0x7D,
//    0x7F, 0x7F, 0x80, 0x7E, 0x7D, 0x79, 0x79, 0x7A, 0x78, 0x75, 0x71, 0x72,
//    0x76, 0x7C, 0x7D, 0x7E, 0x7D, 0x7A, 0x7A, 0x79, 0x7B, 0x78, 0x75, 0x73,
//    0x76, 0x7B, 0x7D, 0x7F, 0x7F, 0x80, 0x7E, 0x7E, 0x7E, 0x7C, 0x7C, 0x7B,
//    0x7E, 0x81, 0x83, 0x82, 0x85, 0x88, 0x8C, 0x89, 0x85, 0x80, 0x7E, 0x7D,
//    0x79, 0x7A, 0x7C, 0x80, 0x81, 0x85, 0x8A, 0x8E, 0x8A, 0x85, 0x80, 0x7F,
//    0x7A, 0x77, 0x75, 0x77, 0x7B, 0x7C, 0x7D, 0x7F, 0x7F, 0x80, 0x7E, 0x7E,
//    0x7C, 0x76, 0x71, 0x6F, 0x74, 0x78, 0x7A, 0x78, 0x7A, 0x7C, 0x7E, 0x7D,
//    0x7D, 0x7A, 0x72, 0x6D, 0x6E, 0x73, 0x78, 0x77, 0x78, 0x7B, 0x7F, 0x82,
//    0x81, 0x81, 0x7F, 0x7D, 0x78, 0x78, 0x7A, 0x7C, 0x7D, 0x80, 0x86, 0x8A,
//    0x89, 0x86, 0x86, 0x87, 0x83, 0x7F, 0x7A, 0x7B, 0x7B, 0x7C, 0x7D, 0x85,
//    0x8A, 0x8A, 0x87, 0x89, 0x8B, 0x89, 0x81, 0x7A, 0x7A, 0x78, 0x75, 0x71,
//    0x75, 0x7C, 0x7F, 0x81, 0x82, 0x84, 0x81, 0x7C, 0x78, 0x78, 0x76, 0x6F,
//    0x6A, 0x6C, 0x74, 0x7C, 0x7E, 0x81, 0x81, 0x7F, 0x79, 0x77, 0x77, 0x73,
//    0x6B, 0x64, 0x69, 0x72, 0x7C, 0x7E, 0x83, 0x86, 0x89, 0x84, 0x80, 0x7C,
//    0x7A, 0x75, 0x71, 0x74, 0x7A, 0x80, 0x82, 0x89, 0x91, 0x95, 0x8F, 0x85,
//    0x81, 0x7D, 0x76, 0x71, 0x71, 0x79, 0x7E, 0x83, 0x89, 0x95, 0x9B, 0x95,
//    0x8B, 0x83, 0x80, 0x78, 0x6F, 0x6A, 0x70, 0x76, 0x7A, 0x7C, 0x81, 0x88,
//    0x88, 0x85, 0x81, 0x7E, 0x77, 0x6C, 0x68, 0x6C, 0x75, 0x77, 0x78, 0x7D,
//    0x82, 0x85, 0x82, 0x7F, 0x7B, 0x72, 0x66, 0x62, 0x69, 0x71, 0x76, 0x76,
//    0x7C, 0x85, 0x8A, 0x87, 0x85, 0x83, 0x80, 0x77, 0x71, 0x71, 0x76, 0x78,
//    0x7B, 0x81, 0x8B, 0x90, 0x8E, 0x8A, 0x8B, 0x89, 0x83, 0x79, 0x76, 0x76,
//    0x79, 0x7A, 0x7E, 0x89, 0x8E, 0x8E, 0x8C, 0x8E, 0x8E, 0x88, 0x7D, 0x76,
//    0x76, 0x73, 0x71, 0x70, 0x78, 0x80, 0x84, 0x86, 0x87, 0x87, 0x80, 0x76,
//    0x73, 0x72, 0x71, 0x69, 0x68, 0x6F, 0x7C, 0x82, 0x85, 0x86, 0x87, 0x7F,
//    0x74, 0x6D, 0x70, 0x6D, 0x65, 0x60, 0x67, 0x79, 0x83, 0x87, 0x8A, 0x92,
//    0x92, 0x87, 0x79, 0x75, 0x73, 0x6F, 0x68, 0x6E, 0x7C, 0x88, 0x8C, 0x8E,
//    0x96, 0x9A, 0x94, 0x85, 0x79, 0x76, 0x73, 0x6E, 0x70, 0x7B, 0x89, 0x91,
//    0x93, 0x99, 0x9D, 0x9A, 0x8A, 0x7B, 0x71, 0x6E, 0x67, 0x66, 0x6B, 0x79,
//    0x86, 0x8E, 0x90, 0x93, 0x91, 0x8A, 0x7C, 0x6F, 0x66, 0x5F, 0x5F, 0x62,
//    0x6E, 0x7A, 0x87, 0x8E, 0x90, 0x90, 0x88, 0x7F, 0x70, 0x60, 0x56, 0x56,
//    0x5E, 0x6A, 0x74, 0x82, 0x90, 0x98, 0x97, 0x92, 0x89, 0x81, 0x73, 0x62,
//    0x5D, 0x62, 0x6E, 0x75, 0x7F, 0x90, 0xA1, 0xA7, 0x9D, 0x92, 0x8B, 0x85,
//    0x74, 0x66, 0x63, 0x6C, 0x76, 0x7D, 0x8A, 0xA0, 0xAF, 0xAC, 0x9A, 0x8F,
//    0x89, 0x7E, 0x69, 0x59, 0x5D, 0x6A, 0x72, 0x77, 0x84, 0x9B, 0xA6, 0xA0,
//    0x92, 0x89, 0x82, 0x6E, 0x57, 0x4D, 0x57, 0x67, 0x6E, 0x73, 0x84, 0x98,
//    0x9F, 0x97, 0x8A, 0x83, 0x76, 0x5E, 0x4A, 0x47, 0x57, 0x66, 0x70, 0x7B,
//    0x90, 0xA3, 0xA8, 0x9C, 0x90, 0x85, 0x79, 0x63, 0x52, 0x50, 0x5F, 0x6E,
//    0x79, 0x89, 0x9E, 0xB1, 0xB3, 0xA4, 0x94, 0x87, 0x7B, 0x69, 0x5B, 0x5B,
//    0x69, 0x78, 0x83, 0x94, 0xA9, 0xBA, 0xB5, 0xA3, 0x8F, 0x82, 0x72, 0x5D,
//    0x4E, 0x50, 0x62, 0x73, 0x81, 0x8F, 0xA6, 0xB4, 0xAD, 0x99, 0x86, 0x79,
//    0x69, 0x50, 0x41, 0x48, 0x60, 0x73, 0x80, 0x8C, 0x9F, 0xA7, 0x9E, 0x8A,
//    0x7C, 0x72, 0x60, 0x49, 0x3F, 0x4D, 0x67, 0x79, 0x85, 0x94, 0xA6, 0xAF,
//    0xA1, 0x8C, 0x7D, 0x74, 0x64, 0x4F, 0x4B, 0x5B, 0x74, 0x82, 0x8D, 0x9E,
//    0xB4, 0xB7, 0xA7, 0x8E, 0x80, 0x77, 0x68, 0x5B, 0x5A, 0x6D, 0x80, 0x89,
//    0x93, 0xA4, 0xB8, 0xB8, 0xA2, 0x89, 0x7B, 0x71, 0x61, 0x50, 0x51, 0x66,
//    0x7A, 0x87, 0x8F, 0xA1, 0xAF, 0xAC, 0x96, 0x7F, 0x75, 0x6C, 0x59, 0x47,
//    0x4C, 0x61, 0x79, 0x84, 0x8B, 0x99, 0xA0, 0x98, 0x84, 0x74, 0x6F, 0x66,
//    0x55, 0x49, 0x52, 0x6A, 0x80, 0x89, 0x91, 0xA0, 0xA7, 0x9D, 0x86, 0x75,
//    0x71, 0x68, 0x59, 0x51, 0x60, 0x78, 0x8A, 0x8F, 0x99, 0xAA, 0xB2, 0xA7,
//    0x8D, 0x7B, 0x75, 0x6C, 0x63, 0x60, 0x70, 0x87, 0x91, 0x94, 0x9B, 0xAC,
//    0xAF, 0x9F, 0x84, 0x75, 0x70, 0x68, 0x5B, 0x59, 0x6A, 0x81, 0x8D, 0x91,
//    0x98, 0xA2, 0xA2, 0x8D, 0x77, 0x6C, 0x6B, 0x62, 0x55, 0x54, 0x66, 0x7E,
//    0x89, 0x8D, 0x92, 0x98, 0x90, 0x7B, 0x69, 0x64, 0x67, 0x5E, 0x55, 0x59,
//    0x70, 0x88, 0x90, 0x92, 0x98, 0x9F, 0x98, 0x81, 0x6E, 0x69, 0x6A, 0x63,
//    0x5E, 0x66, 0x80, 0x93, 0x98, 0x97, 0x9E, 0xA8, 0xA0, 0x8A, 0x75, 0x70,
//    0x70, 0x6C, 0x6B, 0x79, 0x90, 0x9D, 0x9B, 0x97, 0x9E, 0xA1, 0x95, 0x7B,
//    0x6B, 0x69, 0x6B, 0x65, 0x64, 0x71, 0x8A, 0x97, 0x97, 0x95, 0x97, 0x97,
//    0x84, 0x6B, 0x5F, 0x62, 0x66, 0x5F, 0x5E, 0x6C, 0x85, 0x93, 0x91, 0x90,
//    0x90, 0x8B, 0x74, 0x5F, 0x59, 0x60, 0x66, 0x62, 0x63, 0x78, 0x8F, 0x9A,
//    0x97, 0x93, 0x96, 0x91, 0x7C, 0x67, 0x60, 0x67, 0x6A, 0x69, 0x70, 0x88,
//    0x9D, 0xA3, 0x9A, 0x98, 0x9A, 0x96, 0x82, 0x6E, 0x67, 0x6E, 0x71, 0x72,
//    0x80, 0x98, 0xAA, 0xA6, 0x9B, 0x96, 0x97, 0x8B, 0x73, 0x60, 0x5F, 0x68,
//    0x6A, 0x6C, 0x78, 0x91, 0xA2, 0xA1, 0x97, 0x92, 0x90, 0x80, 0x65, 0x54,
//    0x59, 0x64, 0x68, 0x67, 0x73, 0x89, 0x9A, 0x97, 0x90, 0x8B, 0x85, 0x71,
//    0x59, 0x4E, 0x59, 0x65, 0x6A, 0x6D, 0x7E, 0x96, 0xA3, 0x9D, 0x92, 0x8F,
//    0x88, 0x76, 0x5F, 0x56, 0x60, 0x6B, 0x70, 0x79, 0x8D, 0xA7, 0xAD, 0xA3,
//    0x96, 0x93, 0x8D, 0x7C, 0x67, 0x5F, 0x68, 0x71, 0x77, 0x83, 0x9D, 0xB2,
//    0xB2, 0xA3, 0x94, 0x91, 0x86, 0x70, 0x59, 0x56, 0x61, 0x6D, 0x71, 0x7D,
//    0x93, 0xA8, 0xA8, 0x9B, 0x90, 0x8B, 0x7C, 0x62, 0x4E, 0x50, 0x5F, 0x6B,
//    0x6F, 0x78, 0x8D, 0x9D, 0x9D, 0x91, 0x87, 0x81, 0x6D, 0x54, 0x46, 0x50,
//    0x62, 0x6E, 0x73, 0x84, 0x9C, 0xAB, 0xA3, 0x96, 0x8B, 0x85, 0x73, 0x5B,
//    0x4F, 0x59, 0x69, 0x73, 0x7C, 0x91, 0xAC, 0xB7, 0xAB, 0x98, 0x91, 0x8A,
//    0x7B, 0x65, 0x5C, 0x65, 0x72, 0x79, 0x85, 0x9C, 0xB5, 0xB8, 0xA8, 0x95,
//    0x8D, 0x83, 0x6F, 0x58, 0x51, 0x5F, 0x6C, 0x75, 0x7E, 0x94, 0xA8, 0xAB,
//    0x9C, 0x8E, 0x85, 0x79, 0x5E, 0x4A, 0x4A, 0x5B, 0x6C, 0x72, 0x7C, 0x90,
//    0xA1, 0xA0, 0x93, 0x86, 0x7E, 0x6D, 0x51, 0x42, 0x49, 0x5F, 0x6E, 0x77,
//    0x85, 0x9E, 0xAE, 0xAA, 0x98, 0x8D, 0x85, 0x75, 0x5D, 0x4F, 0x57, 0x69,
//    0x74, 0x7E, 0x91, 0xAB, 0xB9, 0xAE, 0x9B, 0x8E, 0x89, 0x7A, 0x67, 0x5C,
//    0x64, 0x71, 0x7B, 0x85, 0x9C, 0xB3, 0xB9, 0xA8, 0x95, 0x8B, 0x80, 0x6C,
//    0x55, 0x4D, 0x5C, 0x6C, 0x76, 0x7E, 0x93, 0xA8, 0xAA, 0x9D, 0x8C, 0x84,
//    0x76, 0x5D, 0x47, 0x46, 0x5A, 0x6B, 0x74, 0x7D, 0x92, 0xA4, 0xA3, 0x95,
//    0x88, 0x80, 0x6E, 0x55, 0x43, 0x4B, 0x60, 0x6F, 0x78, 0x86, 0xA0, 0xB0,
//    0xAC, 0x99, 0x8D, 0x85, 0x75, 0x5F, 0x52, 0x58, 0x6A, 0x75, 0x7F, 0x92,
//    0xAB, 0xB7, 0xAB, 0x99, 0x8C, 0x86, 0x75, 0x61, 0x58, 0x62, 0x71, 0x7A,
//    0x85, 0x9A, 0xB2, 0xB5, 0xA5, 0x93, 0x88, 0x7E, 0x68, 0x4F, 0x4C, 0x5C,
//    0x6C, 0x75, 0x7F, 0x93, 0xA9, 0xAB, 0x9C, 0x8D, 0x85, 0x76, 0x5E, 0x49,
//    0x4C, 0x5E, 0x6D, 0x74, 0x80, 0x94, 0xA5, 0xA2, 0x93, 0x89, 0x80, 0x6F,
//    0x55, 0x48, 0x50, 0x64, 0x72, 0x79, 0x8A, 0xA2, 0xB0, 0xA6, 0x96, 0x8B,
//    0x84, 0x73, 0x5C, 0x53, 0x5C, 0x6D, 0x75, 0x80, 0x94, 0xAD, 0xB2, 0xA5,
//    0x93, 0x8C, 0x83, 0x71, 0x5B, 0x58, 0x65, 0x72, 0x7A, 0x86, 0x9F, 0xB2,
//    0xB2, 0xA0, 0x90, 0x8A, 0x7D, 0x65, 0x51, 0x53, 0x61, 0x6F, 0x73, 0x80,
//    0x96, 0xA7, 0xA3, 0x96, 0x8B, 0x85, 0x74, 0x5A, 0x4D, 0x54, 0x66, 0x70,
//    0x74, 0x84, 0x99, 0xA2, 0x9B, 0x8D, 0x87, 0x7B, 0x66, 0x4E, 0x4B, 0x5A,
//    0x69, 0x71, 0x79, 0x8F, 0xA4, 0xAA, 0x9D, 0x90, 0x8B, 0x80, 0x69, 0x56,
//    0x56, 0x64, 0x70, 0x74, 0x83, 0x9B, 0xAF, 0xAB, 0x9D, 0x93, 0x8E, 0x84,
//    0x6E, 0x5F, 0x62, 0x6D, 0x74, 0x7C, 0x8D, 0xA7, 0xB2, 0xA8, 0x97, 0x91,
//    0x8B, 0x7A, 0x61, 0x57, 0x5F, 0x6A, 0x6F, 0x75, 0x85, 0x9C, 0xA2, 0x9A,
//    0x90, 0x8B, 0x82, 0x6B, 0x55, 0x53, 0x5F, 0x6A, 0x6B, 0x74, 0x86, 0x99,
//    0x9A, 0x91, 0x89, 0x84, 0x72, 0x5A, 0x4C, 0x52, 0x63, 0x6A, 0x6B, 0x7B,
//    0x93, 0xA3, 0xA1, 0x95, 0x93, 0x8F, 0x81, 0x69, 0x5D, 0x64, 0x6C, 0x6F,
//    0x76, 0x8B, 0xA4, 0xA9, 0xA1, 0x97, 0x97, 0x93, 0x7F, 0x6A, 0x62, 0x68,
//    0x6F, 0x72, 0x7F, 0x96, 0xA8, 0xA7, 0x9D, 0x96, 0x93, 0x88, 0x6F, 0x5D,
//    0x5C, 0x65, 0x6A, 0x69, 0x75, 0x8A, 0x9B, 0x99, 0x8F, 0x8C, 0x86, 0x75,
//    0x5B, 0x52, 0x5B, 0x67, 0x67, 0x66, 0x79, 0x91, 0x9B, 0x93, 0x8E, 0x8E,
//    0x88, 0x71, 0x5D, 0x5D, 0x6A, 0x6C, 0x6A, 0x74, 0x8B, 0x9E, 0x9C, 0x92,
//    0x94, 0x98, 0x8D, 0x79, 0x6C, 0x6F, 0x73, 0x71, 0x73, 0x84, 0x97, 0x9A,
//    0x94, 0x91, 0x93, 0x92, 0x84, 0x73, 0x6F, 0x70, 0x72, 0x70, 0x71, 0x7E,
//    0x89, 0x8E, 0x8A, 0x89, 0x89, 0x83, 0x78, 0x6C, 0x6D, 0x72, 0x70, 0x69,
//    0x68, 0x74, 0x84, 0x86, 0x83, 0x85, 0x8C, 0x8C, 0x7F, 0x74, 0x78, 0x7C,
//    0x74, 0x68, 0x6D, 0x7E, 0x85, 0x82, 0x83, 0x94, 0x9D, 0x94, 0x83, 0x81,
//    0x85, 0x7E, 0x6B, 0x67, 0x73, 0x7F, 0x7C, 0x7D, 0x8D, 0x9E, 0x9E, 0x8F,
//    0x88, 0x87, 0x7E, 0x69, 0x5E, 0x63, 0x6D, 0x6E, 0x72, 0x81, 0x96, 0x9C,
//    0x96, 0x8D, 0x8A, 0x7F, 0x6D, 0x5B, 0x57, 0x5C, 0x63, 0x6F, 0x7F, 0x93,
//    0xA0, 0xA3, 0xA1, 0x96, 0x88, 0x75, 0x66, 0x59, 0x56, 0x5E, 0x71, 0x81,
//    0x90, 0x9F, 0xAF, 0xB1, 0xA2, 0x8A, 0x7B, 0x6D, 0x5D, 0x4F, 0x56, 0x6B,
//    0x80, 0x8A, 0x9A, 0xAD, 0xB5, 0xA3, 0x88, 0x79, 0x6D, 0x5A, 0x44, 0x48,
//    0x61, 0x78, 0x86, 0x93, 0xA8, 0xB3, 0xA3, 0x8B, 0x7A, 0x70, 0x5B, 0x46,
//    0x45, 0x5E, 0x76, 0x84, 0x93, 0xAB, 0xB6, 0xAB, 0x91, 0x81, 0x74, 0x62,
//    0x4F, 0x50, 0x63, 0x76, 0x86, 0x97, 0xAD, 0xB5, 0xAA, 0x95, 0x85, 0x75,
//    0x61, 0x53, 0x56, 0x64, 0x75, 0x83, 0x96, 0xA7, 0xA9, 0xA0, 0x91, 0x83,
//    0x6D, 0x58, 0x4F, 0x57, 0x64, 0x71, 0x7F, 0x95, 0xA3, 0xA1, 0x98, 0x8E,
//    0x83, 0x6D, 0x58, 0x56, 0x60, 0x68, 0x71, 0x82, 0x9B, 0xA7, 0xA0, 0x95,
//    0x8E, 0x85, 0x70, 0x60, 0x60, 0x6B, 0x71, 0x78, 0x8A, 0xA0, 0xA7, 0x9B,
//    0x90, 0x8C, 0x82, 0x6C, 0x5F, 0x63, 0x6E, 0x75, 0x79, 0x8B, 0x9D, 0x9D,
//    0x92, 0x89, 0x85, 0x77, 0x60, 0x58, 0x62, 0x6E, 0x74, 0x79, 0x8C, 0x9B,
//    0x9A, 0x8F, 0x88, 0x83, 0x73, 0x61, 0x5D, 0x69, 0x72, 0x75, 0x82, 0x94,
//    0xA0, 0x9A, 0x8E, 0x8B, 0x84, 0x75, 0x66, 0x64, 0x6F, 0x74, 0x7A, 0x88,
//    0x9C, 0xA1, 0x98, 0x8F, 0x8B, 0x84, 0x71, 0x65, 0x66, 0x70, 0x74, 0x77,
//    0x87, 0x96, 0x9A, 0x90, 0x8B, 0x88, 0x7B, 0x66, 0x5F, 0x66, 0x6D, 0x6F,
//    0x72, 0x84, 0x93, 0x95, 0x8F, 0x8C, 0x8A, 0x7C, 0x6A, 0x64, 0x6C, 0x6F,
//    0x6F, 0x76, 0x8A, 0x97, 0x95, 0x90, 0x90, 0x8F, 0x80, 0x70, 0x6B, 0x71,
//    0x70, 0x72, 0x7C, 0x90, 0x98, 0x92, 0x91, 0x93, 0x8F, 0x7D, 0x6F, 0x6D,
//    0x6F, 0x6E, 0x6D, 0x7B, 0x8C, 0x91, 0x8F, 0x8E, 0x91, 0x86, 0x74, 0x68,
//    0x6B, 0x6D, 0x66, 0x67, 0x76, 0x89, 0x8E, 0x8D, 0x90, 0x94, 0x87, 0x75,
//    0x6E, 0x6E, 0x6D, 0x66, 0x6A, 0x7D, 0x8B, 0x8F, 0x8F, 0x98, 0x9A, 0x8D,
//    0x7A, 0x74, 0x72, 0x6D, 0x69, 0x72, 0x83, 0x8E, 0x8E, 0x93, 0x9B, 0x9B,
//    0x8A, 0x79, 0x73, 0x71, 0x69, 0x64, 0x70, 0x81, 0x8A, 0x8B, 0x93, 0x98,
//    0x92, 0x80, 0x73, 0x71, 0x6B, 0x5E, 0x5C, 0x6A, 0x7E, 0x86, 0x8C, 0x94,
//    0x9C, 0x92, 0x81, 0x75, 0x73, 0x69, 0x5E, 0x5F, 0x72, 0x81, 0x89, 0x90,
//    0x9D, 0xA2, 0x97, 0x83, 0x7A, 0x74, 0x6A, 0x62, 0x67, 0x7A, 0x85, 0x8B,
//    0x95, 0xA2, 0xA4, 0x93, 0x82, 0x79, 0x71, 0x65, 0x5C, 0x67, 0x79, 0x84,
//    0x8A, 0x94, 0x9F, 0x9A, 0x8A, 0x7C, 0x75, 0x6B, 0x59, 0x55, 0x62, 0x77,
//    0x82, 0x8A, 0x96, 0xA1, 0x99, 0x89, 0x7D, 0x75, 0x69, 0x59, 0x59, 0x69,
//    0x7B, 0x83, 0x8E, 0x9E, 0xA7, 0x9D, 0x8A, 0x7F, 0x76, 0x6A, 0x5E, 0x61,
//    0x72, 0x7E, 0x87, 0x93, 0xA5, 0xA9, 0x9A, 0x87, 0x7E, 0x74, 0x65, 0x59,
//    0x62, 0x72, 0x7F, 0x85, 0x94, 0xA1, 0xA0, 0x90, 0x81, 0x7A, 0x6C, 0x5A,
//    0x51, 0x5E, 0x71, 0x7D, 0x85, 0x95, 0xA1, 0x9E, 0x8D, 0x82, 0x79, 0x6C,
//    0x59, 0x57, 0x65, 0x76, 0x7F, 0x8A, 0x9B, 0xA7, 0x9F, 0x8F, 0x84, 0x7B,
//    0x6D, 0x5E, 0x60, 0x6E, 0x7A, 0x81, 0x90, 0xA2, 0xA9, 0x9D, 0x8B, 0x83,
//    0x7A, 0x68, 0x5C, 0x5F, 0x6F, 0x7A, 0x82, 0x90, 0xA0, 0xA0, 0x94, 0x86,
//    0x7F, 0x71, 0x5E, 0x53, 0x5D, 0x6D, 0x78, 0x80, 0x8E, 0x9E, 0x9D, 0x91,
//    0x86, 0x7E, 0x71, 0x5E, 0x59, 0x64, 0x72, 0x7A, 0x84, 0x95, 0xA3, 0x9E,
//    0x91, 0x87, 0x82, 0x73, 0x64, 0x61, 0x6B, 0x77, 0x7D, 0x89, 0x9B, 0xA6,
//    0x9C, 0x8F, 0x87, 0x81, 0x70, 0x61, 0x62, 0x6D, 0x76, 0x7C, 0x88, 0x99,
//    0x9D, 0x95, 0x89, 0x84, 0x79, 0x64, 0x59, 0x5E, 0x6D, 0x74, 0x78, 0x86,
//    0x96, 0x9B, 0x92, 0x89, 0x85, 0x79, 0x67, 0x5D, 0x65, 0x70, 0x74, 0x7B,
//    0x8B, 0x9C, 0x9B, 0x91, 0x8C, 0x88, 0x7D, 0x6B, 0x66, 0x6B, 0x74, 0x77,
//    0x81, 0x93, 0x9F, 0x9B, 0x90, 0x8C, 0x88, 0x7B, 0x69, 0x65, 0x6D, 0x73,
//    0x74, 0x7F, 0x8F, 0x99, 0x93, 0x8B, 0x89, 0x81, 0x70, 0x60, 0x62, 0x6C,
//    0x6F, 0x71, 0x7B, 0x8D, 0x95, 0x91, 0x8B, 0x8B, 0x83, 0x70, 0x65, 0x66,
//    0x6F, 0x71, 0x72, 0x80, 0x92, 0x98, 0x90, 0x8E, 0x8E, 0x87, 0x75, 0x6B,
//    0x6C, 0x72, 0x72, 0x78, 0x87, 0x97, 0x98, 0x91, 0x90, 0x8F, 0x86, 0x73,
//    0x6B, 0x6D, 0x72, 0x6F, 0x76, 0x85, 0x92, 0x93, 0x8C, 0x8D, 0x8B, 0x7B,
//    0x6A, 0x65, 0x6C, 0x6D, 0x6A, 0x6F, 0x82, 0x8E, 0x90, 0x8C, 0x8F, 0x8C,
//    0x7D, 0x6C, 0x6A, 0x6E, 0x6E, 0x6A, 0x74, 0x86, 0x92, 0x90, 0x8F, 0x94,
//    0x91, 0x81, 0x73, 0x6F, 0x72, 0x6F, 0x6F, 0x7A, 0x8D, 0x93, 0x91, 0x90,
//    0x96, 0x91, 0x80, 0x72, 0x70, 0x71, 0x6C, 0x6C, 0x78, 0x89, 0x8E, 0x8E,
//    0x8F, 0x91, 0x89, 0x77, 0x6C, 0x6D, 0x6D, 0x66, 0x66, 0x73, 0x85, 0x8B,
//    0x8C, 0x90, 0x93, 0x8A, 0x78, 0x6F, 0x6E, 0x6E, 0x67, 0x69, 0x77, 0x89,
//    0x8D, 0x8E, 0x93, 0x98, 0x8F, 0x7E, 0x74, 0x72, 0x70, 0x6B, 0x6E, 0x7F,
//    0x8C, 0x90, 0x8F, 0x96, 0x99, 0x8D, 0x7D, 0x72, 0x71, 0x6D, 0x69, 0x6C,
//    0x7C, 0x88, 0x8D, 0x8E, 0x91, 0x92, 0x84, 0x75, 0x6D, 0x6D, 0x68, 0x63,
//    0x68, 0x77, 0x86, 0x8C, 0x8E, 0x93, 0x92, 0x85, 0x77, 0x6F, 0x6E, 0x68,
//    0x65, 0x6C, 0x7B, 0x89, 0x8D, 0x92, 0x97, 0x97, 0x8A, 0x7C, 0x73, 0x71,
//    0x6C, 0x6A, 0x73, 0x81, 0x8C, 0x90, 0x94, 0x9A, 0x98, 0x8A, 0x7B, 0x74,
//    0x6F, 0x6B, 0x68, 0x70, 0x7F, 0x89, 0x8D, 0x8E, 0x93, 0x8F, 0x81, 0x74,
//    0x6D, 0x6D, 0x69, 0x64, 0x6A, 0x79, 0x87, 0x8B, 0x8E, 0x90, 0x8F, 0x83,
//    0x75, 0x6C, 0x6E, 0x6D, 0x6A, 0x70, 0x7D, 0x8C, 0x90, 0x90, 0x90, 0x90,
//    0x87, 0x79, 0x6F, 0x6D, 0x71, 0x71, 0x78, 0x83, 0x92, 0x97, 0x95, 0x91,
//    0x8C, 0x86, 0x77, 0x6C, 0x69, 0x6D, 0x71, 0x78, 0x81, 0x8E, 0x96, 0x94,
//    0x8F, 0x87, 0x7E, 0x72, 0x64, 0x60, 0x63, 0x6C, 0x75, 0x7E, 0x89, 0x93,
//    0x96, 0x92, 0x89, 0x7F, 0x75, 0x6A, 0x64, 0x62, 0x6B, 0x77, 0x81, 0x8B,
//    0x92, 0x99, 0x98, 0x8E, 0x83, 0x78, 0x72, 0x6C, 0x6A, 0x6F, 0x79, 0x86,
//    0x8C, 0x91, 0x95, 0x96, 0x90, 0x81, 0x77, 0x71, 0x70, 0x6C, 0x6E, 0x78,
//    0x84, 0x8D, 0x8D, 0x8C, 0x8D, 0x86, 0x79, 0x6C, 0x6A, 0x6E, 0x6F, 0x6D,
//    0x74, 0x81, 0x8E, 0x8F, 0x8A, 0x89, 0x86, 0x7B, 0x6C, 0x66, 0x6B, 0x72,
//    0x76, 0x7A, 0x87, 0x94, 0x98, 0x90, 0x89, 0x85, 0x7F, 0x71, 0x66, 0x69,
//    0x72, 0x7A, 0x7E, 0x8A, 0x98, 0xA0, 0x99, 0x8C, 0x84, 0x7E, 0x72, 0x66,
//    0x62, 0x6B, 0x77, 0x7E, 0x85, 0x8F, 0x99, 0x98, 0x8B, 0x81, 0x7A, 0x72,
//    0x64, 0x5C, 0x61, 0x6F, 0x7C, 0x82, 0x89, 0x92, 0x97, 0x8F, 0x81, 0x7A,
//    0x75, 0x70, 0x66, 0x66, 0x70, 0x7F, 0x85, 0x89, 0x8F, 0x94, 0x93, 0x85,
//    0x7A, 0x75, 0x76, 0x71, 0x70, 0x76, 0x85, 0x8E, 0x8E, 0x8B, 0x8F, 0x8E,
//    0x85, 0x77, 0x70, 0x71, 0x75, 0x73, 0x77, 0x81, 0x8E, 0x90, 0x8C, 0x87,
//    0x86, 0x7C, 0x6E, 0x64, 0x65, 0x6F, 0x74, 0x77, 0x7E, 0x8C, 0x93, 0x91,
//    0x89, 0x84, 0x7D, 0x73, 0x65, 0x60, 0x6A, 0x75, 0x7B, 0x82, 0x8D, 0x9A,
//    0x9A, 0x91, 0x85, 0x80, 0x79, 0x6D, 0x65, 0x68, 0x74, 0x7D, 0x84, 0x8B,
//    0x99, 0x9E, 0x97, 0x88, 0x80, 0x7A, 0x71, 0x68, 0x64, 0x6F, 0x7C, 0x83,
//    0x86, 0x8E, 0x93, 0x91, 0x84, 0x7A, 0x75, 0x73, 0x6A, 0x64, 0x68, 0x77,
//    0x82, 0x87, 0x88, 0x8E, 0x8E, 0x86, 0x78, 0x72, 0x73, 0x72, 0x6F, 0x6F,
//    0x7B, 0x89, 0x8D, 0x8C, 0x8A, 0x8C, 0x87, 0x7C, 0x70, 0x70, 0x73, 0x77,
//    0x78, 0x82, 0x8F, 0x97, 0x93, 0x8C, 0x88, 0x85, 0x7B, 0x6C, 0x68, 0x6E,
//    0x75, 0x7A, 0x7F, 0x8B, 0x94, 0x96, 0x8D, 0x85, 0x80, 0x76, 0x67, 0x5D,
//    0x61, 0x6E, 0x77, 0x7E, 0x85, 0x91, 0x97, 0x92, 0x88, 0x7F, 0x7A, 0x70,
//    0x64, 0x61, 0x6B, 0x77, 0x80, 0x85, 0x90, 0x99, 0x99, 0x8D, 0x82, 0x7C,
//    0x76, 0x6F, 0x68, 0x6E, 0x7B, 0x83, 0x88, 0x8B, 0x95, 0x97, 0x90, 0x82,
//    0x78, 0x77, 0x72, 0x6D, 0x6E, 0x77, 0x84, 0x88, 0x89, 0x8A, 0x8D, 0x86,
//    0x7A, 0x6F, 0x6F, 0x72, 0x70, 0x6D, 0x74, 0x81, 0x8B, 0x8B, 0x89, 0x87,
//    0x86, 0x7B, 0x6D, 0x6A, 0x6E, 0x74, 0x75, 0x7A, 0x85, 0x93, 0x94, 0x8E,
//    0x88, 0x84, 0x7F, 0x73, 0x6A, 0x6A, 0x74, 0x79, 0x7F, 0x88, 0x97, 0x9D,
//    0x97, 0x8B, 0x83, 0x7E, 0x73, 0x68, 0x64, 0x6D, 0x77, 0x7E, 0x84, 0x8F,
//    0x98, 0x95, 0x8B, 0x80, 0x7B, 0x72, 0x66, 0x5D, 0x63, 0x70, 0x7C, 0x82,
//    0x88, 0x92, 0x94, 0x8E, 0x82, 0x7B, 0x77, 0x70, 0x67, 0x66, 0x71, 0x7E,
//    0x85, 0x87, 0x8F, 0x94, 0x92, 0x85, 0x7B, 0x76, 0x76, 0x71, 0x70, 0x76,
//    0x84, 0x8B, 0x8C, 0x8B, 0x8F, 0x8E, 0x85, 0x78, 0x71, 0x74, 0x74, 0x73,
//    0x77, 0x82, 0x8D, 0x8D, 0x8A, 0x87, 0x86, 0x7C, 0x6F, 0x66, 0x69, 0x71,
//    0x74, 0x76, 0x7E, 0x8B, 0x91, 0x8E, 0x87, 0x84, 0x7D, 0x72, 0x66, 0x64,
//    0x6E, 0x77, 0x7A, 0x82, 0x8E, 0x99, 0x96, 0x8E, 0x85, 0x7F, 0x78, 0x6D,
//    0x67, 0x6C, 0x76, 0x7E, 0x83, 0x8E, 0x99, 0x9C, 0x94, 0x86, 0x80, 0x79,
//    0x70, 0x66, 0x66, 0x72, 0x7C, 0x82, 0x87, 0x90, 0x96, 0x8F, 0x84, 0x7B,
//    0x76, 0x71, 0x66, 0x62, 0x69, 0x78, 0x81, 0x86, 0x89, 0x8F, 0x8F, 0x84,
//    0x7A, 0x75, 0x75, 0x6F, 0x6B, 0x6E, 0x7C, 0x87, 0x89, 0x8A, 0x8C, 0x8F,
//    0x88, 0x7C, 0x74, 0x74, 0x76, 0x74, 0x77, 0x81, 0x8E, 0x90, 0x8D, 0x8A,
//    0x8B, 0x85, 0x7A, 0x6F, 0x6E, 0x73, 0x77, 0x77, 0x7F, 0x8A, 0x92, 0x8E,
//    0x89, 0x85, 0x7E, 0x73, 0x65, 0x62, 0x69, 0x74, 0x77, 0x7D, 0x87, 0x92,
//    0x94, 0x8B, 0x85, 0x80, 0x76, 0x6B, 0x61, 0x66, 0x71, 0x7B, 0x80, 0x88,
//    0x95, 0x99, 0x94, 0x89, 0x80, 0x7C, 0x73, 0x69, 0x68, 0x72, 0x7D, 0x83,
//    0x89, 0x93, 0x9B, 0x98, 0x8B, 0x81, 0x7B, 0x74, 0x6C, 0x66, 0x6E, 0x79,
//    0x82, 0x86, 0x8A, 0x91, 0x90, 0x87, 0x7A, 0x76, 0x73, 0x6E, 0x66, 0x67,
//    0x75, 0x80, 0x86, 0x87, 0x8C, 0x8D, 0x87, 0x7A, 0x74, 0x73, 0x74, 0x6F,
//    0x70, 0x79, 0x86, 0x8C, 0x8A, 0x8A, 0x8B, 0x89, 0x7D, 0x74, 0x71, 0x75,
//    0x76, 0x78, 0x7F, 0x8C, 0x93, 0x91, 0x8A, 0x89, 0x86, 0x7C, 0x71, 0x6C,
//    0x70, 0x76, 0x79, 0x7D, 0x88, 0x91, 0x92, 0x8A, 0x85, 0x7F, 0x77, 0x68,
//    0x61, 0x66, 0x70, 0x78, 0x7B, 0x85, 0x90, 0x94, 0x8F, 0x85, 0x81, 0x79,
//    0x6F, 0x64, 0x63, 0x6E, 0x79, 0x7E, 0x86, 0x90, 0x9A, 0x96, 0x8A, 0x82,
//    0x7C, 0x76, 0x6C, 0x68, 0x70, 0x7A, 0x82, 0x86, 0x90, 0x99, 0x98, 0x8F,
//    0x82, 0x7C, 0x76, 0x6F, 0x67, 0x6C, 0x76, 0x81, 0x84, 0x89, 0x8F, 0x91,
//    0x89, 0x7C, 0x77, 0x74, 0x70, 0x68, 0x67, 0x72, 0x7E, 0x85, 0x86, 0x8B,
//    0x8E, 0x89, 0x7C, 0x75, 0x73, 0x74, 0x71, 0x6F, 0x76, 0x84, 0x8A, 0x8A,
//    0x89, 0x8C, 0x8A, 0x81, 0x75, 0x73, 0x75, 0x77, 0x76, 0x7E, 0x89, 0x92,
//    0x8F, 0x8B, 0x88, 0x88, 0x7E, 0x73, 0x6D, 0x71, 0x76, 0x77, 0x7C, 0x85,
//    0x90, 0x90, 0x8B, 0x84, 0x82, 0x78, 0x6B, 0x63, 0x67, 0x71, 0x76, 0x7B,
//    0x83, 0x8E, 0x92, 0x8E, 0x85, 0x81, 0x7B, 0x70, 0x65, 0x65, 0x6E, 0x79,
//    0x7E, 0x84, 0x91, 0x98, 0x95, 0x8A, 0x83, 0x7D, 0x76, 0x6C, 0x69, 0x70,
//    0x7A, 0x80, 0x86, 0x90, 0x9A, 0x99, 0x8F, 0x83, 0x7C, 0x77, 0x6D, 0x67,
//    0x6B, 0x77, 0x7F, 0x84, 0x8A, 0x91, 0x92, 0x8A, 0x7F, 0x78, 0x76, 0x6D,
//    0x65, 0x66, 0x71, 0x7D, 0x82, 0x87, 0x8C, 0x90, 0x89, 0x7F, 0x77, 0x76,
//    0x71, 0x6C, 0x6C, 0x75, 0x80, 0x88, 0x88, 0x8C, 0x8F, 0x8D, 0x82, 0x79,
//    0x75, 0x76, 0x73, 0x74, 0x7B, 0x87, 0x8E, 0x8C, 0x8C, 0x8D, 0x8B, 0x82,
//    0x76, 0x70, 0x73, 0x75, 0x74, 0x7A, 0x84, 0x8D, 0x8C, 0x89, 0x86, 0x84,
//    0x78, 0x6C, 0x67, 0x6C, 0x72, 0x74, 0x76, 0x81, 0x8C, 0x8F, 0x8A, 0x85,
//    0x83, 0x7A, 0x6E, 0x66, 0x6B, 0x72, 0x77, 0x7C, 0x86, 0x91, 0x95, 0x8E,
//    0x89, 0x84, 0x7E, 0x74, 0x6C, 0x6E, 0x73, 0x7A, 0x7F, 0x89, 0x93, 0x98,
//    0x92, 0x8B, 0x84, 0x7E, 0x73, 0x6C, 0x6A, 0x71, 0x77, 0x7E, 0x84, 0x8D,
//    0x90, 0x8E, 0x87, 0x7F, 0x78, 0x6E, 0x68, 0x67, 0x6B, 0x74, 0x7A, 0x82,
//    0x88, 0x8E, 0x8C, 0x88, 0x80, 0x78, 0x73, 0x6E, 0x6B, 0x6F, 0x75, 0x7F,
//    0x85, 0x8B, 0x8E, 0x8F, 0x8A, 0x84, 0x7B, 0x78, 0x75, 0x72, 0x75, 0x7A,
//    0x84, 0x89, 0x8B, 0x8D, 0x8E, 0x8C, 0x82, 0x7B, 0x76, 0x75, 0x72, 0x73,
//    0x78, 0x81, 0x85, 0x88, 0x88, 0x87, 0x84, 0x7A, 0x74, 0x71, 0x72, 0x71,
//    0x6F, 0x75, 0x7D, 0x84, 0x86, 0x86, 0x88, 0x83, 0x7D, 0x76, 0x74, 0x75,
//    0x73, 0x74, 0x79, 0x81, 0x87, 0x87, 0x89, 0x8A, 0x87, 0x81, 0x7A, 0x77,
//    0x78, 0x76, 0x79, 0x7E, 0x87, 0x88, 0x89, 0x8A, 0x8A, 0x88, 0x7F, 0x7A,
//    0x77, 0x77, 0x74, 0x75, 0x7C, 0x82, 0x86, 0x85, 0x86, 0x86, 0x7F, 0x79,
//    0x75, 0x76, 0x74, 0x6F, 0x71, 0x78, 0x80, 0x83, 0x85, 0x86, 0x87, 0x81,
//    0x79, 0x78, 0x77, 0x75, 0x71, 0x75, 0x7D, 0x82, 0x85, 0x86, 0x8B, 0x8A,
//    0x85, 0x7E, 0x7A, 0x7A, 0x76, 0x76, 0x7B, 0x81, 0x86, 0x85, 0x89, 0x8D,
//    0x8B, 0x84, 0x7C, 0x7B, 0x79, 0x74, 0x74, 0x77, 0x80, 0x82, 0x84, 0x86,
//    0x88, 0x83, 0x7D, 0x78, 0x78, 0x75, 0x70, 0x6D, 0x74, 0x7D, 0x81, 0x83,
//    0x86, 0x89, 0x84, 0x7E, 0x79, 0x79, 0x75, 0x72, 0x71, 0x79, 0x80, 0x82,
//    0x85, 0x89, 0x8D, 0x88, 0x81, 0x7C, 0x7B, 0x77, 0x75, 0x76, 0x7E, 0x83,
//    0x85, 0x87, 0x8B, 0x8E, 0x87, 0x80, 0x7B, 0x7B, 0x75, 0x73, 0x74, 0x7C,
//    0x81, 0x82, 0x85, 0x88, 0x88, 0x80, 0x7B, 0x78, 0x77, 0x71, 0x6D, 0x6F,
//    0x79, 0x7E, 0x82, 0x85, 0x88, 0x88, 0x81, 0x7C, 0x7A, 0x77, 0x73, 0x6F,
//    0x75, 0x7C, 0x82, 0x83, 0x88, 0x8C, 0x8C, 0x84, 0x7F, 0x7B, 0x7A, 0x76,
//    0x74, 0x7A, 0x80, 0x84, 0x86, 0x89, 0x8F, 0x8B, 0x85, 0x7D, 0x7C, 0x79,
//    0x73, 0x73, 0x77, 0x7F, 0x82, 0x83, 0x87, 0x89, 0x85, 0x7E, 0x79, 0x79,
//    0x74, 0x6E, 0x6C, 0x74, 0x7B, 0x81, 0x82, 0x87, 0x88, 0x85, 0x7E, 0x7B,
//    0x79, 0x76, 0x70, 0x71, 0x77, 0x80, 0x82, 0x85, 0x8A, 0x8D, 0x89, 0x82,
//    0x7E, 0x7B, 0x78, 0x74, 0x77, 0x7C, 0x83, 0x83, 0x87, 0x8D, 0x8E, 0x89,
//    0x80, 0x7D, 0x7B, 0x76, 0x72, 0x74, 0x7A, 0x81, 0x82, 0x85, 0x88, 0x88,
//    0x82, 0x7C, 0x79, 0x78, 0x71, 0x6D, 0x6E, 0x78, 0x7F, 0x81, 0x85, 0x87,
//    0x88, 0x82, 0x7D, 0x7A, 0x79, 0x73, 0x70, 0x73, 0x7C, 0x81, 0x82, 0x87,
//    0x8B, 0x8C, 0x85, 0x80, 0x7C, 0x7B, 0x76, 0x75, 0x79, 0x7F, 0x84, 0x84,
//    0x89, 0x8D, 0x8D, 0x85, 0x7F, 0x7B, 0x7A, 0x75, 0x72, 0x77, 0x7E, 0x81,
//    0x83, 0x85, 0x89, 0x86, 0x7E, 0x7A, 0x78, 0x77, 0x70, 0x6E, 0x72, 0x7B,
//    0x7F, 0x83, 0x85, 0x88, 0x85, 0x80, 0x7A, 0x7A, 0x77, 0x73, 0x71, 0x76,
//    0x7F, 0x83, 0x83, 0x88, 0x8B, 0x8A, 0x83, 0x7D, 0x7C, 0x79, 0x77, 0x77,
//    0x7C, 0x82, 0x85, 0x86, 0x8A, 0x8D, 0x89, 0x83, 0x7C, 0x7B, 0x79, 0x74,
//    0x74, 0x7A, 0x7F, 0x83, 0x84, 0x86, 0x86, 0x83, 0x7B, 0x79, 0x77, 0x76,
//    0x71, 0x6E, 0x76, 0x7D, 0x82, 0x83, 0x85, 0x87, 0x83, 0x7D, 0x7A, 0x78,
//    0x77, 0x72, 0x73, 0x79, 0x81, 0x84, 0x84, 0x88, 0x8B, 0x88, 0x80, 0x7C,
//    0x7A, 0x7A, 0x76, 0x79, 0x7E, 0x85, 0x85, 0x86, 0x88, 0x8C, 0x88, 0x7F,
//    0x7B, 0x79, 0x79, 0x75, 0x75, 0x7C, 0x81, 0x84, 0x83, 0x86, 0x85, 0x7F,
//    0x79, 0x76, 0x77, 0x76, 0x73, 0x71, 0x78, 0x7E, 0x83, 0x84, 0x84, 0x85,
//    0x81, 0x7A, 0x76, 0x77, 0x76, 0x76, 0x77, 0x7D, 0x82, 0x86, 0x85, 0x87,
//    0x87, 0x85, 0x7F, 0x79, 0x7A, 0x78, 0x79, 0x7B, 0x82, 0x86, 0x89, 0x88,
//    0x88, 0x88, 0x83, 0x7E, 0x78, 0x78, 0x78, 0x76, 0x7A, 0x7E, 0x84, 0x85,
//    0x84, 0x85, 0x82, 0x7D, 0x76, 0x75, 0x74, 0x74, 0x73, 0x74, 0x7C, 0x80,
//    0x84, 0x83, 0x85, 0x82, 0x7E, 0x78, 0x77, 0x76, 0x77, 0x75, 0x79, 0x7E,
//    0x85, 0x85, 0x86, 0x86, 0x87, 0x83, 0x7C, 0x7A, 0x79, 0x7B, 0x7A, 0x7E,
//    0x83, 0x89, 0x88, 0x85, 0x86, 0x85, 0x82, 0x7B, 0x77, 0x79, 0x79, 0x7A,
//    0x7B, 0x80, 0x85, 0x85, 0x84, 0x82, 0x80, 0x7B, 0x73, 0x70, 0x72, 0x77,
//    0x78, 0x7A, 0x7C, 0x83, 0x85, 0x85, 0x81, 0x81, 0x7C, 0x77, 0x71, 0x73,
//    0x76, 0x7B, 0x7C, 0x81, 0x87, 0x89, 0x89, 0x85, 0x83, 0x7F, 0x7C, 0x77,
//    0x77, 0x78, 0x7D, 0x80, 0x83, 0x88, 0x8B, 0x8C, 0x87, 0x84, 0x80, 0x7C,
//    0x77, 0x76, 0x75, 0x79, 0x7D, 0x81, 0x83, 0x86, 0x85, 0x84, 0x7E, 0x7B,
//    0x78, 0x75, 0x74, 0x72, 0x75, 0x7A, 0x7F, 0x81, 0x84, 0x83, 0x83, 0x7F,
//    0x7B, 0x78, 0x78, 0x77, 0x78, 0x78, 0x7D, 0x82, 0x86, 0x86, 0x85, 0x84,
//    0x83, 0x7E, 0x7B, 0x79, 0x7B, 0x7B, 0x7E, 0x81, 0x86, 0x8A, 0x88, 0x86,
//    0x84, 0x81, 0x7E, 0x79, 0x76, 0x78, 0x7B, 0x7C, 0x7F, 0x83, 0x85, 0x87,
//    0x83, 0x81, 0x7D, 0x79, 0x74, 0x6E, 0x71, 0x76, 0x7B, 0x7D, 0x80, 0x83,
//    0x86, 0x85, 0x80, 0x7F, 0x7D, 0x77, 0x73, 0x71, 0x77, 0x7B, 0x7F, 0x82,
//    0x85, 0x8A, 0x8A, 0x85, 0x81, 0x7F, 0x7C, 0x7A, 0x77, 0x7A, 0x7E, 0x82,
//    0x82, 0x85, 0x87, 0x8A, 0x86, 0x81, 0x7D, 0x7C, 0x7B, 0x77, 0x78, 0x7C,
//    0x7F, 0x82, 0x82, 0x82, 0x83, 0x7F, 0x7B, 0x76, 0x77, 0x78, 0x78, 0x76,
//    0x78, 0x7C, 0x82, 0x83, 0x82, 0x82, 0x7F, 0x7C, 0x77, 0x76, 0x77, 0x7B,
//    0x7A, 0x7D, 0x80, 0x86, 0x87, 0x85, 0x82, 0x82, 0x80, 0x7B, 0x78, 0x79,
//    0x7C, 0x7D, 0x80, 0x83, 0x8A, 0x8B, 0x89, 0x84, 0x82, 0x7F, 0x7B, 0x77,
//    0x74, 0x78, 0x7B, 0x7F, 0x80, 0x84, 0x86, 0x86, 0x81, 0x7F, 0x7D, 0x78,
//    0x74, 0x6F, 0x71, 0x76, 0x7D, 0x7F, 0x81, 0x84, 0x84, 0x83, 0x7E, 0x7D,
//    0x7B, 0x79, 0x75, 0x75, 0x78, 0x7F, 0x81, 0x83, 0x84, 0x87, 0x87, 0x83,
//    0x7D, 0x7D, 0x7B, 0x7B, 0x7A, 0x7E, 0x83, 0x85, 0x85, 0x84, 0x86, 0x86,
//    0x81, 0x7D, 0x7A, 0x7A, 0x7C, 0x7B, 0x7B, 0x80, 0x82, 0x84, 0x82, 0x82,
//    0x80, 0x7C, 0x76, 0x72, 0x74, 0x77, 0x7A, 0x7A, 0x7D, 0x80, 0x84, 0x83,
//    0x82, 0x80, 0x7D, 0x79, 0x73, 0x74, 0x76, 0x7B, 0x7D, 0x80, 0x84, 0x89,
//    0x88, 0x86, 0x81, 0x80, 0x7D, 0x7A, 0x77, 0x79, 0x7C, 0x80, 0x81, 0x85,
//    0x8A, 0x8B, 0x89, 0x82, 0x80, 0x7E, 0x79, 0x77, 0x76, 0x7A, 0x7E, 0x80,
//    0x81, 0x84, 0x84, 0x83, 0x7E, 0x7C, 0x7A, 0x79, 0x74, 0x72, 0x73, 0x7A,
//    0x7E, 0x81, 0x82, 0x82, 0x83, 0x7E, 0x7B, 0x7A, 0x7A, 0x7A, 0x77, 0x79,
//    0x7E, 0x81, 0x84, 0x83, 0x84, 0x84, 0x83, 0x7E, 0x7C, 0x7A, 0x7C, 0x7C,
//    0x7E, 0x82, 0x86, 0x89, 0x86, 0x84, 0x82, 0x82, 0x7D, 0x79, 0x78, 0x79,
//    0x7C, 0x7C, 0x7F, 0x83, 0x85, 0x85, 0x82, 0x80, 0x7D, 0x79, 0x72, 0x70,
//    0x72, 0x78, 0x7B, 0x7C, 0x80, 0x83, 0x85, 0x83, 0x81, 0x7F, 0x7B, 0x78,
//    0x73, 0x74, 0x78, 0x7B, 0x7F, 0x81, 0x86, 0x88, 0x89, 0x85, 0x80, 0x7F,
//    0x7C, 0x7A, 0x79, 0x7A, 0x7F, 0x81, 0x83, 0x85, 0x89, 0x89, 0x86, 0x80,
//    0x7E, 0x7C, 0x79, 0x78, 0x78, 0x7B, 0x80, 0x82, 0x81, 0x83, 0x82, 0x80,
//    0x7A, 0x78, 0x78, 0x78, 0x77, 0x75, 0x78, 0x7C, 0x81, 0x81, 0x82, 0x81,
//    0x80, 0x7B, 0x78, 0x77, 0x79, 0x7A, 0x7B, 0x7C, 0x81, 0x84, 0x86, 0x83,
//    0x83, 0x82, 0x80, 0x7C, 0x79, 0x7A, 0x7B, 0x7E, 0x80, 0x84, 0x89, 0x8A,
//    0x86, 0x84, 0x82, 0x7F, 0x7C, 0x77, 0x77, 0x7A, 0x7D, 0x7E, 0x81, 0x83,
//    0x86, 0x85, 0x82, 0x7E, 0x7D, 0x78, 0x71, 0x70, 0x72, 0x79, 0x7C, 0x7F,
//    0x80, 0x84, 0x84, 0x82, 0x7E, 0x7E, 0x7A, 0x77, 0x73, 0x75, 0x79, 0x7E,
//    0x80, 0x83, 0x86, 0x89, 0x86, 0x83, 0x7F, 0x7D, 0x7C, 0x79, 0x7A, 0x7C,
//    0x81, 0x82, 0x84, 0x85, 0x89, 0x88, 0x82, 0x7F, 0x7C, 0x7C, 0x7A, 0x77,
//    0x7A, 0x7D, 0x81, 0x82, 0x81, 0x83, 0x80, 0x7D, 0x79, 0x78, 0x7A, 0x78,
//    0x76, 0x76, 0x7A, 0x7F, 0x80, 0x81, 0x81, 0x81, 0x7D, 0x7A, 0x78, 0x7A,
//    0x7B, 0x79, 0x7B, 0x7E, 0x83, 0x84, 0x84, 0x82, 0x83, 0x81, 0x7E, 0x7B,
//    0x7A, 0x7D, 0x7E, 0x7E, 0x83, 0x86, 0x88, 0x85, 0x84, 0x82, 0x80, 0x7D,
//    0x78, 0x79, 0x7A, 0x7D, 0x7D, 0x7F, 0x83, 0x85, 0x83, 0x81, 0x7F, 0x7D,
//    0x77, 0x73, 0x71, 0x76, 0x79, 0x7C, 0x7D, 0x80, 0x82, 0x84, 0x82, 0x7F,
//    0x7E, 0x7B, 0x76, 0x74, 0x77, 0x7A, 0x7E, 0x80, 0x83, 0x87, 0x87, 0x86,
//    0x81, 0x80, 0x7D, 0x7B, 0x79, 0x79, 0x7D, 0x80, 0x81, 0x85, 0x88, 0x8A,
//    0x86, 0x83, 0x7F, 0x7E, 0x7A, 0x78, 0x77, 0x7B, 0x7E, 0x7F, 0x81, 0x83,
//    0x84, 0x81, 0x7E, 0x7C, 0x7A, 0x79, 0x73, 0x72, 0x75, 0x7B, 0x7F, 0x7F,
//    0x82, 0x82, 0x82, 0x7E, 0x7C, 0x7B, 0x7B, 0x77, 0x77, 0x78, 0x7E, 0x80,
//    0x82, 0x83, 0x86, 0x85, 0x83, 0x7E, 0x7D, 0x7D, 0x7C, 0x7C, 0x7E, 0x82,
//    0x84, 0x83, 0x84, 0x86, 0x85, 0x83, 0x7D, 0x7C, 0x7B, 0x7B, 0x7A, 0x7B,
//    0x7F, 0x81, 0x83, 0x81, 0x82, 0x80, 0x7B, 0x78, 0x75, 0x77, 0x78, 0x79,
//    0x78, 0x7C, 0x80, 0x81, 0x82, 0x80, 0x80, 0x7E, 0x78, 0x77, 0x77, 0x7A,
//    0x7C, 0x7C, 0x80, 0x83, 0x86, 0x84, 0x83, 0x81, 0x81, 0x7E, 0x7A, 0x7B,
//    0x7B, 0x7E, 0x80, 0x82, 0x87, 0x88, 0x87, 0x84, 0x81, 0x80, 0x7C, 0x79,
//    0x77, 0x7A, 0x7C, 0x7E, 0x7F, 0x83, 0x85, 0x83, 0x80, 0x7F, 0x7D, 0x77,
//    0x73, 0x72, 0x75, 0x7B, 0x7B, 0x7E, 0x80, 0x82, 0x83, 0x81, 0x7E, 0x7E,
//    0x79, 0x76, 0x75, 0x78, 0x7B, 0x7E, 0x7F, 0x84, 0x87, 0x87, 0x83, 0x82,
//    0x7F, 0x7E, 0x7A, 0x7A, 0x7B, 0x7E, 0x7F, 0x83, 0x86, 0x87, 0x88, 0x85,
//    0x82, 0x80, 0x7D, 0x7A, 0x79, 0x7A, 0x7B, 0x7E, 0x7F, 0x82, 0x83, 0x82,
//    0x81, 0x7D, 0x7B, 0x78, 0x77, 0x75, 0x77, 0x78, 0x7B, 0x7E, 0x80, 0x82,
//    0x82, 0x80, 0x7E, 0x7C, 0x7A, 0x79, 0x79, 0x7A, 0x7A, 0x7E, 0x80, 0x82,
//    0x83, 0x83, 0x84, 0x81, 0x7F, 0x7E, 0x7C, 0x7D, 0x7C, 0x7F, 0x82, 0x83,
//    0x84, 0x84, 0x85, 0x84, 0x82, 0x7E, 0x7D, 0x7C, 0x7C, 0x7A, 0x7C, 0x7E,
//    0x81, 0x81, 0x80, 0x81, 0x7E, 0x7C, 0x79, 0x78, 0x7B, 0x79, 0x77, 0x77,
//    0x7C, 0x7F, 0x7F, 0x81, 0x80, 0x80, 0x7D, 0x7B, 0x7A, 0x7C, 0x7B, 0x79,
//    0x7C, 0x7E, 0x82, 0x81, 0x83, 0x83, 0x84, 0x80, 0x7F, 0x7D, 0x7E, 0x7C,
//    0x7E, 0x7F, 0x83, 0x83, 0x82, 0x84, 0x85, 0x84, 0x80, 0x7E, 0x7C, 0x7D,
//    0x7B, 0x7A, 0x7D, 0x7F, 0x81, 0x80, 0x81, 0x80, 0x7E, 0x7A, 0x7B, 0x7A,
//    0x79, 0x77, 0x76, 0x7A, 0x7D, 0x80, 0x81, 0x81, 0x80, 0x7F, 0x7C, 0x7C,
//    0x7B, 0x7A, 0x78, 0x7A, 0x7E, 0x7F, 0x81, 0x82, 0x85, 0x84, 0x82, 0x7F,
//    0x7F, 0x7D, 0x7C, 0x7B, 0x7E, 0x80, 0x82, 0x82, 0x85, 0x87, 0x85, 0x82,
//    0x80, 0x7E, 0x7D, 0x7A, 0x79, 0x7C, 0x7F, 0x7F, 0x81, 0x81, 0x82, 0x7F,
//    0x7E, 0x7D, 0x7C, 0x78, 0x75, 0x74, 0x79, 0x7D, 0x7E, 0x80, 0x81, 0x81,
//    0x80, 0x7E, 0x7D, 0x7C, 0x78, 0x77, 0x79, 0x7C, 0x7F, 0x80, 0x83, 0x85,
//    0x86, 0x83, 0x81, 0x7F, 0x7E, 0x7C, 0x7C, 0x7D, 0x80, 0x81, 0x81, 0x85,
//    0x87, 0x86, 0x83, 0x7F, 0x7F, 0x7D, 0x79, 0x79, 0x7A, 0x7E, 0x7E, 0x80,
//    0x82, 0x81, 0x81, 0x7F, 0x7D, 0x7C, 0x77, 0x75, 0x75, 0x78, 0x7C, 0x7E,
//    0x7E, 0x81, 0x81, 0x81, 0x7E, 0x7E, 0x7D, 0x78, 0x77, 0x77, 0x7C, 0x7D,
//    0x80, 0x81, 0x85, 0x86, 0x82, 0x81, 0x7F, 0x7F, 0x7D, 0x7B, 0x7D, 0x7F,
//    0x7F, 0x82, 0x85, 0x86, 0x87, 0x83, 0x81, 0x7F, 0x7E, 0x7A, 0x7A, 0x7B,
//    0x7D, 0x7F, 0x80, 0x81, 0x83, 0x81, 0x80, 0x7F, 0x7C, 0x79, 0x74, 0x74,
//    0x79, 0x7B, 0x7D, 0x7E, 0x7F, 0x81, 0x80, 0x80, 0x7E, 0x7D, 0x79, 0x77,
//    0x78, 0x7C, 0x7D, 0x7F, 0x80, 0x84, 0x84, 0x83, 0x81, 0x81, 0x80, 0x7C,
//    0x7C, 0x7C, 0x7E, 0x7E, 0x81, 0x83, 0x87, 0x86, 0x83, 0x82, 0x80, 0x7F,
//    0x7C, 0x7A, 0x7C, 0x7C, 0x7E, 0x7F, 0x80, 0x82, 0x81, 0x80, 0x7F, 0x7C,
//    0x7A, 0x75, 0x76, 0x78, 0x7C, 0x7B, 0x7C, 0x7D, 0x81, 0x80, 0x80, 0x7E,
//    0x7E, 0x7A, 0x78, 0x78, 0x7C, 0x7D, 0x7E, 0x7F, 0x81, 0x84, 0x83, 0x82,
//    0x80, 0x81, 0x7E, 0x7D, 0x7C, 0x7E, 0x7E, 0x80, 0x82, 0x86, 0x86, 0x84,
//    0x82, 0x81, 0x80, 0x7D, 0x7C, 0x7B, 0x7D, 0x7D, 0x7E, 0x7F, 0x81, 0x82,
//    0x81, 0x80, 0x7E, 0x7B, 0x78, 0x77, 0x7A, 0x7A, 0x7B, 0x7A, 0x7D, 0x7E,
//    0x81, 0x80, 0x7F, 0x7F, 0x7C, 0x79, 0x7A, 0x7B, 0x7D, 0x7D, 0x7E, 0x81,
//    0x83, 0x83, 0x81, 0x82, 0x81, 0x80, 0x7D, 0x7D, 0x7D, 0x7D, 0x7F, 0x80,
//    0x83, 0x85, 0x82, 0x82, 0x82, 0x82, 0x7F, 0x7C, 0x7D, 0x7C, 0x7D, 0x7C,
//    0x7E, 0x7F, 0x81, 0x80, 0x80, 0x7F, 0x7D, 0x79, 0x77, 0x7A, 0x7A, 0x7A,
//    0x79, 0x7A, 0x7E, 0x7F, 0x80, 0x7F, 0x80, 0x7C, 0x7B, 0x79, 0x7C, 0x7B,
//    0x7C, 0x7B, 0x7F, 0x81, 0x82, 0x81, 0x82, 0x83, 0x80, 0x7F, 0x7D, 0x7E,
//    0x7D, 0x7D, 0x80, 0x82, 0x84, 0x82, 0x83, 0x82, 0x82, 0x81, 0x7D, 0x7D,
//    0x7C, 0x7D, 0x7C, 0x7C, 0x7F, 0x80, 0x81, 0x80, 0x80, 0x7D, 0x7B, 0x78,
//    0x7A, 0x7A, 0x7A, 0x77, 0x79, 0x7C, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7B,
//    0x7B, 0x7B, 0x7C, 0x7A, 0x7B, 0x7C, 0x80, 0x82, 0x81, 0x82, 0x82, 0x83,
//    0x7F, 0x7F, 0x7D, 0x7E, 0x7D, 0x7F, 0x81, 0x82, 0x83, 0x82, 0x83, 0x84,
//    0x83, 0x7F, 0x7E, 0x7D, 0x7D, 0x7C, 0x7B, 0x7E, 0x7F, 0x80, 0x80, 0x81,
//    0x7F, 0x7D, 0x7A, 0x7B, 0x7A, 0x7A, 0x77, 0x78, 0x7A, 0x7E, 0x7F, 0x80,
//    0x7F, 0x80, 0x7D, 0x7C, 0x7C, 0x7B, 0x7C, 0x79, 0x7B, 0x7F, 0x80, 0x81,
//    0x81, 0x83, 0x84, 0x81, 0x7F, 0x7E, 0x7E, 0x7D, 0x7E, 0x7F, 0x82, 0x82,
//    0x82, 0x82, 0x85, 0x83, 0x81, 0x7F, 0x7D, 0x7D, 0x7B, 0x7B, 0x7C, 0x7F,
//    0x7F, 0x80, 0x81, 0x7F, 0x7E, 0x7B, 0x7B, 0x7B, 0x7A, 0x79, 0x76, 0x79,
//    0x7D, 0x7E, 0x80, 0x7F, 0x80, 0x7E, 0x7D, 0x7B, 0x7D, 0x7C, 0x79, 0x7A,
//    0x7C, 0x80, 0x80, 0x82, 0x82, 0x84, 0x82, 0x80, 0x7E, 0x7E, 0x7E, 0x7D,
//    0x7F, 0x80, 0x83, 0x81, 0x83, 0x83, 0x85, 0x83, 0x80, 0x7E, 0x7E, 0x7C,
//    0x7B, 0x7B, 0x7E, 0x7F, 0x80, 0x81, 0x80, 0x7F, 0x7C, 0x7B, 0x7A, 0x7B,
//    0x79, 0x78, 0x77, 0x7B, 0x7D, 0x80, 0x7F, 0x80, 0x80, 0x7D, 0x7C, 0x7B,
//    0x7C, 0x7C, 0x7A, 0x7C, 0x7E, 0x81, 0x81, 0x82, 0x83, 0x83, 0x81, 0x7F,
//    0x7D, 0x7E, 0x7D, 0x7E, 0x80, 0x81, 0x84, 0x82, 0x83, 0x83, 0x84, 0x81,
//    0x7D, 0x7D, 0x7C, 0x7D, 0x7B, 0x7D, 0x7F, 0x80, 0x81, 0x7F, 0x80, 0x7D,
//    0x7B, 0x78, 0x79, 0x79, 0x7A, 0x78, 0x7A, 0x7B, 0x7F, 0x7F, 0x80, 0x7F,
//    0x7F, 0x7B, 0x7A, 0x7A, 0x7C, 0x7C, 0x7B, 0x7D, 0x7F, 0x82, 0x81, 0x82,
//    0x81, 0x82, 0x80, 0x7E, 0x7E, 0x7E, 0x7D, 0x7F, 0x81, 0x84, 0x84, 0x84,
//    0x82, 0x83, 0x81, 0x80, 0x7D, 0x7C, 0x7B, 0x7D, 0x7C, 0x7E, 0x7F, 0x81,
//    0x80, 0x80, 0x7E, 0x7E, 0x7A, 0x78, 0x77, 0x78, 0x7A, 0x7A, 0x7C, 0x7D,
//    0x7F, 0x7F, 0x80, 0x7E, 0x7E, 0x7B, 0x79, 0x79, 0x79, 0x7C, 0x7C, 0x7F,
//    0x80, 0x83, 0x83, 0x83, 0x81, 0x81, 0x7F, 0x7E, 0x7D, 0x7E, 0x7E, 0x80,
//    0x80, 0x83, 0x84, 0x85, 0x84, 0x81, 0x81, 0x7E, 0x7D, 0x7B, 0x7C, 0x7C,
//    0x7E, 0x7F, 0x7F, 0x80, 0x81, 0x7F, 0x7E, 0x7C, 0x7A, 0x78, 0x78, 0x78,
//    0x7B, 0x7B, 0x7D, 0x7E, 0x80, 0x7F, 0x80, 0x7E, 0x7D, 0x7B, 0x7A, 0x7A,
//    0x7A, 0x7D, 0x7D, 0x80, 0x82, 0x82, 0x83, 0x81, 0x81, 0x7F, 0x7F, 0x7E,
//    0x7C, 0x7E, 0x7E, 0x80, 0x82, 0x84, 0x85, 0x85, 0x82, 0x81, 0x7F, 0x7F,
//    0x7C, 0x7B, 0x7B, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x80, 0x7E, 0x7E, 0x7C,
//    0x7C, 0x79, 0x77, 0x76, 0x7A, 0x7D, 0x7D, 0x7F, 0x80, 0x80, 0x7E, 0x7E,
//    0x7C, 0x7D, 0x7C, 0x7B, 0x7A, 0x7C, 0x7E, 0x7F, 0x81, 0x82, 0x83, 0x82,
//    0x81, 0x7F, 0x7E, 0x7F, 0x7D, 0x7F, 0x80, 0x82, 0x83, 0x82, 0x82, 0x82,
//    0x81, 0x81, 0x7E, 0x7E, 0x7D, 0x7E, 0x7D, 0x7E, 0x7D, 0x7F, 0x80, 0x7F,
//    0x80, 0x7E, 0x7D, 0x79, 0x79, 0x79, 0x7A, 0x7C, 0x7C, 0x7B, 0x7E, 0x7E,
//    0x7F, 0x7F, 0x7E, 0x7E, 0x7B, 0x7B, 0x79, 0x7B, 0x7C, 0x7E, 0x7E, 0x81,
//    0x81, 0x83, 0x81, 0x80, 0x80, 0x7E, 0x7F, 0x7D, 0x7D, 0x7F, 0x7F, 0x81,
//    0x82, 0x83, 0x85, 0x84, 0x81, 0x80, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F
//};

const SOUND xTouchTone = {pucTouchTone, sizeof(pucTouchTone)};
