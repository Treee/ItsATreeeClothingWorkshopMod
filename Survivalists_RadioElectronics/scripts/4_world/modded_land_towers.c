class Land_Tower_TC3_Red extends House
{
  override void EEInit() 
  {
		super.EEInit();
		Print("Land radio spawned + " + GetType() + ": position: " + GetPosition());
    GetDayZGame().IncrementActiveTowers();
	}
};
class Land_Tower_TC3_Grey extends Land_Tower_TC3_Red {};
class Land_Tower_TC1 extends Land_Tower_TC3_Red {};
class Land_Tower_TC2_Base extends Land_Tower_TC3_Red {};
class Land_Tower_TC4_Base extends Land_Tower_TC3_Red {};
class Land_Tower_TC6 extends Land_Tower_TC3_Red {};
