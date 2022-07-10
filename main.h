/*
 * main.h
 *
 *  Created on: 10 jul 2022
 *      Author: Iceman
 */

#ifndef MAIN_H_
#define MAIN_H_

struct Packet
{
	uint32_t	crc			:2;
	uint32_t	status		:1;
	uint32_t	payload		:12;
	uint32_t	bat			:3;
	uint32_t	sensor		:3;
	uint32_t	longAddr	:8;
	uint32_t	shortAddr	:2;
	uint32_t	addrMode	:1;
};

#endif /* MAIN_H_ */
