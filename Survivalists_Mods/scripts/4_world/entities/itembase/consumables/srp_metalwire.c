class MetalWire_ColorBase extends ItemBase{};
class MetalWire_Black extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 0;
  }
  int GetResistorMultiplier()
  {
    return 1;
  }
};
class MetalWire_Brown extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 1;
  }
  int GetResistorMultiplier()
  {
    return 10;
  }
  float GetResistorTolerance()
  {
    return 0.01;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 100; //ppm
  }
};
class MetalWire_Red extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 2;
  }
  int GetResistorMultiplier()
  {
    return 100;
  }
  float GetResistorTolerance()
  {
    return 0.02;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 50; //ppm
  }
};
class MetalWire_Orange extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 3;
  }
  int GetResistorMultiplier()
  {
    return 1000;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 15; //ppm
  }
};
class MetalWire_Yellow extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 4;
  }
  int GetResistorMultiplier()
  {
    return 10000;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 25; //ppm
  }
};
class MetalWire_Green extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 5;
  }
  int GetResistorMultiplier()
  {
    return 100000;
  }
  float GetResistorTolerance()
  {
    return 0.005;
  }
};
class MetalWire_Blue extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 6;
  }
  int GetResistorMultiplier()
  {
    return 1000000;
  }
  float GetResistorTolerance()
  {
    return 0.0025;
  }
};
class MetalWire_Purple extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 7;
  }
  int GetResistorMultiplier()
  {
    return 10000000;
  }
  float GetResistorTolerance()
  {
    return 0.0001;
  }
};
class MetalWire_Grey extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 8;
  }
  float GetResistorTolerance()
  {
    return 0.00005;
  }
};
class MetalWire_White extends MetalWire_ColorBase
{
  int GetResistorDigit()
  {
    return 9;
  }
};