#include "all.h"

DEVILUTION_BEGIN_NAMESPACE

static BYTE sgbIsScrolling; //are we in scrolling mode (i.e. not just a single click to move)
static DWORD sgdwLastWalk;  //time the last walk command was issued
static BOOL sgbIsWalking;   //are we walking

void track_process()
{
	if (!sgbIsWalking)  
		return;

	if (cursmx < 0 || cursmx >= MAXDUNX - 1 || cursmy < 0 || cursmy >= MAXDUNY - 1)  //cursor out of bounds
		return;

	//what is this checking??
	//if were not standing and early in an animation?? (8 is duration of some animations)
	if (plr[myplr]._pVar8 <= 6 && plr[myplr]._pmode != PM_STAND)   
		return;

	//if the mouse have moved, send a new move command and set scrolling to true
	if (cursmx != plr[myplr]._ptargx || cursmy != plr[myplr]._ptargy) {
		DWORD tick = SDL_GetTicks();
		if ((int)(tick - sgdwLastWalk) >= 300) {
			sgdwLastWalk = tick;
			NetSendCmdLoc(TRUE, CMD_WALKXY, cursmx, cursmy);
			if (!sgbIsScrolling)
				sgbIsScrolling = 1;
		}
	}
}

void track_repeat_walk(BOOL rep)
{
	if (sgbIsWalking == rep)
		return;

	sgbIsWalking = rep;
	if (rep) {
		sgbIsScrolling = 0;
		sgdwLastWalk = SDL_GetTicks() - 50;
		NetSendCmdLoc(TRUE, CMD_WALKXY, cursmx, cursmy);
	} else if (sgbIsScrolling) {
		sgbIsScrolling = 0;
	}
}

BOOL track_isscrolling()
{
	return sgbIsScrolling;
}

DEVILUTION_END_NAMESPACE
