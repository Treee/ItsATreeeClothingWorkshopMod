class FacePaintStyle
{
	string m_Materials[2];
  string m_CamoName = "";
	
	const int MATERIAL_TYPE_NORMAL = 0;
	const int MATERIAL_TYPE_PAINT = 1;
  int m_PaintIndex = 0;

	void FacePaintStyle(string camoName, string normal_material, string paint_material, int index )
	{
    m_CamoName = camoName;
		m_Materials[MATERIAL_TYPE_NORMAL] = normal_material;
		m_Materials[MATERIAL_TYPE_PAINT] = paint_material;
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
		return m_Materials[material_type];
	}

	void SetMaterial( int material_type, string material )
	{
		m_Materials[material_type] = material;
	}
	
}