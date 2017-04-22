#include "player_sys.sqf"

/////////////////////////////////////////////////////////////////////
////////////// Der Dialog wurde von Lucky1302 erstellt //////////////
/////// Die Texturen wurden von Lucky1302, PayDaxDE erstellt ////////
//Das Programm womit der Dialog geschrieben wurde stammt von Shinji//
/////////////////////////////////////////////////////////////////////

class playerSettings {
	idd = playersys_DIALOG;
	movingenable = 1;
	enablesimulation = 1;

    class controlsBackground {
		class MainBackground: Life_RscPicture {
			text = "textures\menu.paa";
			idc = -1;
			x = 0.188052 * safezoneW + safezoneX;
			y = 0.00697737 * safezoneH + safezoneY;
			w = 0.615898 * safezoneW;
			h = 0.986045 * safezoneH;
		};
		
		class TexturesAdminMenu: Life_RscPicture {
			text = "textures\admin.paa";
			idc = 2030;
			x = 0.454166666666667 * safezoneW + safezoneX;
			y = 0.568526294985251 * safezoneH + safezoneY;
			w = 0.0416666666666667 * safezoneW;
			h = 0.0676585624385447 * safezoneH;
		};
		
		class TexturesWantedMenu: Life_RscPicture {
			text = "textures\wanted.paa";
			idc = 2032;
			x = 0.518839666666667 * safezoneW + safezoneX;
			y = 0.569047435594887 * safezoneH + safezoneY;
			w = 0.0394936666666666 * safezoneW;
			h = 0.0632042851524091 * safezoneH;
		};

		class moneyStatusInfo: Life_RscStructuredText {
			idc = 2015;
			sizeex = 0.020;
			text = ""
			x = 0.2841465 * safezoneW + safezoneX;
			y = 0.270553388397247 * safezoneH + safezoneY;
			w = 0.11838 * safezoneW;
			h = 0.0850039 * safezoneH;
		};

		class PlayersName : Life_RscTitle {
			idc = carry_weight;
			style = 1;
			text = "";
			x = 0.268486333333333 * safezoneW + safezoneX;
			y = 0.194684115044248 * safezoneH + safezoneY;
			w = 0.127867833333333 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
    };

    class controls {
        class itemList: Life_RscListBox {
            idc = item_list;
            sizeEx = 0.030;
			x = 0.583333333333333 * safezoneW + safezoneX;
			y = 0.250737463126844 * safezoneH + safezoneY;
			w = 0.152083333333333 * safezoneW;
			h = 0.255005 * safezoneH;
        };

        class moneyEdit: Life_RscEdit {
            idc = 2018;
            text = "1";
            sizeEx = 0.030;
			x = 0.27254 * safezoneW + safezoneX;
			y = 0.377640787610619 * safezoneH + safezoneY;
			w = 0.143976 * safezoneW;
			h = 0.0306014 * safezoneH;
        };

        class NearPlayers: Life_RscCombo {
            idc = 2022;
			x = 0.273060833333333 * safezoneW + safezoneX;
			y = 0.415041787610619 * safezoneH + safezoneY;
			w = 0.143977 * safezoneW;
			h = 0.0306014 * safezoneH;
        };

        class moneyDrop: Life_RscButtonMenu {
            idc = 2001;
            onButtonClick = "[] call life_fnc_giveMoney";
            sizeEx = 0.025;
			x = 0.294966 * safezoneW + safezoneX;
			y = 0.472562618485742 * safezoneH + safezoneY;
			w = 0.0975831 * safezoneW;
			h = 0.0340009 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };
		
        class itemEdit: Life_RscEdit {
            idc = item_edit;
            text = "1";
            sizeEx = 0.030;
			x = 0.588361 * safezoneW + safezoneX;
			y = 0.545546442477876 * safezoneH + safezoneY;
			w = 0.143976 * safezoneW;
			h = 0.0306014 * safezoneH;
        };

        class iNearPlayers: Life_RscCombo {
            idc = 2023;
			x = 0.588361 * safezoneW + safezoneX;
			y = 0.581172737463127 * safezoneH + safezoneY;
			w = 0.143977 * safezoneW;
			h = 0.0306014 * safezoneH;
        };
		
        class DropButton: Life_RscButtonMenu {
            idc = 2002;
            onButtonClick = "[] call life_fnc_giveItem;";
			x = 0.5859375 * safezoneW + safezoneX;
			y = 0.616519174041298 * safezoneH + safezoneY;
			w = 0.0350865666666667 * safezoneW;
			h = 0.056047197640118 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
            tooltip = "Geben";
        };

