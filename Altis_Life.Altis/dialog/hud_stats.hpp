////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class playerHUD {
    idd = 1000;
	duration = 10e10;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD', _this select 0];";
	objects[] = {};

    class controls {
        class Hintergrund: life_RscPicture
        {
            idc = 5101;
            text = "textures\statusBarBackground.paa";
            x = 0.699375 * safezoneW + safezoneX;
            y = 0.947407 * safezoneH + safezoneY;
            w = 0.403254 * safezoneW;
            h = 0.053703 * safezoneH;
            ColorBackground[] = {0.654901,0.262745,0.184313,1};
        };
        class LebenBild: life_RscPicture
        {
            idc = 4101;
            text = "textures\health.paa";
            x = 0.733391 * safezoneW + safezoneX;
            y = 0.964 * safezoneH + safezoneY;
            w = 0.015332 * safezoneW;
            h = 0.029703 * safezoneH;
            ColorBackground[] = {0.658823,0.266666,0.188235,1};
        };
        class Leben: life_RscText
        {
            idc = 5102;
            text = "$STR_HUD_Health";
            x = 0.753801 * safezoneW + safezoneX;
            y = 0.961412 * safezoneH + safezoneY;
            w = 0.036718 * safezoneW;
            h = 0.036805 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
        class BargeldBild: life_RscPicture
        {
            idc = 5103;
            text = "textures\money.paa";
            x = 0.790911 * safezoneW + safezoneX;
            y = 0.961685 * safezoneH + safezoneY;
            w = 0.015625 * safezoneW;
            h = 0.033481 * safezoneH;
            ColorBackground[] = {0.658823,0.266666,0.188235,1};
        };
        class Bargeld: life_RscText
        {
            idc = 5104;
            text = "";
            x = 0.80468 * safezoneW + safezoneX;
            y = 0.961412 * safezoneH + safezoneY;
            w = 0.064648 * safezoneW;
            h = 0.036718 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
        class EssenBild: life_RscPicture
        {
            idc = 5105;
            text = "textures\essen.paa";
            x = 0.885652 * safezoneW + safezoneX;
            y = 0.958518 * safezoneH + safezoneY;
            w = 0.021454 * safezoneW;
            h = 0.037036 * safezoneH;
            ColorBackground[] = {0.658823,0.266666,0.188235,1};
        };
        class Essen: life_RscText
        {
            idc = 5106;
            text = "";
            x = 0.911614 * safezoneW + safezoneX;
            y = 0.961412 * safezoneH + safezoneY;
            w = 0.036718 * safezoneW;
            h = 0.036805 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
        class TrinkenBild: life_RscPicture
        {
            idc = 5107;
            text = "textures\trinken.paa";
            x = 0.937816 * safezoneW + safezoneX;
            y = 0.955 * safezoneH + safezoneY;
            w = 0.028065 * safezoneW;
            h = 0.045416 * safezoneH;
            ColorBackground[] = {0.658823,0.266666,0.188235,1};
        };
        class Trinken: life_RscText
        {
            idc = 5108;
            text = "$STR_HUD_Water";
            x = 0.959271 * safezoneW + safezoneX;
            y = 0.961412 * safezoneH + safezoneY;
            w = 0.036718 * safezoneW;
            h = 0.036805 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
    };
};
////////////////////////////////////////////////////////////////////////////
