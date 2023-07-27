/* Replace "dll.h" with the name of your header */
#include "gpssim.h"
#include <windows.h>

// DLLIMPORT void HelloWorld()
// {
// 	MessageBox(0,"Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
// }

DLLIMPORT int GPS_create_bin(char* param, char* base_path, short * iq_buff);
DLLIMPORT void llh2xyz(const double* llh, double* xyz);
DLLIMPORT void xyz2llh(const double* xyz, double* llh);
// DLLIMPORT gpstime_t incGpsTime(gpstime_t time, double dt);


BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}
