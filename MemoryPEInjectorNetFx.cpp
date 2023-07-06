
#include "MemoryPEInjectorNetFx.h"


namespace MemoryPEInjector {

	PEInjector::PEInjector()
	{
		this->inj = new Injector();
	}

	PEInjector::~PEInjector()
	{
		delete this->inj;
		this->inj = nullptr;
	}

	void PEInjector::Inject(Byte peBuffer[])
	{
		this->inj->Inject(peBuffer);
	}

}
