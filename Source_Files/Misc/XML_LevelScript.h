#ifndef _XML_LEVEL_SCRIPT_
#define _XML_LEVEL_SCRIPT_
/*
	Support for XML scripts in map files
	by Loren Petrich,
	April 16, 2000

	The reason for a separate object is that it will be necessary to execute certain commands
	only on certain levels.
*/


#include "FileHandler.h"

// Loads all those in resource 128 in a map file (or some appropriate equivalent)
void LoadLevelScripts(FileSpecifier& MapFile);

// Runs a script for some level; loads Pfhortran,
// runs level-specific MML...
void RunLevelScript(int LevelIndex);

// Intended for restoring old parameter values, because MML sets values at a variety
// of different places, and it may be easier to simply set stuff back to defaults
// by including those defaults in the script.
void RunRestorationScript();

// Needs chapter-screen and chapter-sound-selection functions

#endif
