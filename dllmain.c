/* Replace "dll.h" with the name of your header */
#include "gpssim.h"
#include <windows.h>

// DLLIMPORT void HelloWorld()
// {
// 	MessageBox(0,"Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
// }

//DLLIMPORT int GPS_create_bin(char* param, short * iq_buff);
DLLIMPORT void llh2xyz(const double* llh, double* xyz);
DLLIMPORT void xyz2llh(const double* xyz, double* llh);
DLLIMPORT int read_RINEX_file(char* rinex_file);
DLLIMPORT int settings(char* param);
DLLIMPORT int generate_100ms_IQ(short* iq_buff);
DLLIMPORT int set_position(char* position_llh);
DLLIMPORT int set_position_nmea(char* nmea_str);

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
