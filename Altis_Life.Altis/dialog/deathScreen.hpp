class DeathScreen {
 idd = 7300;
 name = "Life_Death_Screen";
 movingEnable = 0;
 enableSimulation = 1;




 class controlsBackground { 
 class hintergrundleisteunten: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.27899 * safezoneH + safezoneY;
 w = 0.639894 * safezoneW;
 h = 0.0170008 * safezoneH;
 };
 class hintergrundleisterechts: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.811948 * safezoneW + safezoneX;
 y = 0.0749805 * safezoneH + safezoneY;
 w = 0.00799868 * safezoneW;
 h = 0.204009 * safezoneH;
 };
 class hintergrundleistelixnks: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.0749805 * safezoneH + safezoneY;
 w = 0.00799868 * safezoneW;
 h = 0.204009 * safezoneH;
 };
 class hintergrundleisteoben: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.0579797 * safezoneH + safezoneY;
 w = 0.639894 * safezoneW;
 h = 0.0170008 * safezoneH;
 };
 class background: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.188052 * safezoneW + safezoneX;
 y = 0.0749805 * safezoneH + safezoneY;
 w = 0.623897 * safezoneW;
 h = 0.204009 * safezoneH;
 };
 class hintergrundtext: Life_RscStructuredText
 {
 idc = -1;
 text = "Aufgrund deiner Verletzungen bist du Bewusstlos! Wenn ein Medic im Dienst ist gibt es noch Hoffnung für dich! Sollte kein Sanitaeter erscheinen, dann tut es uns leid.";
 x = 0.188052 * safezoneW + safezoneX; 
 y = 0.0749805 * safezoneH + safezoneY;
 w = 0.623897 * safezoneW;
 h = 0.136006 * safezoneH;
 colorBackground[] = {1,1,1,0.1};
 };
 };




 class Controls {
 /*class MedicsOnline: Life_RscText {
 idc = 7304;
 colorBackground[] = {0,0,0,0};
 text = "Medics Online: 1";
 x = 0.005 * safezoneW + safezoneX;
 y = 0.015 * safezoneH + safezoneY;
 w = 0.8;
 h = (1 / 25);
 };




 class MedicsNearby: Life_RscText {
 idc = 7305;
 colorBackground[] = {0,0,0,0};
 text = "Medics Nearby: No";
 x = 0.005 * safezoneW + safezoneX;
 y = 0.040 * safezoneH + safezoneY;
 w = 0.8;
 h = (1 / 25);
 };*/




 class RespawnBtn: Life_RscButtonMenu {
 idc = 7302;
 x = 0.19605 * safezoneW + safezoneX; 
 y = 0.221187 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0510023 * safezoneH;
 text = "Neues Leben";
 onButtonClick = "closeDialog 0; life_respawned = true; [] call life_fnc_spawnMenu;";
 colorBackground[] = {0,0.118,1,0.7};
 class Attributes {align = "center";};
 };




 class MedicBtn: Life_RscButtonMenu {
 idc = 7303;
 x = 0.675971 * safezoneW + safezoneX; 
 y = 0.221187 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0510023 * safezoneH;
 onButtonClick = "[] call life_fnc_requestMedic;";
 text = "Hilfe rufen";
 colorBackground[] = {1,0,0,0.7};
 class Attributes {align = "center";};
 };




 class respawnTime: Life_RscText {
 idc = 7301;
 colorBackground[] = {0,0,0,0.5};
 text = "";
 x = 0.324029 * safezoneW + safezoneX; 
 y = 0.860416 * safezoneH + safezoneY;
 w = 0.351942 * safezoneW;
 h = 0.0612027 * safezoneH;
 };
 };
};