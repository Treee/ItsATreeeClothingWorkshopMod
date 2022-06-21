class SRP_LetterKit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwitchLetterOption);
	}
};

class SRP_Letter_A_Kit extends SRP_KitBase{};
class SRP_Letter_B_Kit extends SRP_KitBase{};
class SRP_Letter_C_Kit extends SRP_KitBase{};
class SRP_Letter_D_Kit extends SRP_KitBase{};
class SRP_Letter_E_Kit extends SRP_KitBase{};
class SRP_Letter_F_Kit extends SRP_KitBase{};
class SRP_Letter_G_Kit extends SRP_KitBase{};
class SRP_Letter_H_Kit extends SRP_KitBase{};
class SRP_Letter_I_Kit extends SRP_KitBase{};
class SRP_Letter_J_Kit extends SRP_KitBase{};
class SRP_Letter_K_Kit extends SRP_KitBase{};
class SRP_Letter_L_Kit extends SRP_KitBase{};
class SRP_Letter_M_Kit extends SRP_KitBase{};
class SRP_Letter_N_Kit extends SRP_KitBase{};
class SRP_Letter_O_Kit extends SRP_KitBase{};
class SRP_Letter_P_Kit extends SRP_KitBase{};
class SRP_Letter_Q_Kit extends SRP_KitBase{};
class SRP_Letter_R_Kit extends SRP_KitBase{};
class SRP_Letter_S_Kit extends SRP_KitBase{};
class SRP_Letter_T_Kit extends SRP_KitBase{};
class SRP_Letter_U_Kit extends SRP_KitBase{};
class SRP_Letter_V_Kit extends SRP_KitBase{};
class SRP_Letter_W_Kit extends SRP_KitBase{};
class SRP_Letter_X_Kit extends SRP_KitBase{};
class SRP_Letter_Y_Kit extends SRP_KitBase{};
class SRP_Letter_Z_Kit extends SRP_KitBase{};
class SRP_Letter_0_Kit extends SRP_KitBase{};
class SRP_Letter_1_Kit extends SRP_KitBase{};
class SRP_Letter_2_Kit extends SRP_KitBase{};
class SRP_Letter_3_Kit extends SRP_KitBase{};
class SRP_Letter_4_Kit extends SRP_KitBase{};
class SRP_Letter_5_Kit extends SRP_KitBase{};
class SRP_Letter_6_Kit extends SRP_KitBase{};
class SRP_Letter_7_Kit extends SRP_KitBase{};
class SRP_Letter_8_Kit extends SRP_KitBase{};
class SRP_Letter_9_Kit extends SRP_KitBase{};
class SRP_Letter_Ampersand_Kit extends SRP_KitBase{};
class SRP_Letter_Asterisk_Kit extends SRP_KitBase{};
class SRP_Letter_Dollars_Kit extends SRP_KitBase{};
class SRP_Letter_Equals_Kit extends SRP_KitBase{};
class SRP_Letter_Exclamation_Kit extends SRP_KitBase{};
class SRP_Letter_Hash_Kit extends SRP_KitBase{};
class SRP_Letter_Parenthesis_Kit extends SRP_KitBase{};
class SRP_Letter_Percent_Kit extends SRP_KitBase{};
class SRP_Letter_Plus_Kit extends SRP_KitBase{};
class SRP_Letter_Question_Kit extends SRP_KitBase{};
class SRP_Letter_Slash_Kit extends SRP_KitBase{};
class SRP_Letter_Times_Kit extends SRP_KitBase{};

class SRP_Letter_Colorbase extends SRP_Container_Base
{
  override bool IsInventoryVisible()
	{
		return false;
	}

  override bool DisableVicinityIcon()
	{
		return true;
	}

  override bool IsHealthVisible()
	{
		return false;
	}

  string GetLetterSymbol()
  {
    return ConfigGetString("color");
  }

};

class SRP_Letter_A extends SRP_Letter_Colorbase{};
class SRP_Letter_B extends SRP_Letter_Colorbase{};
class SRP_Letter_C extends SRP_Letter_Colorbase{};
class SRP_Letter_D extends SRP_Letter_Colorbase{};
class SRP_Letter_E extends SRP_Letter_Colorbase{};
class SRP_Letter_F extends SRP_Letter_Colorbase{};
class SRP_Letter_G extends SRP_Letter_Colorbase{};
class SRP_Letter_H extends SRP_Letter_Colorbase{};
class SRP_Letter_I extends SRP_Letter_Colorbase{};
class SRP_Letter_J extends SRP_Letter_Colorbase{};
class SRP_Letter_K extends SRP_Letter_Colorbase{};
class SRP_Letter_L extends SRP_Letter_Colorbase{};
class SRP_Letter_M extends SRP_Letter_Colorbase{};
class SRP_Letter_N extends SRP_Letter_Colorbase{};
class SRP_Letter_O extends SRP_Letter_Colorbase{};
class SRP_Letter_P extends SRP_Letter_Colorbase{};
class SRP_Letter_Q extends SRP_Letter_Colorbase{};
class SRP_Letter_R extends SRP_Letter_Colorbase{};
class SRP_Letter_S extends SRP_Letter_Colorbase{};
class SRP_Letter_T extends SRP_Letter_Colorbase{};
class SRP_Letter_U extends SRP_Letter_Colorbase{};
class SRP_Letter_V extends SRP_Letter_Colorbase{};
class SRP_Letter_W extends SRP_Letter_Colorbase{};
class SRP_Letter_X extends SRP_Letter_Colorbase{};
class SRP_Letter_Y extends SRP_Letter_Colorbase{};
class SRP_Letter_Z extends SRP_Letter_Colorbase{};
class SRP_Letter_0 extends SRP_Letter_Colorbase{};
class SRP_Letter_1 extends SRP_Letter_Colorbase{};
class SRP_Letter_2 extends SRP_Letter_Colorbase{};
class SRP_Letter_3 extends SRP_Letter_Colorbase{};
class SRP_Letter_4 extends SRP_Letter_Colorbase{};
class SRP_Letter_5 extends SRP_Letter_Colorbase{};
class SRP_Letter_6 extends SRP_Letter_Colorbase{};
class SRP_Letter_7 extends SRP_Letter_Colorbase{};
class SRP_Letter_8 extends SRP_Letter_Colorbase{};
class SRP_Letter_9 extends SRP_Letter_Colorbase{};
class SRP_Letter_Ampersand extends SRP_Letter_Colorbase{};
class SRP_Letter_Asterisk extends SRP_Letter_Colorbase{};
class SRP_Letter_Dollars extends SRP_Letter_Colorbase{};
class SRP_Letter_Equals extends SRP_Letter_Colorbase{};
class SRP_Letter_Exclamation extends SRP_Letter_Colorbase{};
class SRP_Letter_Hash extends SRP_Letter_Colorbase{};
class SRP_Letter_Parenthesis extends SRP_Letter_Colorbase{};
class SRP_Letter_Percent extends SRP_Letter_Colorbase{};
class SRP_Letter_Plus extends SRP_Letter_Colorbase{};
class SRP_Letter_Question extends SRP_Letter_Colorbase{};
class SRP_Letter_Slash extends SRP_Letter_Colorbase{};
class SRP_Letter_Times extends SRP_Letter_Colorbase{};
