modded class PPERequesterRegistrations extends Managed
{
	void PPERequesterRegistrations()
	{
		PPERequesterBank.RegisterRequester(PPERequester_SRPWeedEffect);
		PPERequesterBank.RegisterRequester(PPERequester_SRPTobaccoEffect);
		PPERequesterBank.RegisterRequester(PPERequester_SRPMethEffect);
		PPERequesterBank.RegisterRequester(PPERequester_SRPBathSaltEffect);
		PPERequesterBank.RegisterRequester(PPERequester_SRPAcidEffect);
	}
};
