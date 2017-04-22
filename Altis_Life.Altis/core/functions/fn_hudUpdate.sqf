/*################################
#	(c) 2016 gamer-nation.eu #
#			         #
#	Author: PierreAmyf   	 #
################################*/
disableSerialization;
if (isNull (uiNamespace getVariable ["playerHUD",displayNull])) then {[] call life_fnc_hudSetup;};
_polizeionline = 0;
_einwohneronline = 0;
_mediconline = 0;
{
	if(isPlayer _x) then
	{	
		_si = side _x;
		if(_si == civilian) then {_einwohneronline = _einwohneronline + 1};
		if(_si == west) then {_polizeionline = _polizeionline + 1};
		if(_si == independent) then {_mediconline = _mediconline + 1};
	};
} forEach(playableUnits);
//Text
((uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl 5102) ctrlSetText format["%1 %",round ((1 - (damage player)) * 100)];
((uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl 5106) ctrlSetText format["%1 %",life_hunger];
((uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl 5108) ctrlSetText format["%1 %",life_thirst];
((uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl 5104) ctrlSetText format["%1€",[life_cash] call life_fnc_numberText];

//CopRadar
if(playerSide == civilian) then  
{  
	if(wanted_status > 0) then  
	{  
		LIFEctrl(IDC_LIFE_BAR_WANTED) progressSetPosition (100);  
		LIFEctrl(IDC_LIFE_BAR_CLEAR) progressSetPosition (0);  
		//LIFEctrl(IDC_LIFE_WANTED_TEXT) ctrlSetText format["$%1", ([wanted_status] call life_fnc_numberText)];  
		LIFEctrl(IDC_LIFE_WANTED_TEXT) ctrlSetText format["%1", "WANTED"];  
		player setVariable ["isWanted", true, true];  
	}  
	else  
	{  
		LIFEctrl(IDC_LIFE_BAR_WANTED) progressSetPosition (0);  
		LIFEctrl(IDC_LIFE_BAR_CLEAR) progressSetPosition (100);  
		LIFEctrl(IDC_LIFE_WANTED_TEXT) ctrlSetText format["%1", "NOT WANTED"];  
		player setVariable ["isWanted", false, true];  
	};  
}  