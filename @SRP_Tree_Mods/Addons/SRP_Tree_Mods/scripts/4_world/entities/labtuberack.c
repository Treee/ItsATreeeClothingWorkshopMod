class SRP_LabTubeRack extends ItemBase{

  bool IsSlotFilled(string slotName) {
    return FindAttachmentBySlotName(slotName) != null;
  }

  bool IsSlotFilledWithColor(string slotName, string color) {
    SRP_LabTube_Colorbase labtube = SRP_LabTube_Colorbase.Cast(FindAttachmentBySlotName(slotName));
    if (labtube) {
      // Print("lab tube color: " + labtube.GetType() + " " + labtube);
      if (labtube.GetType() == "SRP_LabTube_Clear" && color == "clear") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Blue" && color == "blue") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Red" && color == "red") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Green" && color == "green") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Yellow" && color == "yellow") {
        return true;
      }
    }
    return false;
  }

  bool IsMethPuzzleSolved() {
    bool slot1 = IsSlotFilledWithColor("TestTube1", "blue") || IsSlotFilledWithColor("TestTube1", "yellow") || IsSlotFilledWithColor("TestTube1", "clear");
    bool slot2 = IsSlotFilledWithColor("TestTube2", "yellow") || IsSlotFilledWithColor("TestTube2", "blue") || IsSlotFilledWithColor("TestTube2", "red");
    bool slot4 = IsSlotFilledWithColor("TestTube4", "yellow") || IsSlotFilledWithColor("TestTube4", "red") || IsSlotFilledWithColor("TestTube4", "green");
    bool slot5 = IsSlotFilledWithColor("TestTube5", "blue") || IsSlotFilledWithColor("TestTube5", "red") || IsSlotFilledWithColor("TestTube5", "yellow");
    return slot1 && slot2 && slot4 && slot5;
  }

  bool IsAcidPuzzleSolved() {
    return IsSkullAcidPuzzleSolved() || IsSmileyAcidPuzzleSolved();
  }
  bool IsSmileyAcidPuzzleSolved() {
    bool slot1 = IsSlotFilledWithColor("TestTube1", "blue") || IsSlotFilledWithColor("TestTube1", "yellow") || IsSlotFilledWithColor("TestTube1", "clear");
    bool slot2 = IsSlotFilledWithColor("TestTube2", "red") || IsSlotFilledWithColor("TestTube2", "red") || IsSlotFilledWithColor("TestTube2", "green");
    bool slot3 = IsSlotFilledWithColor("TestTube3", "yellow") || IsSlotFilledWithColor("TestTube3", "blue") || IsSlotFilledWithColor("TestTube3", "red");
    bool slot4 = IsSlotFilledWithColor("TestTube4", "clear") || IsSlotFilledWithColor("TestTube4", "yellow") || IsSlotFilledWithColor("TestTube4", "blue");
    bool slot5 = IsSlotFilledWithColor("TestTube5", "green") || IsSlotFilledWithColor("TestTube5", "red") || IsSlotFilledWithColor("TestTube5", "yellow");
    bool slot6 = IsSlotFilledWithColor("TestTube6", "clear") || IsSlotFilledWithColor("TestTube6", "clear") || IsSlotFilledWithColor("TestTube6", "clear");
    return slot1 && slot2 && slot3 && slot4 && slot5 && slot6;
  }
  bool IsSkullAcidPuzzleSolved() {
    bool slot6 = IsSlotFilledWithColor("TestTube1", "clear") || IsSlotFilledWithColor("TestTube1", "green") || IsSlotFilledWithColor("TestTube1", "red");
    bool slot5 = IsSlotFilledWithColor("TestTube2", "blue") || IsSlotFilledWithColor("TestTube2", "clear") || IsSlotFilledWithColor("TestTube2", "yellow");
    bool slot4 = IsSlotFilledWithColor("TestTube3", "red") || IsSlotFilledWithColor("TestTube3", "yellow") || IsSlotFilledWithColor("TestTube3", "blue");
    bool slot3 = IsSlotFilledWithColor("TestTube4", "blue") || IsSlotFilledWithColor("TestTube4", "clear") || IsSlotFilledWithColor("TestTube4", "red");
    bool slot2 = IsSlotFilledWithColor("TestTube5", "yellow") || IsSlotFilledWithColor("TestTube5", "green") || IsSlotFilledWithColor("TestTube5", "green");
    bool slot1 = IsSlotFilledWithColor("TestTube6", "red") || IsSlotFilledWithColor("TestTube6", "blue") || IsSlotFilledWithColor("TestTube6", "red");
    return slot1 && slot2 && slot3 && slot4 && slot5 && slot6;
  }

  bool IsBathSaltsPuzzleSolved() {
    bool slot5 = IsSlotFilledWithColor("TestTube2", "green") || IsSlotFilledWithColor("TestTube2", "red");
    bool slot3 = IsSlotFilledWithColor("TestTube4", "clear") || IsSlotFilledWithColor("TestTube4", "red") || IsSlotFilledWithColor("TestTube4", "blue");
    bool slot2 = IsSlotFilledWithColor("TestTube5", "blue") || IsSlotFilledWithColor("TestTube5", "red") || IsSlotFilledWithColor("TestTube5", "yellow");
    return slot2 && slot3 && slot5;
  }
};

class SRP_LabTube_Colorbase extends ItemBase {};
class SRP_LabTube_Clear extends SRP_LabTube_Colorbase {};
class SRP_LabTube_Blue extends SRP_LabTube_Colorbase {};
class SRP_LabTube_Red extends SRP_LabTube_Colorbase {};
class SRP_LabTube_Green extends SRP_LabTube_Colorbase {};
class SRP_LabTube_Yellow extends SRP_LabTube_Colorbase {};
