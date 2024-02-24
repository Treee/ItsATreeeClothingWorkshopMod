modded class MiscGameplayFunctions
{	
  override static string SanitizeString(string input)
	{
		int max_length = 2048;// 512; //vanilla
		string output = input;
		
		output = output.Substring(0,Math.Clamp(max_length,0,output.Length()));
    // Print("Sanitizing string input: " + input);
    // Print("Sanitizing string output: " + output);
		return output;
	}
};