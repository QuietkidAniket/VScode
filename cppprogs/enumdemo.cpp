enum class Traffic_light { green, yellow, red};

Traffic_light light = Traffic_light::red;

Traffic_light& operator++(Traffic_light& t)
    //prefix increment : ++
{
    switch(t){
        case Traffic_light::green : return t = Traffic_light::yellow;
        case Traffic_light::yellow : return t = Traffic_light::red;
        case Traffic_light::red : return t = Traffic_light::green;
    }

}

Traffic_light next = ++light; //next becomes Traffic_light::green