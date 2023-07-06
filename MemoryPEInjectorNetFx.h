#pragma once
#include "MemoryPEInjector/Injector.h"

using namespace System;

namespace MemoryPEInjector {
	public ref class PEInjector
	{
	public:
		PEInjector();
		~PEInjector();
		void Inject(Byte peBuffer[]);
	private:
		Injector* inj;
	};
}
