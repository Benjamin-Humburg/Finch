#pragma once

#include "Core.h"

namespace Goldfinch {

	class GOLDFINCH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in client
	Application* CreateApplication();

}

