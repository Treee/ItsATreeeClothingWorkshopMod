class PotentialTreasureLocation
{
  protected vector m_A; // leg
  protected vector m_B; // leg
  protected vector m_C; // hypotenuse
  protected string m_Hint;

  void PotentialTreasureLocation(vector a, vector b, vector c, string hint)
  {
    m_A = a;
    m_B = b;
    m_C = c;
    m_Hint = hint;
  }
  float GetArea()
  {
    // Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)
    return Math.AbsFloat((m_A[0] * (m_B[1] - m_C[1])) + (m_B[0] * (m_C[1] - m_A[1])) + (m_C[0] * (m_A[1] - m_B[1])));
  }
  vector GetRandomPointInside()
  {
    // translate points to origin via 2 vectors A and B
    vector a = m_B - m_A;
    vector b = m_C - m_A;
    // Print(string.Format("a: %1 b: %2", a.ToString(), b.ToString()));
    // get 2 floats that when combined are not greater than 1
    float r1 = Math.RandomFloat(0,1);
    float r2 = Math.RandomFloat(0,1);
    float total = r1+r2;
    if (total > 1)
    {
      r1 = 1 - r1;
      r2 = 1 - r2;
    }
    // Print(string.Format("r1: %1 r2: %2", r1, r2));
    // calculate random point
    vector w = (r1 * a) + (r2 * b);
    // Print(string.Format("w: %1 wPrim: %2", w.ToString(), ((m_A + w).ToString())));
    // translate point back to world space
    return (m_A + w);
  }
  string GetHint()
  {
    return m_Hint;
  }
  string GetToString()
  {
    string a = GetVectorPrettyString("Grid 1:", m_A);
    string b = GetVectorPrettyString("Grid 2:", m_B);
    string c = GetVectorPrettyString("Grid 3:", m_C);
    return string.Format("%1\n%2\n%3", a, b, c);
  }
  string GetVectorPrettyString(string extraText, vector v)
  {
    vector coords = ConvertToMapCoordinate(v);
    // return string.Format("%1: < %2, %3, %4 >", extraText, v[0].ToString().ToInt(), v[1].ToString().ToInt(), v[2].ToString().ToInt());
    return string.Format("%1 < %2 %3 >", extraText, coords[0], coords[2]);
  }
  vector ConvertToMapCoordinate(vector v)
  {
    int x = v[0]/100;
    int z = (16400-v[2])/100;

    return Vector(x, 1, z);
  }
};

class SRP_DynamicTreasureHunt
{
  ref array<ref PotentialTreasureLocation> m_PotentialTreasureLocations;

