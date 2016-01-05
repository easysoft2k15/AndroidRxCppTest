
package com.Android1;

import android.app.Activity;
import android.widget.TextView;
import android.os.Bundle;

public class Android1 extends Activity
{
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

		//Use Rxcpp!!
		//---------------
		int res=rxcppLib.test2();

        /* Create a TextView and set its text to "Hello world" */
        TextView  tv = new TextView(this);
        tv.setText("Hello World!");
        setContentView(tv);
    }
}
