/*
File: welcomeciv.sqf
Author: ZedBuster
        Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
Description:
Creates an intro on the bottom-right hand corner of the screen.
*/
 
 
_imag  = "<img image='' size='10' align='center'/>"; _text = format["<br/><t color='#C5B6B5' size='1.8' align='center'>Entering Altis</t><br/><br/>",ProfileName];  
hint parseText (_imag + _text);
 
_onScreenTime = 3;
 
//if(life_firstSpawn) then {
 
playsound "civintro";
//}; 
sleep 2; //Wait in seconds before the credits start after player is in-game
_role1 = "Altis Life RPG 4.0";  //First Popup
_role1names = ["Hosted By The Weapon Shop"];  //Host
_role2 = "Weekly Most Wanted";  //
_role2names = ["Koala Bear (10,000,000$ Bounty Captured Alive)"];  //Add your texts here!
_role3 = "Weekly Most Feared Gang";  //Add your texts here!
_role3names = ["Pyrgos Security Corp"];  //Add your texts here!
_role4 = "TWS Staff";  //Add your texts here!
_role4names = ["Kronyx, Popolaman, SilentMonk, Zer0Cool"];  //Add your texts here!
_role5 = "Team Speak Info:";  //Add your texts here!
_role5names = ["192.223.24.140"];  //Add your texts here!
 
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.60' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
 
//The list below should have exactly the same amount of roles as the list above
 
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names]
];