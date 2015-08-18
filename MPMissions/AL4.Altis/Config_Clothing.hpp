/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 25, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 25, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 25, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 25, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 25, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 25, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 30, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 35, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 60, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 80, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 110, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 50, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 60, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 150, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 6, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 6, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 6, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 6, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 15, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 10, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 10, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 20, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 50, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 40, { "", "", -1 } },
			{ "H_Hat_blue", "", 40, { "", "", -1 } },
			{ "H_Hat_brown", "", 40, { "", "", -1 } },
			{ "H_Hat_checker", "", 40, { "", "", -1 } },
			{ "H_Hat_grey", "", 40, { "", "", -1 } },
			{ "H_Hat_tan", "", 40, { "", "", -1 } },
			{ "H_Cap_blu", "", 45, { "", "", -1 } },
			{ "H_Cap_grn", "", 45, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 45, { "", "", -1 } },
			{ "H_Cap_oli", "", 45, { "", "", -1 } },
			{ "H_Cap_red", "", 45, { "", "", -1 } },
			{ "H_Cap_tan", "", 45, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 75, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 75, { "", "", -1 } },
			{ "G_Lady_Dark", "", 75, { "", "", -1 } },
			{ "G_Lady_Blue", "", 75, { "", "", -1 } },
			{ "G_Lowprofile", "", 25, { "", "", -1 } },
			{ "G_Combat", "", 250, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 50, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 100, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 250, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 325, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 375, { "", "", -1 } },
			{ "B_Carryall_oli", "", 450, { "", "", -1 } },
			{ "B_Carryall_khk", "", 450, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Cop Uniform", 15, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", 45, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_survival_uniform", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_worn", "", 100, { "life_coplevel", "SCALAR", 2 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Booniehat_mcamo", "", 15, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 45, { "life_coplevel", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 15, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 15, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 15, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 15, { "", "", -1 } },
			{ "G_Squares", "", 35, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 60, { "", "", -1 } },
			{ "G_Lady_Dark", "", 60, { "", "", -1 } },
			{ "G_Lady_Blue", "", 60, { "", "", -1 } },
			{ "G_Lowprofile", "", 60, { "", "", -1 } },
			{ "G_Combat", "", 75, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 50, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 125, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 25, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 30, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 50, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 75, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 100, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 250, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 75, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 400, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 75, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 125, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 150, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 250, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 150, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 250, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 500, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 25, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 125, { "", "", -1 } },
			{ "H_Shemag_olive", "", 125, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 125, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 200, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 200, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 15, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 15, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 15, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 15, { "", "", -1 } },
			{ "G_Squares", "", 25, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 50, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 75, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 125, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 250, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 30, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 45, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 60, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 75, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 100, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 125, { "", "", -1 } },
			{ "B_Carryall_oli", "", 150, { "", "", -1 } },
			{ "B_Carryall_khk", "", 150, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 150, { "", "", -1 } },
			{ "U_C_Driver_2", "", 350, { "", "", -1 } },
			{ "U_C_Driver_1", "", 360, { "", "", -1 } },
			{ "U_C_Driver_3", "", 370, { "", "", -1 } },
			{ "U_C_Driver_4", "", 370, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 200, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 200, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 200, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 200, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};