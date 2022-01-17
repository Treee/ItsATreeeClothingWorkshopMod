modded class AITargetCallbacksPlayer
{
  override float GetMaxVisionRangeModifier(EntityAI pApplicant)
  {
    float vision = super.GetMaxVisionRangeModifier(pApplicant);
    float srpVision = m_Player.SRPAIVisionModifier();
    return Math.Min(srpVision, vision);    
  }
};