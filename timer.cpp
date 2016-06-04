#include <iostream> //std::cout

#ifdef _WIN32 // winshit :(
  #include <Windows.h>
#else // thats better :)
  #include <unistd.h>
#endif



// prints time and waits 0.25 seconds
void printTimeCR(  // please excuse my Danish abbreviations xD
	unsigned int dag,
	unsigned char t,
	unsigned char min,
	unsigned char sek,
	unsigned char kvSek
){

	char spin; // spinny-thing character

	switch (kvSek) { // set spinny thing character
		//NOTE: characters are contained in single quotes (not double quotes)
		case 0: spin = '-'; break;
		case 1: spin = '\\'; break; // NOTE: we had to escape our escape
		case 2: spin = '|'; break;
		case 3: spin = '/'; break;
	}
	
	// print it out:
	std::cout <<"\rTime since start: " <<dag <<" days " <<(int)t <<" hours "
	          <<(int)min <<" minutes " <<(int)sek <<" seconds (" <<spin <<")   ";
	
	//wait:
	usleep(0.25 * 1000000); // do nothing for 0.25 seconds (takes time in micro-seconds)

	#ifdef _WIN32 // windows is only accurate to the millisecond XDDD
		Sleep(0.25 * 1000);
	#else
		usleep(0.25 * 1000000);
	#endif
}




int main(){

	// infinite loop (rolls over after reaching the limit of `unsigned int` )
	for (unsigned int day = 0; 1; day++)
		for (unsigned char hr = 0; hr < 24; hr++)//24 hours in a day
			for (unsigned char min = 0; min < 60; min++)//60 minutes in an hour
				for (unsigned char sec = 0; sec < 60; sec++)//60 seconds in a minute
					for (unsigned char quarterSec = 0; quarterSec < 4; quarterSec++)//quarter seconds for the spinner.
						printTimeCR(day, hr, min, sec, quarterSec);


}

