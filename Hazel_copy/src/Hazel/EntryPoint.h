#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int ac, char **av)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Hazel only supports windows
#endif // HZ_PLATFORM_WINDOWS
