enum ItsATreeeSymptomIDs : SymptomIDs {
	SYMPTOM_ENRAGE
};

override class SymptomManager
{	
	override void Init()
	{
    super.Init();
		RegisterSymptom(new EnragedSymptom);
	}

	void OnInputUserDataReceived(ParamsReadContext ctx)
	{	
	}

}