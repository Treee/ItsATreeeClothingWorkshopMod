modded class Radio
{

   void Radio() 
    {
    }
    
    // override bool IsHeavyBehaviour() 
    // {
    //     return true;
    // }
    
    // override bool IsTwoHandedBehaviour() 
    // {
    //     return true;
    // }
    
    override bool IsDeployable() 
    {
        return true;
    }        	
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
    }
}