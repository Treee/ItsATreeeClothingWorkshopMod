class ActionShake8BallCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class ActionShake8Ball extends ActionContinuousBase
{	
	void ActionShake8Ball()
	{
		m_CallbackClass = ActionShake8BallCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
	}

  override bool HasTarget()	
	{
		return false;
	}

  override string GetText()
	{
		return "Shake 8 Ball";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		SRP_PoolBall_8 poolball;
		if( Class.CastTo(poolball, item))
		{
      return true;
		}
		return false;
	}	

	override void OnFinishProgressServer( ActionData action_data )
	{	
    action_data.m_Player.SendMessageToClient(action_data.m_Player, EightBallMessage());
	}

  string EightBallMessage()
  {
    float chance = Math.RandomFloatInclusive(0, 1);
    if (chance <= 0.5)
    {
      return GetAffirmativeAnswers().GetRandomElement();
    }
    else if (chance > 0.5 <= 0.75)
    {
      return GetNonCommittalAnswers().GetRandomElement();
    }
    else
    {
      return GetNegativeAnswers().GetRandomElement();
    }
  }

  TStringArray GetAffirmativeAnswers()
  {
    return {
      "It is certain",
      "It is decidedly so",
      "Without a doubt",
      "Yes definitely",
      "You may rely on it",
      "As I see it, yes",
      "Most likely",
      "Outlook good",
      "Yes",
      "Signs point to yes",
    };
  }

  TStringArray GetNonCommittalAnswers()
  {
    return {
      "Reply hazy, try again",
      "Ask again later",
      "Better not tell you now",
      "Cannot predict now",
      "concentrate and ask again",
    };
  }

  TStringArray GetNegativeAnswers()
  {
    return {
      "Don't count on it",
      "My reply is no",
      "My sources say no",
      "Outlook not so good",
      "Very doubtful"
    };
  }
};