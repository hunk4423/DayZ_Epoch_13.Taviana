#include "definitions.sqf"

class ChooseSkin {
	idd = SKINS_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] execVM 'custom\chameleon\list_skins.sqf'";

	__EXEC( _xSpacing = 0.0075;  _ySpacing = 0.01;)
	__EXEC( _xInit = 12 * _xSpacing; _yInit = 18 * _ySpacing;)
	__EXEC( _windowWidth = 202; _windowHeight = 128;)
	__EXEC( _windowBorder = 1;)

	class controlsBackground {
		class Mainbackgrnd : HW_RscPicture {
			moving = true;
			idc = SKINS_BCKGRND;
			x = 0.1; y = 0.05;
			w = 0.91; h = 1.25;
			text = "\ca\ui\data\ui_background_controlers_ca.paa";
		};
		class RecruitUnitsTitle : HW_RscText {
		   	idc = SKINS_TITLE;
			x = 0.125; y =  0.13;
			w = __EVAL(80 * _xSpacing);
			h = __EVAL(3 * _ySpacing);
			colorText[] = Color_White;
			colorBackground[] = { 1, 1, 1, 0 };
			sizeEx = 0.04;
			text = "Chameleon Skin Changer";
		};
	};

	class controls {
		class RecruitQueue : HW_RscText {
		   	idc = SKINS_QUEUE;
			x = 0.06; y =  0.2;
			w = __EVAL(50 * _xSpacing);
			h = __EVAL(3 * _ySpacing);
			colorText[] = { 1, 1, 1, 0.8 };
			colorBackground[] = { 1, 1, 1, 0 };
			sizeEx = 0.03;
			text = "";
		};
		class RecruitPrise : HW_RscText {
		   	idc = SKINS_PRICE;
			x = 0.23; y =  0.2;
			w = __EVAL(50 * _xSpacing);
			h = __EVAL(3 * _ySpacing);
			colorText[] = { 1, 1, 1, 0.8 };
			colorBackground[] = { 1, 1, 1, 0 };
			sizeEx = 0.03;
			text = "";
		};
		class Unitlist: HW_RscGUIListBox {
			idc = SKINS_UNITLIST;
			default = 1;
			x = 0.101; y = 0.300;
			w = 0.660; h = 0.82;
			//lineSpacing = 0;
			colorSelect[] = {0, 0, 0, 0.9};
			colorSelect2[] = {0, 0, 0, 0.9};
			colorSelectBackground[] = {1, 1, 1, 0.3};
			colorSelectBackground2[] = {1, 1, 1, 0.9};
			onLBSelChanged = "";
			onLBDblClick = "";
			rowHeight = 0.025;
			soundSelect[] = {"\ca\ui\data\sound\mouse2", 0.09, 1};
			maxHistoryDelay = 10;
			canDrag = 0;
			xcolumn1 = "0.1f";
			xcolumn2 = "0.25f";
			xcolumn3 = "0.85f";		
		};
		class RecruitButton: HW_RscGUIShortcutButton {
			x = 0.600; y = 1.2;
			w = 0.125; h = 0.05;
			text = "Buy Skin";
			onButtonClick = "execVM 'custom\chameleon\get_skins.sqf'";
		};
		class CloseButton: RecruitButton {
			x = 0.15; y = 1.2;
			text = "Close";
			onButtonClick = "DZE_ActionInProgress = false;CloseDialog 0;";
		};
	};
};
