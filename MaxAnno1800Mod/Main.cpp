/*
**************************************************************************************
*
* MaxAnno1800Mod 0.0.1 by Max Vollmer (https://github.com/maxvollmer/MaxAnno1800Mod)
*  - Adds extended zoom.
*  - Adds square ornament that was missing in the original game.
*  - Enables hidden city ornaments.
*  - Enables club ornaments (including pre-order statue and open-beta chess tables).
*  - (Experimental) Turns some visual buildings into ornamental buildings that can be built.
*  - (Cheat) Gives unrestricted access to all World Fair ornaments.
*  - (Cheat) Boosts attractiveness of ornaments based on their building cost.
*
* License: CC BY-NC 4.0 (https://creativecommons.org/licenses/by-nc/4.0/)
*
* Each feature can be enabled or disabled individually.
*
* quickbms by Luigi Auriemma (http://quickbms.com)
*
* 1800.bms script file by kskudlik (https://github.com/kskudlik/Anno-1800-RDA-Extractor)
*
* DllExport by Denis Kuzmin (https://github.com/3F/DllExport)
*
* Mod might break with upcoming game updates.
* No warranties whatsoever. Always backup your game files. Use this mod at your own risk.
*
* Anno 1800 and all related trademarks belong to Ubisoft.
*
**************************************************************************************
*/

#include "pch.h"
#include "Mod.h"
#include "InputHelper.h"
#include "Constants.h"
#include "XMLToolKit.h"

int main()
{
	MaxAnno1800Mod::Mod mod;
	mod.DebugPrintLocations();

	MaxAnno1800Mod::ModAction action{ MaxAnno1800Mod::ModAction::CANCEL };
	do
	{
		action = MaxAnno1800Mod::InputHelper::PromptModAction();
		mod.ApplyAction(action);
	}
	while (action != MaxAnno1800Mod::ModAction::RESTORE_BACKUP && action != MaxAnno1800Mod::ModAction::CANCEL && action != MaxAnno1800Mod::ModAction::APPLY);
}
