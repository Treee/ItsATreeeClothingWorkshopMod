class CraftedItemWidget
{
  private Widget                  craftedItemWidget;
  private ItemPreviewWidget       m_craftItemPreview;
  private TextWidget              m_craftItemsNedeed;
  private MultilineTextWidget     m_Tooltip;
  private Widget                  m_CraftPanel;
  private CargoBase               m_CargoBase;
  private CraftingComponent          m_CraftingComponent;

  Widget Init( Widget parent, CraftingComponent craftingComponent, string amount, bool canCraft)
  {
    craftedItemWidget                    = GetGame().GetWorkspace().CreateWidgets("Survivalists_Mods/gui/layouts/OneItemForCraft.layout", parent);
    m_craftItemPreview      = ItemPreviewWidget.Cast(craftedItemWidget.FindAnyWidget("CraftItemPreview"));
    m_craftItemsNedeed       = TextWidget.Cast(craftedItemWidget.FindAnyWidget("Craftitemnedeed"));
    m_Tooltip               = MultilineTextWidget.Cast(craftedItemWidget.FindAnyWidget("CraftItemName"));
    m_CraftPanel            = Widget.Cast(craftedItemWidget.FindAnyWidget("CraftItemPanel"));
    m_CraftingComponent = craftingComponent;

    // Using "CreateObject" instead of "CreateObjectEx" because the item should only be created client side (gui magic)
    EntityAI entity = EntityAI.Cast(GetGame().CreateObject(m_CraftingComponent.className, vector.Zero, true));
    if (entity)
    { 
      // set the images     
      m_craftItemPreview.SetItem(entity);      
      m_Tooltip.SetText(entity.GetDisplayName());
      if (canCraft)
      {
        SetColor();
      }
      SetAmount(amount);      
    }
    return craftedItemWidget;
  }

  void SetColor()
  {
    m_craftItemsNedeed.SetColor(-16744416);
  }

  void SetAmount(string val)
  {
    m_craftItemsNedeed.SetText(val);
  }

  CraftingComponent GetCC()
  {
    return m_CraftingComponent;
  }

  void OnEnter()
  {
    m_CraftPanel.Show(true);
  }

  void OnLeave()
  {
    m_CraftPanel.Show(false);
  }
}