  void SRP_DynamicTreasureHunt()
  {
    Init();
  }
  void Init()
  {
    //https://blogs.sas.com/content/iml/2020/10/19/random-points-in-triangle.html
    //https://www.calculatorsoup.com/calculators/geometry-plane/midpoint-calculator.php#:~:text=You%20can%20find%20the%20midpoint,find%20y%20of%20the%20midpoint.&text=It's%20important%20to%20note%20that,point%20on%20a%20line%20segment.
    if (!m_PotentialTreasureLocations)
    {
      m_PotentialTreasureLocations = new array<ref PotentialTreasureLocation>;
      // Template
      // m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("", "", "", "Area_Hint"));
      // Hazelands
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3602.00 0.0 2540.00", "4042.00 0.0 2912.00", "3514.00 0.0 3186.00", "Hazelands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4312.00 0.0 3200.00", "3952.00 0.0 3640.00", "4414.00 0.0 3646.00", "Hazelands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4228.00 0.0 3232.00", "3660.00 0.0 3422.00", "3958.00 0.0 3598.00", "Hazelands"));
      // Portland
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6367.00 0.0 15073.00", "6265.00 0.0 15483.00", "5943.00 0.0 15469.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5919.00 0.0 15448.00", "6193.00 0.0 14971.00", "6340.00 0.0 15052.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6675.00 0.0 14426.00", "6805.00 0.0 14559.00", "6543.00 0.0 14949.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6337.00 0.0 14096.00", "6607.00 0.0 14077.00", "6544.00 0.0 14308.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6812.00 0.0 14045.00", "7344.00 0.0 14332.00", "6826.00 0.0 14355.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7390.00 0.0 13670.00", "6905.00 0.0 14040.00", "7343.00 0.0 14289.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6206.00 0.0 13454.00", "6708.00 0.0 13938.00", "6206.00 0.0 13928.00", "Portland"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6146.00 0.0 13194.00", "6746.00 0.0 13916.00", "7276.00 0.0 13512.00", "Portland"));
      //Archipelago
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3291.00 0.0 15480.50", "3603.00 0.0 15321.50", "3303.50 0.0 15241.50", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2472.00 0.0 15149.00", "2829.00 0.0 15038.00", "2464.00 0.0 14804.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2595.00 0.0 14446.00", "2545.00 0.0 14688.00", "2833.00 0.0 14816.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4439.00 0.0 14374.00", "4200.00 0.0 14078.00", "4682.00 0.0 14018.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3847.00 0.0 13536.00", "4058.00 0.0 13184.00", "4271.00 0.0 13587.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3050.00 0.0 13588.00", "2980.00 0.0 13849.00", "2796.00 0.0 13854.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2480.00 0.0 13733.00", "2635.00 0.0 13449.00", "2630.00 0.0 13773.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2568.00 0.0 12620.00", "2796.00 0.0 12535.00", "2755.00 0.0 12807.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("1980.00 0.0 12201.00", "2157.00 0.0 12026.00", "2280.00 0.0 12302.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("1953.00 0.0 10703.00", "2291.00 0.0 10782.00", "2087.00 0.0 11109.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2613.00 0.0 10668.00", "2838.00 0.0 10870.00", "2492.00 0.0 10872.00", "Archipelago"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3044.00 0.0 10491.00", "2762.00 0.0 10682.00", "2897.00 0.0 10809.00", "Archipelago"));
      // General Forest
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8599.00 0.0 13380.00", "8598.00 0.0 13601.00", "8170.00 0.0 13704.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7906.00 0.0 13446.00", "8125.00 0.0 13691.00", "8483.00 0.0 13372.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8088.00 0.0 13032.00", "8748.00 0.0 13084.00", "8080.00 0.0 13324.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("11136.00 0.0 8796.00", "10940.00 0.0 9232.00", "11696.00 0.0 9208.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3188.00 0.0 7828.00", "2972.00 0.0 8156.00", "3340.00 0.0 8158.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("1952.00 0.0 6308.00", "2104.00 0.0 6536.00", "1646.00 0.0 6734.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4548.00 0.0 8280.00", "4540.00 0.0 8864.00", "4876.00 0.0 8914.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5938.00 0.0 5284.00", "5518.00 0.0 6138.00", "6062.00 0.0 6268.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6020.00 0.0 5350.00", "6776.00 0.0 5850.00", "6106.00 0.0 6174.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4908.00 0.0 5338.00", "4478.00 0.0 5900.00", "5376.00 0.0 6174.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3606.00 0.0 4890.00", "4540.00 0.0 5118.00", "4370.00 0.0 5896.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4878.00 0.0 4550.00", "4916.00 0.0 5226.00", "5538.00 0.0 5308.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("12058.00 0.0 7914.00", "11822.00 0.0 8318.00", "11422.00 0.0 8344.00", "Woodlands"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10876.00 0.0 6796.00", "11080.00 0.0 7088.00", "10660.00 0.0 7084.00", "Woodlands"));
      // Bayville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9124.00 0.0 12504.00", "9544.00 0.0 12596.00", "9132.00 0.0 12974.00", "Bayville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9750.00 0.0 12596.00", "10146.00 0.0 12216.00", "9974.00 0.0 12902.00", "Bayville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10174.00 0.0 12258.00", "10364.00 0.0 12242.00", "10016.00 0.0 12912.00", "Bayville"));
      // Race Tracks
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9106.00 0.0 11578.00", "8768.00 0.0 12050.00", "9208.00 0.0 12126.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8982.00 0.0 11094.00", "9178.00 0.0 11404.00", "9048.00 0.0 11550.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9316.00 0.0 10936.00", "9672.00 0.0 10790.00", "9266.00 0.0 11244.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10992.00 0.0 11282.00", "11280.00 0.0 11396.00", "10496.00 0.0 11944.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10740.00 0.0 10910.00", "11074.00 0.0 10838.00", "11148.00 0.0 11176.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10453.00 0.0 10363.00", "10755.00 0.0 10526.00", "10658.00 0.0 10804.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10326.00 0.0 10644.00", "10596.00 0.0 10781.00", "10474.00 0.0 10506.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8971.00 0.0 10511.00", "9370.00 0.0 10658.00", "9091.00 0.0 11101.00", "Race Tracks"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8820.00 0.0 10220.00", "8616.00 0.0 10671.00", "8936.00 0.0 10800.00", "Race Tracks"));
      // Waldoboro
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9744.00 0.0 9762.00", "9472.00 0.0 10202.00", "9844.00 0.0 10226.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9254.00 0.0 9660.00", "9748.00 0.0 9696.00", "9412.00 0.0 10194.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9282.00 0.0 9040.00", "9556.00 0.0 8698.00", "9796.00 0.0 9132.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8990.00 0.0 8904.00", "9176.00 0.0 9166.00", "9322.00 0.0 8732.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8558.00 0.0 8554.00", "8494.00 0.0 8736.00", "8684.00 0.0 8730.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8278.00 0.0 8390.00", "8532.00 0.0 8526.00", "8454.00 0.0 8710.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8002.00 0.0 8458.00", "8196.00 0.0 8290.00", "8160.00 0.0 8594.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7986.00 0.0 8872.00", "8124.00 0.0 9098.00", "8278.00 0.0 8950.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7562.00 0.0 8838.00", "7820.00 0.0 8704.00", "8056.00 0.0 9054.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8538.00 0.0 9522.00", "8196.00 0.0 9802.00", "8016.00 0.0 9420.00", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7924.00 0.0 9276.00", "7776.00 0.0 9786.00", "8164.00 0.0 9804.00", "Waldoboro"));
      // KMUC
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6144.00 0.0 11536.00", "6420.00 0.0 11656.00", "6208.00 0.0 12220.00", "KMUC Bunker"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6104.00 0.0 11072.00", "6472.00 0.0 11032.00", "6324.00 0.0 11440.00", "KMUC Bunker"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6824.00 0.0 10356.00", "6360.00 0.0 10504.00", "6588.00 0.0 10812.00", "KMUC Bunker"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7228.00 0.0 10532.00", "6936.00 0.0 10308.00", "6700.00 0.0 10764.00", "KMUC Bunker"));
      // Woodworking Industrial
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4530.00 0.0 12353.00", "5023.00 0.0 12964.00", "5305.00 0.0 12826.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4983.00 0.0 11670.00", "4588.00 0.0 12327.00", "5279.00 0.0 12786.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5270.00 0.0 11382.00", "5522.00 0.0 11792.00", "5184.00 0.0 12050.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4888.00 0.0 11070.00", "4874.00 0.0 11536.00", "5196.00 0.0 11656.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4390.00 0.0 10938.00", "4770.00 0.0 11130.00", "4796.00 0.0 11594.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4380.00 0.0 11018.00", "4670.00 0.0 11530.00", "4522.00 0.0 11764.00", "Woodworking Industrial"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4496.00 0.0 10422.00", "4952.00 0.0 10244.00", "4444.00 0.0 10752.00", "Woodworking Industrial"));
      // Mountainville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6928.00 0.0 9058.00", "6906.00 0.0 9642.00", "7512.00 0.0 9502.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6440.00 0.0 9424.00", "6866.00 0.0 9694.00", "6876.00 0.0 8948.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7392.00 0.0 8518.00", "7174.00 0.0 8752.00", "7466.00 0.0 8778.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6192.00 0.0 8622.00", "6846.00 0.0 8864.00", "6422.00 0.0 9380.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5828.00 0.0 9222.00", "6116.00 0.0 8540.00", "6380.00 0.0 9358.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6592.00 0.0 8215.00", "6885.00 0.0 8359.00", "6741.00 0.0 8576.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6462.00 0.0 8331.00", "6570.00 0.0 8195.00", "6723.00 0.0 8564.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6389.00 0.0 8339.00", "6207.00 0.0 8436.00", "6582.00 0.0 8581.00", "Mountainville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6235.00 0.0 8223.00", "6404.00 0.0 8277.00", "6176.00 0.0 8423.00", "Mountainville"));
      // Old Town
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2304.00 0.0 9142.00", "1946.00 0.0 9468.00", "2884.00 0.0 9552.00", "Old Town"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2360.00 0.0 9072.00", "2684.00 0.0 8898.00", "2664.00 0.0 9218.00", "Old Town"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("1726.00 0.0 8718.00", "1356.00 0.0 8746.00", "1410.00 0.0 9066.00", "Old Town"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2304.00 0.0 8472.00", "1866.00 0.0 8610.00", "2118.00 0.0 8866.00", "Old Town"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2584.00 0.0 8084.00", "2210.00 0.0 8284.00", "2442.00 0.0 8544.00", "Old Town"));
      // Westbrook
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3191.00 0.0 7220.00", "2800.00 0.0 7421.00", "3272.00 0.0 7486.00", "Westbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3116.00 0.0 6928.00", "3517.00 0.0 7222.00", "3102.00 0.0 7163.00", "Westbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2819.00 0.0 6413.00", "3199.00 0.0 6641.00", "3033.00 0.0 6785.00", "Westbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3116.00 0.0 6292.00", "3120.00 0.0 6482.00", "2824.00 0.0 6395.00", "Westbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("2918.00 0.0 5800.00", "2862.00 0.0 6155.00", "3173.00 0.0 6258.00", "Westbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("3214.00 0.0 5038.00", "3182.00 0.0 5767.00", "3536.00 0.0 5863.00", "Westbrook"));
      // Georgestown
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5839.00 0.0 7747.00", "5605.00 0.0 7818.00", "5893.00 0.0 8325.00", "Georgestown"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5256.00 0.0 7800.00", "5281.00 0.0 8310.00", "5708.00 0.0 8187.00", "Georgestown"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4683.00 0.0 7985.00", "5099.00 0.0 8063.00", "4942.00 0.0 8234.00", "Georgestown"));
      // Oldfield
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6316.00 0.0 7390.00", "6422.00 0.0 7672.00", "6610.00 0.0 7596.00", "Oldfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6148.00 0.0 7072.00", "6032.00 0.0 7366.00", "6360.00 0.0 7620.00", "Oldfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6134.00 0.0 6996.00", "6006.00 0.0 7354.00", "5694.00 0.0 7254.00", "Oldfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6482.00 0.0 6868.00", "6300.00 0.0 7076.00", "6538.00 0.0 7328.00", "Oldfield"));
      // Sunset Cross
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6744.00 0.0 6526.00", "6488.00 0.0 6698.00", "6698.00 0.0 6738.00", "Sunset Cross"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6856.00 0.0 6322.00", "7272.00 0.0 6482.00", "6734.00 0.0 6656.00", "Sunset Cross"));
      // Warren Cove
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7758.00 0.0 5934.00", "7766.00 0.0 6208.00", "7982.00 0.0 6108.00", "Warren Cove"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7596.00 0.0 5940.00", "7364.00 0.0 6084.00", "7642.00 0.0 6186.00", "Warren Cove"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7064.00 0.0 5952.00", "6968.00 0.0 6092.00", "7318.00 0.0 6106.00", "Warren Cove"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7254.00 0.0 5370.00", "7140.00 0.0 5582.00", "7476.00 0.0 5668.00", "Warren Cove"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6616.00 0.0 5094.00", "6238.00 0.0 5278.00", "6866.00 0.0 5694.00", "Warren Cove"));
      // Airfield
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5002.00 0.0 3656.00", "4674.00 0.0 4224.00", "5266.00 0.0 4232.00", "Airfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5068.00 0.0 3442.00", "4440.00 0.0 3338.00", "4636.00 0.0 4198.00", "Airfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5766.00 0.0 3002.00", "6040.00 0.0 3544.00", "6212.00 0.0 3050.00", "Airfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5640.00 0.0 2330.00", "4714.00 0.0 2794.00", "5450.00 0.0 3120.00", "Airfield"));
      // Kushville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7956.00 0.0 4432.00", "7654.00 0.0 4822.00", "8034.00 0.0 4822.00", "Kushville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7820.00 0.0 3999.00", "8074.00 0.0 3980.00", "8247.00 0.0 4321.00", "Kushville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6675.00 0.0 4208.00", "7359.00 0.0 4068.00", "7242.00 0.0 4422.00", "Kushville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7368.00 0.0 3435.00", "7405.00 0.0 3967.00", "6993.00 0.0 3928.00", "Kushville"));
      // Greenville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("4294.00 0.0 1688.00", "3814.00 0.0 2112.00", "4450.00 0.0 2224.00", "Greenville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5768.00 0.0 1756.00", "5378.00 0.0 2068.00", "4856.00 0.0 1926.00", "Greenville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5054.00 0.0 1448.00", "4908.00 0.0 1872.00", "5592.00 0.0 1766.00", "Greenville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5646.00 0.0 1424.00", "5862.00 0.0 1248.00", "5896.00 0.0 1748.00", "Greenville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5098.00 0.0 1266.00", "5628.00 0.0 1188.00", "5634.00 0.0 1594.00", "Greenville"));
      // Stonington
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6018.00 0.0 2320.00", "5902.00 0.0 2672.00", "6372.00 0.0 2684.00", "Stonington"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("6268.00 0.0 1512.00", "5976.00 0.0 1780.00", "6404.00 0.0 1862.00", "Stonington"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8700.00 0.0 1942.00", "8446.00 0.0 2260.00", "8826.00 0.0 2390.00", "Stonington"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7634.00 0.0 2108.00", "7792.00 0.0 1684.00", "8138.00 0.0 2162.00", "Stonington"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7596.00 0.0 2174.00", "7814.00 0.0 2554.00", "7382.00 0.0 2524.00", "Stonington"));
      // Asheville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8014.00 0.0 3350.00", "7880.00 0.0 2944.00", "7526.00 0.0 3334.00", "Asheville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7418.00 0.0 2678.00", "7826.00 0.0 2846.00", "7502.00 0.0 3106.00", "Asheville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("7402.00 0.0 3072.00", "6962.00 0.0 3182.00", "7098.00 0.0 3432.00", "Asheville"));
      // Threepwood
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8528.00 0.0 7518.00", "8070.00 0.0 7580.00", "8708.00 0.0 8078.00", "Threepwood"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8544.00 0.0 7314.00", "8956.00 0.0 7502.00", "8728.00 0.0 8030.00", "Threepwood"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8886.00 0.0 7324.00", "9130.00 0.0 7256.00", "9200.00 0.0 7652.00", "Threepwood"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9202.00 0.0 7176.00", "9598.00 0.0 7210.00", "9400.00 0.0 7478.00", "Threepwood"));
      // Fairfield
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9946.00 0.0 6916.00", "9660.00 0.0 7136.00", "9828.00 0.0 7264.00", "Fairfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9546.00 0.0 6856.00", "9150.00 0.0 6802.00", "9500.00 0.0 7072.00", "Fairfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9568.00 0.0 6640.00", "9828.00 0.0 6492.00", "9822.00 0.0 6850.00", "Fairfield"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10472.00 0.0 6452.00", "10092.00 0.0 6700.00", "10306.00 0.0 6862.00", "Fairfield"));
      // Eastbrook
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10526.00 0.0 8059.00", "10162.00 0.0 8269.00", "9593.00 0.0 8096.00", "Eastbrook"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10499.00 0.0 7583.00", "10798.00 0.0 7827.00", "10533.00 0.0 7879.00", "Eastbrook"));
      // Oceanville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("8816.00 0.0 5158.00", "8932.00 0.0 5538.00", "8600.00 0.0 5472.00", "Oceanville Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9436.00 0.0 5342.00", "9034.00 0.0 5552.00", "9604.00 0.0 5578.00", "Oceanville Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9614.00 0.0 4406.00", "9014.00 0.0 4714.00", "9326.00 0.0 5094.00", "Oceanville Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10116.00 0.0 5364.00", "9478.00 0.0 5116.00", "9656.00 0.0 4646.00", "Oceanville Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10416.00 0.0 4892.00", "10562.00 0.0 5096.00", "10258.00 0.0 5274.00", "Oceanville Island"));
      // Camp Eagle
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9286.00 0.0 3302.00", "8836.00 0.0 3490.00", "9162.00 0.0 4082.00", "Camp Eagle"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9346.00 0.0 3320.00", "9944.00 0.0 3904.00", "9232.00 0.0 4068.00", "Camp Eagle"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("9880.00 0.0 3250.00", "9984.00 0.0 3882.00", "9426.00 0.0 3302.00", "Camp Eagle"));
      // Crotch Island
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10116.00 0.0 2056.00", "10544.00 0.0 2784.00", "10204.00 0.0 2908.00", "Crotch Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("10716.00 0.0 2684.00", "11480.00 0.0 2912.00", "10548.00 0.0 2988.00", "Crotch Island"));
      // Sheep Island
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("12624.00 0.0 7648.00", "13192.00 0.0 7592.00", "13092.00 0.0 8180.00", "Sheep Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("13088.00 0.0 6748.00", "12536.00 0.0 7372.00", "13304.00 0.0 6972.00", "Sheep Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("13756.00 0.0 6404.00", "14260.00 0.0 6928.00", "13516.00 0.0 7148.00", "Sheep Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("13032.00 0.0 6444.00", "13496.00 0.0 6060.00", "13396.00 0.0 6992.00", "Sheep Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("14408.00 0.0 5632.00", "14796.00 0.0 6080.00", "13612.00 0.0 6280.00", "Sheep Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("13400.00 0.0 5124.00", "12388.00 0.0 5804.00", "13508.00 0.0 6020.00", "Sheep Island"));
      // Crater Island
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("14522.00 0.0 1242.00", "15968.00 0.0 868.00", "15008.00 0.0 2098.00", "Crater Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("13288.00 0.0 3336.00", "14578.00 0.0 3868.00", "14794.00 0.0 2960.00", "Crater Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("12728.00 0.0 2080.00", "12692.00 0.0 3550.00", "13550.00 0.0 3078.00", "Crater Island"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("12636.00 0.0 1444.00", "11892.00 0.0 1976.00", "12654.00 0.0 3222.00", "Crater Island"));
    }
  }  
  PotentialTreasureLocation GetRandomTreasureLocation()
  {
    if (m_PotentialTreasureLocations.Count() > 0)
    {
      // return m_PotentialTreasureLocations[0];
      return m_PotentialTreasureLocations.GetRandomElement();
    }
    return null;
  }
  string GetRandomTreasureHuntText(PotentialTreasureLocation hint = null)
  {
    if (hint == null)
      return "Dont pass null\nlocations please.";
    return string.Format("I have hidden treasure\nin the area of %1\n\nTriangulation Coordinates:\n\n%2\n\nBurn After Reading", hint.GetHint(), hint.GetToString());
  }
  string GetRandomTreasureHuntRewardText()
  {
    return GetRandomTreasureHuntRewardTexts().GetRandomElement();
  }
  TStringArray GetRandomTreasureHuntRewardTexts()
  {
    return {
      "Hands off my stuff!\n I know where you live."
      "We used to run this\n island but a zombie ate\na chunk of our knees\nhope these serve\nyou better than us.\n\nRegards,\nLen & Spud."
    };
  }
  string GetRandomTreasureItem()
  {
    return GetRandomTreasureItems().GetRandomElement();
  }
  TStringArray GetRandomTreasureItems()
  {
    return {
      "jmc_mjolnir",
      "NailBox",
      "Nail",
      "Battery9V",
      "Whetstone",
      "Flaregun",
      "M67Grenade",
      "RGD5Grenade",
      "LandMineTrap",
      "AmmoBox_00buck_10rnd",
      "AmmoBox_12gaSlug_10Rnd",
      "AmmoBox_357_20Rnd",
      "AmmoBox_556x45_20Rnd",
      "AmmoBox_762x39_20Rnd",
      "AmmoBox_762x54_20Rnd",      
			"SRP_Mining_RawOre_Zinc",
			"SRP_MiningackInjector_Espen",
      "SRP_Stim_RawOre_Silver",
      "SRP_StimPPackInjector_Stag",
      "SRP_StimPackInjector_LocknSons",
    };
  }
  string GetRandomBuriableContainer()
  {
    return GetBuriableContainers().GetRandomElement();
  }
  TStringArray GetBuriableContainers()
  {
    return {
      "DryBag_Orange",
      "DryBag_Yellow",
      "DryBag_Blue",
      "DryBag_Green",
      "DryBag_Black",
      "DryBag_Red",
      "DryBag_Pink",
      "DryBag_MintBlue",
      "DryBag_Espen",
      "FurCourierBag",
      "FurImprovisedBag",
      "LeatherSack_Natural",
      "LeatherSack_Black",
      "LeatherSack_Beige",
      "LeatherSack_Brown",
      "AmmoBox",
      "WaterproofBag_Yellow",
      "WaterproofBag_Green",
      "WaterproofBag_Orange",
    };
  }
};