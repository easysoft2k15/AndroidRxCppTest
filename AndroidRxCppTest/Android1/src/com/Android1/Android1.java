
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
		int intFromCpp=rxcppLib.test();

        /* Create a TextView and set its text to "Hello world" */
        TextView  tv = new TextView(this);
        tv.setText(String.format("Got %d from C++!",intFromCpp));
        setContentView(tv);
    }
}
