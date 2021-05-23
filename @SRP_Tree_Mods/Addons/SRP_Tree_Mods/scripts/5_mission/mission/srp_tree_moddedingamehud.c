// modded class IngameHud
// {
//   protected Widget m_sleepPanelWidget;  

//   string panelSleep = "Sleep";
//   string iconSleepName = "IconSleep";
//   string iconSleepArrowUp3 = "SleepArrowUp3";
//   string iconSleepArrowUp2 = "SleepArrowUp2";
//   string iconSleepArrowUp1 = "SleepArrowUp1";
//   string iconSleepArrowDown1 = "SleepArrowDown1";
//   string iconSleepArrowDown2 = "SleepArrowDown2";
//   string iconSleepArrowDown3 = "SleepArrowDown3";

//   void IngameHud()
//   {
//     if (!m_sleepPanelWidget)
//     {
//       m_sleepPanelWidget = GetGame().GetWorkspace().CreateWidgets("SRP_Tree_Mods\\gui\\layouts\\srp_tree_layout.layout");
//       Print("SRP Tree Mods IngameHud Constructor - CreatedLayout" + m_sleepPanelWidget);
//       m_sleepPanelWidget.Show(false);
//     }
//   }

//   void ~IngameHud() 
//   {
//     if(m_sleepPanelWidget)
// 		{
// 			m_sleepPanelWidget.Show(false);
// 			m_sleepPanelWidget.Unlink();
// 		}
//   }

// 	override void Init( Widget hud_panel_widget )
// 	{
//     super.Init(hud_panel_widget);
//     Print("SRP Tree Mods IngameHud Init()");
//     DisplayTirednessNotifier(NTFKEY_SRP_TIREDNESS, 0, 0, 4);
//   }

//   override void RefreshHudVisibility()
//   {
//     super.RefreshHudVisibility();
//     // show the sleep icon like the other status icons
//     SetSleepWidgetVisibility(( !m_HudHidePlayer && !m_HudHideUI && m_HudState ) || m_HudInventory);
//   }

//   void DisplayTirednessNotifier( int key, int currentTirednessCount, int tirednessDelta, int status )
// 	{
// 		if( key == NTFKEY_SRP_TIREDNESS )
// 		{
//       ImageWidget w;
//       // Print("Tiredness DisplayNotifier: " + key);
// 			DisplayTirednessTendencyNormal( key, status );
//       SetTirednessState(status);
//       // tendency arrows
//       string arrow_name = "SleepArrowUp";
//       if ( tirednessDelta < 0 )
//       {
//         arrow_name = "SleepArrowDown";
//       }
//       tirednessDelta = Math.AbsInt( tirednessDelta );

//       for ( int x = 1; x < 4; x++ )
//       { 
//         // Print("Hiding Arrows: " + x.ToString());
//         Class.CastTo(w, m_sleepPanelWidget.FindAnyWidget( String("SleepArrowUp" + x.ToString() ) ) );
//         if( w )
//           w.Show( false );
//         Class.CastTo(w, m_sleepPanelWidget.FindAnyWidget( String("SleepArrowDown" + x.ToString() ) ) );
//         if( w )
//           w.Show( false );
//       }

//       if( tirednessDelta > 0 )
//       {
//         // Print("Sleep Tendency show " + tirednessDelta);
//         string widget_name = arrow_name + Math.Clamp( tirednessDelta, 1, 3 );
//         Class.CastTo(w, m_sleepPanelWidget.FindAnyWidget( widget_name ) );
//         if( w )
//           w.Show( true );
//       }
//     }
// 	}

//   void DisplayTirednessTendencyNormal( int key, int status )
// 	{
// 		ImageWidget w;
// 		Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget(iconSleepName));
// 		// Print("Override DisplayTendencyNormal " + w);
// 		if( w )
// 		{
// 			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
// 			float alpha = w.GetAlpha();
			
// 			switch( status )
// 			{
// 				case 2:
// 					w.SetColor( ARGB( alpha * 255, 220, 220, 0 ) );		//yellow
// 					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
// 					break;
// 				case 1:
// 					w.SetColor( ARGB( alpha * 255, 220, 0, 0 ) );		//red
// 					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
// 					break;
// 				case 0:
// 					if ( !m_TendencyStatusCritical.Contains( w ) )
// 					{
// 						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 220, 0, 0 ) );	//add to blinking group
// 					}
// 					break;
// 				default:
// 					w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//white
// 					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
// 					break;
// 			}
// 		}	
// 	}

//   void SetTirednessState( int state )
// 	{
//     // Print("Tiredness state " + state);
// 		ImageWidget tiredness = ImageWidget.Cast( m_sleepPanelWidget.FindAnyWidget(iconSleepName) );
// 		tiredness.LoadImageFile( 0, "set:srp_tree_iconset image:iconSleep" + state );
// 	}
  
//   void SetSleepWidgetVisibility(bool visible) 
//   {
//     if (m_sleepPanelWidget) 
//     {
//       // Print("SRP Tree Mods In Game Hud SetSleepWidgetVisibility!! visible=" + visible);      
//       m_sleepPanelWidget.Show(visible);
//     }
//   }
// }
