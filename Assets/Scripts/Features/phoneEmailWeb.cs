using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class phoneEmailWeb : MonoBehaviour {

	/* ------------------------------------------------------------------------- */
	// open facebook page
	public void openTechandBeerFacebookPage ()
	{
		float startTime;
		startTime = Time.timeSinceLevelLoad;

		// open the facebook app in IOS
		Application.OpenURL("fb://page/?id=350989365287405");
		// open the facebook app in Andorid
		Application.OpenURL ("fb://page/350989365287405");

		if (Time.timeSinceLevelLoad - startTime <= 1f)
		{
			//fail. Open safari.
			Application.OpenURL("https://www.facebook.com/Orlandotechandbeer/");
		}
	}

	/* ------------------------------------------------------------------------- */
	// open webpage 
	public void openLaunchableWebPage ()
	{
		Application.OpenURL("https://teamlaunchable.com/");
	}

	public void openPanderaWebPage ()
	{
		Application.OpenURL ("http://panderasystems.com/");
	}

	public void TeamLaunchableSite ()
	{
		Application.OpenURL ("https://TeamLaunchable.com");
	}
	
	public void Web_TheSoleMates ()
	{
		Application.OpenURL ("https://thesolemates.com/collections/shop-all-home-page");
	}
	
	public void Web_Tammys ()
	{
		Application.OpenURL ("http://tammysgreat4gifts.com/");
	}
	
	public void Web_Aisle ()
	{
		Application.OpenURL ("https://aislealwayslove.com/collections/bridal-suite/products/pre-order-will-you-be-my-bridesmaid-greeting-card");
	}
	
	public void Web_InkLetter ()
	{
		Application.OpenURL ("http://www.inkletterlove.com/");
	}
	
	public void Web_TheWhiteInvite ()
	{
		Application.OpenURL ("https://www.thewhiteinvite.com/collections/bridal-wedding-cards/products/thank-you-from-the-new-mr-mrs-floral-card");
	}


	/* ------------------------------------------------------------------------- */
	// phone call

	public void Phone_Launchable ()
	{
		Application.OpenURL ("tel://4079063034");
	}

	public void Phone_Dollar ()
	{
		Application.OpenURL ("tel://5613058898");
	}

	public void Phone_LangRealty()
	{
		Application.OpenURL ("tel://5619016960");
	}
	
	public void Phone_BlackBear()
	{
		Application.OpenURL ("tel://7725779882");
	}

	/* ------------------------------------------------------------------------- */
//	 open email 
	public void Email_Launchable ()
	{
		string email = "Alfred@TeamLaunchable.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Dollar ()
	{
		string email = "Joe@TeamLaunchable.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_LangRealty()
	{
		string email = "blake@blakemorris.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}
	
	public void Email_BlackBeer()
	{
		string email = "jfisher@sorensenrealestate.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}
	
	public void Email_TheSoleMates()
	{
		string email = "info@thesolemates.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
		
	}
	
	public void Email_Tammys()
	{
		string email = "Great4gifts@aol.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
		
	}
	
	public void Email_InkLetter()
	{
		string email = "inkletterlove@gmail.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
		
	}
	
	public void Email_TheWhiteInvite()
	{
		string email = "samantha@thewhiteinvite.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
		
	}
	
	
	string MyEscapeURL (string url)
	{
		return WWW.EscapeURL(url).Replace("+","%20");
	}
	/* ------------------------------------------------------------------------- */

}