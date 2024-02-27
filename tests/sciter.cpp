#include <vendor/sciter/sciter-x.h>
#include <vendor/sciter/sciter-x-window.hpp>

class frame: public sciter::window {
public:
	frame() : window(SW_TITLEBAR | SW_RESIZEABLE | SW_CONTROLS | SW_MAIN | SW_ENABLE_DEBUG) {}
	
	// passport - lists native functions and properties exposed to script under 'frame' interface name:
	SOM_PASSPORT_BEGIN(frame)
	SOM_FUNCS(
		SOM_FUNC(nativeMessage)
		)
	SOM_PASSPORT_END
	
	// function expsed to script:
	sciter::string  nativeMessage() { return WSTR("Hello C++ World"); }
	
};

#include <resources.cpp> // resources packaged into binary blob.

int WINAPI WinMain (HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpszArgument,
	int nCmdShow)
{
	
	wWinMain(hInstance,hPrevInstance,NULL,nCmdShow);
	
}

int uimain(std::function<int()> run ) {
	
	// bind resources[] (defined in "resources.cpp") with the archive
	sciter::archive::instance().open(aux::elements_of(resources));
	
	sciter::om::hasset<frame> pwin = new frame();
	
	// note: this:://app URL is dedicated to the sciter::archive content associated with the application
	// pwin->load( WSTR("this://app/main.htm") );
	//or use this to load UI from  
	pwin->load( WSTR("file:///C:\\Temp\\RedPanda-CPP-2.26\\projects\\SkillsChecker\\ui\\main.htm") );
	
	pwin->expand();
	
	return run();
}
