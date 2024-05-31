modded class RecipeBase
{
    protected string TranslateDamageStates(int state)
    {
        string text = "";
        switch (state)
        {
            case GameConstants.STATE_RUINED:
                text = "ruined";
            break;
            case GameConstants.STATE_BADLY_DAMAGED:
                text = "badly damaged";
            break;
            case GameConstants.STATE_DAMAGED:
                text = "damaged";
            break;
            case GameConstants.STATE_WORN:
                text = "worn";
            break;
            case GameConstants.STATE_PRISTINE:
                text = "pristine";
            break;
            default:
            break;
        }
        return text;
    }
    protected string GetQuantityString(int index)
    {
        string quantityString = "";
        if (m_MinQuantityIngredient[index] > -1 && m_MaxQuantityIngredient[index] > -1)
            quantityString = string.Format("at least %1\nand no more than %2", m_MinQuantityIngredient[index], m_MaxQuantityIngredient[index])
        else if (m_MinQuantityIngredient[index] > -1 && m_MaxQuantityIngredient[index] == -1)
            quantityString = string.Format("no less than %1", m_MinQuantityIngredient[index])
        else if (m_MinQuantityIngredient[index] == -1 && m_MaxQuantityIngredient[index] > -1)
            quantityString = string.Format("no more than %1", m_MaxQuantityIngredient[index])
        else
            quantityString = "any number of";

        return quantityString;
    }
    protected string GetDamageString(int index)
    {
        string quantityString = "";
        if (m_MinDamageIngredient[index] > -1 && m_MaxDamageIngredient[index] > -1)
            quantityString = string.Format("at least %1 durability\nand no more than %2 state", TranslateDamageStates(m_MinDamageIngredient[index]), TranslateDamageStates(m_MaxDamageIngredient[index]))
        else if (m_MinDamageIngredient[index] > -1 && m_MaxDamageIngredient[index] == -1)
            quantityString = string.Format("at least %1 durability", TranslateDamageStates(m_MinDamageIngredient[index]))
        else if (m_MinDamageIngredient[index] == -1 && m_MaxDamageIngredient[index] > -1)
            quantityString = string.Format("no more than %1 state", TranslateDamageStates(m_MaxDamageIngredient[index]))
        else
            quantityString = "any durability";
        return quantityString;
    }
    protected string GetItemColor(string itemName)
    {
        string configPath = string.Format("%1 %2 color", CFG_VEHICLESPATH, itemName);
        string itemColor = "";
        if (GetGame().ConfigIsExisting(configPath))
            itemColor = GetGame().ConfigGetTextOut(configPath);
        return itemColor;
    }
    string PrintPrettyScramble()
    {
        string text = "";
        int i;
        TStringArray printIngredients = {};
        GetAllItems(printIngredients);
		for(i = 0; i < MAX_NUMBER_OF_INGREDIENTS; i++)
        {
            string ingredientClassName = MiscGameplayFunctions.GetItemDisplayName(printIngredients.Get(i));
            if (ingredientClassName == "")
                ingredientClassName = "~ILLEGIBLE~";
            ingredientClassName.ToLower();
            text = string.Format("%1\n%2\n%3\n%4", text, GetQuantityString(i), ingredientClassName, GetDamageString(i));
        }

        float chance = Math.RandomFloatInclusive(0,1);
        if (m_NumberOfResults == 0 || chance > 0.75)
            text = string.Format("%1\n~ILLEGIBLE~", text);
        else
        {
            string resultText = "PS ";
            for(i = 0; i < m_NumberOfResults; i++)
            {
                if (m_ResultInheritsColor[i] == -1 )
                    resultText = MiscGameplayFunctions.GetItemDisplayName(m_ItemsToCreate[i]);
                else
                    resultText = MiscGameplayFunctions.GetItemDisplayName(string.Format("%1%2",  m_ItemsToCreate[i], GetItemColor(m_ItemsToCreate[i])));
                resultText.ToLower();
                text = string.Format("%1\n%2", text, resultText);
            }
        }
        return MiscGameplayFunctions.ScrambleString(text);
    }
};