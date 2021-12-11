class ItemRecipeWidget
{
  private Widget                  item;
  private ImageWidget             m_OneItemImage; 
  private MultilineTextWidget     m_OneItem;
  private ButtonWidget            m_OneItemButtonWidget;
  private EditBoxWidget           m_OneItemStorage;

  const string RepairPath = "Survivalists_Mods/gui/repair.edds";
  const string PaintPath = "Survivalists_Mods/gui/paint.edds";
  const string CraftPath = "Survivalists_Mods/gui/craft.edds";

  CraftedItem m_CraftedItem;  
  
  void ItemRecipeWidget(){}

  Widget Init( Widget parent, string name, string type)
  {
    item = GetGame().GetWorkspace().CreateWidgets("Survivalists_Mods/gui/layouts/OneItemRecipe.layout", parent);
    m_OneItemImage = ImageWidget.Cast(item.FindAnyWidget("OneItemImage"));
    m_OneItem = MultilineTextWidget.Cast(item.FindAnyWidget("OneItem"));
    m_OneItemButtonWidget = ButtonWidget.Cast(item.FindAnyWidget("OneItemButtonWidget"));
    m_OneItemStorage = EditBoxWidget.Cast(item.FindAnyWidget("OneItemStorage"));

    m_OneItem.SetText(name);
    SetImage(type);
    return item;
  }

  void SetImage(string type)
  {
    // if ( !m_OneItemImage.LoadImageFile(0, GetTypePath(type)) ) // bring this back when we have different images per craft
    // {
    m_OneItemImage.LoadImageFile(0, GetVanilaTypePath(type));
    // }
  }

  string GetVanilaTypePath(string val)
  {
    switch (val)
    {
      case "repair":
        return RepairPath;
      break;
      case "paint":
        return PaintPath;
      break;
      case "craft":
        return CraftPath;
      break;
    }
    return CraftPath;
  }

  // string GetTypePath(string val)  // bring this back when custom images per crafting bench
  // {
  //   switch (val)
  //   {
  //     case "repair":
  //       return m_CraftedItem.PathToRepairImg;
  //     break;
  //     case "paint":
  //       return m_CraftedItem.PathToPaintImg;
  //     break;
  //     case "craft":
  //       return m_CraftedItem.PathToCraftImg;
  //     break;
  //   }
  //   return CraftPath;
  // }

  void SetData(CraftedItem itm)
  {
    m_CraftedItem = itm;
  }
}