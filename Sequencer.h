#ifndef SEQUENCER_H
#define SEQUENCER_H

#pragma once

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Sequencer
{
private:

public:
	Sequencer(void);
	~Sequencer(void);
};


#endif
