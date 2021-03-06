#ifndef CloseBottomServo_h
#define CloseBottomServo_h

#include "CommandBase.h"

class CloseBottomServo: public CommandBase {
	public:
		CloseBottomServo();
		~CloseBottomServo();
		void Initialize();
		void Execute();        
		bool IsFinished();        
	protected:
		void End();        
		void Interrupted();
	private:
		bool finished;
};

#endif