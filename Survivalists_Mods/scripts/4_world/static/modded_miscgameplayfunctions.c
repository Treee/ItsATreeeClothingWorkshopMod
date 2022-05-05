modded class MiscGameplayFunctions
{
  static void AttachTo(notnull Object child, notnull Object parent, vector local_pos = "0 0 0", vector orientation = "0 0 0", string mem_point = "")
  {
    if (mem_point != "")
    {
      if (parent.MemoryPointExists(mem_point))
      {
        local_pos += parent.GetMemoryPointPos(mem_point);
      }
    }

    child.SetOrientation(orientation);
    child.SetPosition(local_pos);

    parent.AddChild(child, -1);
    parent.Update();
  }
};