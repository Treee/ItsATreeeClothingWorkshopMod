class MetalWire_ColorBase extends ItemBase{};
class MetalWire_Copper extends MetalWire_ColorBase{}

class MetalWire_Black extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 0;
  }
  override int GetResistorMultiplier()
  {
    return 1;
  }
};
class MetalWire_Brown extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 1;
  }
  override int GetResistorMultiplier()
  {
    return 10;
  }
  override float GetResistorTolerance()
  {
    return 0.01;
  }
  override int GetResistorTemperaturCoeffcient()
  {
    return 100; //ppm
  }
};
class MetalWire_Red extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 2;
  }
  override int GetResistorMultiplier()
  {
    return 100;
  }
  override float GetResistorTolerance()
  {
    return 0.02;
  }
  override int GetResistorTemperaturCoeffcient()
  {
    return 50; //ppm
  }
};
class MetalWire_Orange extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 3;
  }
  override int GetResistorMultiplier()
  {
    return 1000;
  }
  override int GetResistorTemperaturCoeffcient()
  {
    return 15; //ppm
  }
};
class MetalWire_Yellow extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 4;
  }
  override int GetResistorMultiplier()
  {
    return 10000;
  }
  override int GetResistorTemperaturCoeffcient()
  {
    return 25; //ppm
  }
};
class MetalWire_Green extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 5;
  }
  override int GetResistorMultiplier()
  {
    return 100000;
  }
  override float GetResistorTolerance()
  {
    return 0.005;
  }
};
class MetalWire_Blue extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 6;
  }
  override int GetResistorMultiplier()
  {
    return 1000000;
  }
  override float GetResistorTolerance()
  {
    return 0.0025;
  }
};
class MetalWire_Purple extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 7;
  }
  override int GetResistorMultiplier()
  {
    return 10000000;
  }
  override float GetResistorTolerance()
  {
    return 0.0001;
  }
};
class MetalWire_Grey extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 8;
  }
  override float GetResistorTolerance()
  {
    return 0.00005;
  }
};
class MetalWire_White extends MetalWire_ColorBase
{
  override int GetResistorDigit()
  {
    return 9;
  }
};