#include "\life_server\script_macros.hpp"
/*
    File: fn_wantedFetch.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Displays wanted list information sent from the server.
*/
private["_ret","_list","_result","_queryResult","_units","_inStatement","_statement"];
_ret = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _ret) exitWith {};
_ret = owner _ret;
_inStatement = "";
_statement = [];
_queryResult = [];
_result = [];
_list = [];
_units = [];
_tickTime = diag_tickTime;
{if((side _x) == civilian) then {_units pushBack (getPlayerUID _x)};} foreach playableUnits;

{
    if(_inStatement == "") then
    {
        _inStatement = "1";
        _statement pushback format["wantedFetchID:%1",_x];
    }
    else
    {
        _inStatement = (_inStatement + "1");
        _statement pushback format["wantedFetchID:%1",_x];
    };
} forEach _units;

waitUntil{!DB_Async_Active};
{
    _result = ([_x,2,true] call DB_fnc_asyncCall);
    _queryResult pushBack (_result select 0);

} forEach _statement;

{
    _list pushBack (_x);
}
forEach _queryResult;

if(count _list == 0) exitWith {[[_list],"life_fnc_wantedList",_ret,false] spawn life_fnc_MP;};

if((EQUAL(EXTDB_SETTINGS("MySQL_Query"),1))) then {
    ["diag_log",[
        "------------- Wanted Query Request -------------",
        format["QUERY: %1",_statement],
        format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)],
        format["Result: %1",_queryResult],
        "------------------------------------------------"
    ]] call TON_fnc_logIt;
};

[[_list],"life_fnc_wantedList",_ret,false] spawn life_fnc_MP;