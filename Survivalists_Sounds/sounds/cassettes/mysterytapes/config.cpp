class CfgPatches
{
    class Survivalists_Sounds_MysteryTapes
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Sounds_Effects"
        };
    };
};

class CfgSoundShaders
{
    class SRPRadio_Cassette_MysteryTape_SoundShader_Base
    {
        samples[] = {};
        frequency = 1;
        range = 80;
        volume = 1.2;
    };
    class SRPRadio_MysteryTape_Shader1 : SRPRadio_Cassette_MysteryTape_SoundShader_Base
    {
        samples[] =
        {
            {"Survivalists_Sounds\sounds\cassettes\mysterytapes\data\William_Jackson_Interview.ogg",1}
        };
    };
    class SRPRadio_MysteryTape2_Shader1 : SRPRadio_Cassette_MysteryTape_SoundShader_Base
    {
        samples[] =
        {
      {"Survivalists_Sounds\sounds\cassettes\mysterytapes\data\Jennifer_Wells_Interview.ogg",1}
        };
    };
    class SRPRadio_MysteryTape_Mutant_Shader1 : SRPRadio_Cassette_MysteryTape_SoundShader_Base
    {
        samples[] =
        {
      {"Survivalists_Sounds\sounds\cassettes\mysterytapes\data\A_Mothers_Lullabye.ogg",1}
        };
    };
};

class CfgSoundSets
{
    class SRPRadio_MysteryTape_SoundSet1
    {
        soundShaders[] = { "SRPRadio_MysteryTape_Shader1" };
    };
    class SRPRadio_MysteryTape2_SoundSet1
    {
        soundShaders[] = { "SRPRadio_MysteryTape2_Shader1" };
    };
    class SRPRadio_MysteryTape_Mutant_SoundSet1
    {
        soundShaders[] = { "SRPRadio_MysteryTape_Mutant_Shader1" };
    };
};