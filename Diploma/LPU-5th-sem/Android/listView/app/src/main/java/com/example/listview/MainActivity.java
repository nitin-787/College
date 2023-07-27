package com.example.listview;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class MainActivity extends AppCompatActivity {

    // array of strings
    ListView listView;
    String[] mobileArray = {"Android","IPhone","WindowsMobile","Blackberry","WebOS","Ubuntu","Windows7","Max OS X"};
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        listView = (ListView)findViewById(R.id.simpleListView);
        setContentView(R.layout.activity_main);
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, R.layout.activity_list_view, mobileArray);
        listView.setAdapter(adapter);

    }
}