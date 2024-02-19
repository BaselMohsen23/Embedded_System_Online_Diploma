/*
 * Platform_Types.h
 *
 *  Created on: Jan 23, 2024
 *      Author: basel
 */
#include <stdint.h>
#include <stdbool.h>

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

typedef _Bool					boolean;
typedef signed char				sint8;
typedef unsigned char			uint8;
typedef signed short			sint16;
typedef unsigned short			uint16;
typedef signed long				sint32;
typedef unsigned long			uint32;
typedef signed long long		sint64;
typedef unsigned long long		uint64;


typedef volatile sint8		vint8_t;
typedef volatile uint8		vuint8_t;

typedef volatile sint16		vint16_t;
typedef volatile uint16		vuint16_t;

typedef volatile sint32		vint32_t;
typedef volatile uint32		vuint32_t;

typedef volatile sint64		vint64_t;
typedef volatile uint64		vuint64_t;



#endif /* PLATFORM_TYPES_H_ */
