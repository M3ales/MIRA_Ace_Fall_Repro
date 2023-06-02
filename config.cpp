class CfgPatches {
	class MIRA_Ace_Fall_Handler_Min_Repro
	{
		name = "Ace Fall Handler Minimum Reproduction";
		author = "M3ales";
        url = "https://github.com/M3ales/MIRA_Ace_Fall_Repro";
		requiredAddons[] = {"ace_medical"};
		units[] = {};
		weapons[] = {};
	};
};

class ACE_Medical_Injuries {
    class damageTypes {
        class woundHandlers;
        class falling {
            class woundHandlers: woundHandlers {
                MIRA_Ace_Fall_Handler_Min_Repro = "{ diag_log ""You fell out of luck""; _this }";
            };
        };
        class collision {
            class woundHandlers: woundHandlers {
                MIRA_Ace_Fall_Handler_Min_Repro = "{ diag_log ""You took collision damage""; _this }";
            };
        };
    };
};