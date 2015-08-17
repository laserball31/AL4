#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && ((animationState cursorTarget == "Incapacitated") OR (animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon")) && !(cursorTarget GVAR["robbed",FALSE]) ']];
	    //GagKit Player
		life_actions = [player addAction["<t color='#800000'>Gag Player</t>",life_fnc_gagAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained",FALSE]) && !(cursorTarget GVAR["gagged",FALSE]) && life_inv_gagkit > 0']];

		//Remove Gag from player.
		life_actions = [player addAction["<t color='#800000'>Remove Gag</t>",life_fnc_removeGagAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained",FALSE]) && (cursorTarget GVAR["gagged",FALSE])']];
	};
	case cop:
	{
        //GagKit Player
		life_actions = [player addAction["<t color='#800000'>Gag Player</t>",life_fnc_gagAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained",FALSE]) && !(cursorTarget GVAR["gagged",FALSE]) && life_inv_gagkit > 0']];

        //Remove Gag from player.
		life_actions = [player addAction["<t color='#800000'>Remove Gag</t>",life_fnc_removeGagAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained",FALSE]) && (cursorTarget GVAR["gagged",FALSE])']];
	};
};
