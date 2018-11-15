#include <cmath>

namespace edu
{
	namespace vcccd
	{
		namespace vc
		{
			namespace csv13
			{
				double computeWindChillIndex(double temp, double vel)
				{
					if (temp > 10.0) return -1;
					return 33.0 - ((10.0*sqrt(vel) - vel)*(33.0 - temp)) / 23.1;
				}
			}
		}
	}
}