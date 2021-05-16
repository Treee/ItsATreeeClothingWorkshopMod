modded class Hologram
{
  override protected void GetProjectionCollisionBox( out vector min_max[2] )
	{
    super.GetProjectionCollisionBox(min_max);
    // for  some reason there is no bounding box on the drug tub. this forces it to use good memory points
    if (m_Projection.GetType() == "SRP_DrugWorkbench") 
    {
			min_max[0] = m_Projection.GetMemoryPointPos( "box_placing_min" );
			min_max[1] = m_Projection.GetMemoryPointPos( "box_placing_max" );
    }
	}
};
