modded class BleedingSourcesManagerServer
{
  string GetBleedingSourcesString()
	{
		int count = m_BleedingSources.Count();
    string s = "";
    for (int i = 0; i < count; i++)
    {
			BleedingSource bs = m_BleedingSources.GetElement(i);
      s += string.Format("%1, ", GetBoneToString(bs.m_Bone));
    }
    return s;
	}

  string GetBoneToString(string boneName)
  {
    string name = "";
    boneName.ToLower();
    // Print("bone name: " + boneName);
    switch(boneName)
    {
      case "head":
        name = "Head";
        break;
      case "neck":
      case "pelvis":
      case "spine":
      case "spine1":
      case "spine2":
      case "spine3":
        name = "Torso";
        break;
      case "leftshoulder":
      case "leftarm":
      case "leftarmroll":
      case "leftforearm":
        name = "Left Arm";
        break;
      case "rightshoulder":
      case "rightarm":
      case "rightarmroll":
      case "rightforearm":
        name = "Right Arm";
        break;
      case "leftforearmroll":
        name = "Left Hand";
        break;
      case "rightforearmroll":
        name = "Right Hand";
        break;
      case "leftleg":
      case "leftlegroll":
      case "leftupleg":
      case "leftuplegroll":
        name = "Left Leg";
        break;
      case "rightleg":
      case "rightlegroll":
      case "rightupleg":
      case "rightuplegroll":
        name = "Right Leg";
        break;
      case "leftfoot":
      case "lefttoebase":
        name = "Left Foot";
        break;
      case "rightfoot":
      case "righttoebase":
        name = "Right Foot";
        break;
    }
    return name;
  }
};