#include <iostream>

using namespace std;

int main()
{

	for (float apple=1; apple < 1000; apple++)
	{
		for (float banana=1; banana < 1000; banana++)
		{
		
			for (float pineapple=1; pineapple < 1000; pineapple++)
			{			
				float answer = fabsf(((apple / (banana + pineapple)) + (banana / (apple + pineapple)) + (pineapple / (apple + banana)) - 4.0f));
				if (answer<=FLT_EPSILON)
				{									
					cout << "사과 : " << apple << " 바나나 : " << banana << " 파인애플 : " << pineapple << endl;				
				}
			}
		}
	}
}