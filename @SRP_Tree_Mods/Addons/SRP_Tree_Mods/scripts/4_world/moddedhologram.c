modded class Hologram
{
  // Building anywhere override
  override void EvaluateCollision(ItemBase action_item = null)
	{	
		if (IsCollidingGPlot())
    {
			SetIsColliding(true);
    }
		else
    {
			SetIsColliding(false);
    }
	}

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

// Building anywhere override
modded class Construction
{
	override bool IsColliding( string part_name )
	{
		return false;
	}

	override bool IsCollidingEx( CollisionCheckData check_data )
	{
		return false;
	}
}

// Building anywhere override
modded class ConstructionBoxTrigger extends ManTrigger
{
	override bool IsColliding()
	{
		return false;
	}
}