        class UseButton: Life_RscButtonMenu {
            onButtonClick = "[] call life_fnc_useItem;";
			x = 0.6979955 * safezoneW + safezoneX;
			y = 0.615535889872173 * safezoneH + safezoneY;
			w = 0.0319954 * safezoneW;
			h = 0.056047197640118 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
			tooltip = "Benutzen";
        };

        class RemoveButton: Life_RscButtonMenu {
            onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.642708333333333 * safezoneW + safezoneX;
			y = 0.619469026548673 * safezoneH + safezoneY;
			w = 0.0372069000000001 * safezoneW;
			h = 0.0521140609636185 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
			tooltip = "Entfernen";
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            onButtonClick = "closeDialog 0;";
			x = 0.258854166666667 * safezoneW + safezoneX;
			y = 0.715384577187807 * safezoneH + safezoneY;
			w = 0.0333333333333333 * safezoneW;
			h = 0.0574767797443461 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };

        class ButtonSettings: Life_RscButtonMenu {
            idc = -1;
            onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.384895833333333 * safezoneW + safezoneX;
			y = 0.71976401179941 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0530973451327434 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };

        class ButtonMyGang: Life_RscButtonMenu {
            idc = 2011;
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.72173058013766 * safezoneH + safezoneY;
			w = 0.0354166666666667 * safezoneW;
			h = 0.0550639134709931 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };

        /*class Licenses_Menu : Life_RscControlsGroup {
            idc = -1;
			x = 0.374721 * safezoneW + safezoneX;
			y = 0.678467 * safezoneH + safezoneY;
			w = 0.113583 * safezoneW;
			h = 0.034001 * safezoneH;

            class Controls {
                class Life_Licenses: Life_RscStructuredText {
                    idc = 2014;
                    sizeEx = 0.020;
                    text = "";
					x = 0.374721 * safezoneW + safezoneX;
					y = 0.678467 * safezoneH + safezoneY;
					w = 0.113583 * safezoneW;
					h = 0.034001 * safezoneH;
                };
            };
        };*/
		
        class Life_Licenses: Life_RscStructuredText {
            idc = 2014;
            sizeEx = 0.020;
            text = "";
			x = 0.456042 * safezoneW + safezoneX;
			y = 0.302851524090462 * safezoneH + safezoneY;
			w = 0.0991663333333333 * safezoneW;
			h = 0.23800958013766 * safezoneH;
        };

        class ButtonGangList: Life_RscButtonMenu {
            idc = 2012;
            onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.521354166666667 * safezoneW + safezoneX;
			y = 0.573254670599803 * safezoneH + safezoneY;
			w = 0.0348958333333333 * safezoneW;
			h = 0.0540806293018682 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {0,0,0,0.0};
        };

        class ButtonKeys: Life_RscButtonMenu {
            idc = 2013;
            onButtonClick = "createDialog ""Life_key_management"";";
			x = 0.5859375 * safezoneW + safezoneX;
			y = 0.716814159292035 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0540806293018682 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };

        class ButtonCell: Life_RscButtonMenu {
            idc = 2014;
            onButtonClick = "createDialog ""Life_my_smartphone"";"
			x = 0.642708333333333 * safezoneW + safezoneX;
			y = 0.714847590953786 * safezoneH + safezoneY;
			w = 0.0369791666666667 * safezoneW;
			h = 0.0589970501474926 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
        };
		
		class ButtonAdminMenu: Life_RscButtonMenu {
            idc = 2021;
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
			x = 0.457291666666667 * safezoneW + safezoneX;
			y = 0.572271386430678 * safezoneH + safezoneY;
			w = 0.0359375 * safezoneW;
			h = 0.056047197640118 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {0,0,0,0.0};
        };

        class ButtonSyncData: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.330729166666667 * safezoneW + safezoneX;
			y = 0.720747295968535 * safezoneH + safezoneY;
			w = 0.0333333333333333 * safezoneW;
			h = 0.0521140609636185 * safezoneH;
			colorbackground[] = {-1,-1,-1,-1};
			colorbackgroundfocused[] = {1,1,1,0.12};
			colorbackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorfocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colortext[] = {1,1,1,1};
			colordisabled[] = {1,0,0,0.1};
		};
    };
};
