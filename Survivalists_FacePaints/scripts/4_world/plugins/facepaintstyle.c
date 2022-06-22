class FacePaintStyle
{
  string m_CamoName = "";
  string m_NormalMaterial = "";
  string m_PaintMaterial = "";
  string m_PaintMaterialUnshaved = "";
  string m_PaintMaterialBearded = "";
	
  int m_PaintIndex = 0;

	void FacePaintStyle(string camoName, string normal_material, string paint_material, string paint_material_unshaved, string paint_material_bearded, int index )
	{
    m_CamoName = camoName;
		m_NormalMaterial = normal_material;
		m_PaintMaterial = paint_material;
    m_PaintMaterialUnshaved = m_PaintMaterialUnshaved;
    m_PaintMaterialBearded = m_PaintMaterialBearded;
    m_PaintIndex = index;
    // Print("Index: " + m_PaintIndex + " CammoName: "+ camoName + " Normal Material: " + normal_material + " Painted: " + paint_material);
	}

  int GetPaintIndex()
  {
    return m_PaintIndex;
  }

  string GetPaintName()
  {
    return m_CamoName;
  }

	string GetMaterial( int material_type )
	{
    string value = "";
    if (material_type == 0)
    {
      value = m_NormalMaterial;
    }
    else if (material_type == 1)
    {
      value = m_PaintMaterial;
    }
		return value;
	}

	void SetMaterial( int material_type, string material )
	{
    if (material_type == 0)
    {
      m_NormalMaterial = material;
    }
    else if (material_type == 1)
    {
      m_PaintMaterial = material;
    }
	}
	
}