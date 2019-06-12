#ifndef __ModifiedCAP__
#define __ModifiedCAP__
#include "Matrix.h"


// a modified (linearized) model for Capital Asset Pricing 

class ModifiedCAP {
public:
 ModifiedCAP(int N, int T, double R, Matrix &retMatrix, const std::vector<double> &ret);
 ModifiedCAP(const ModifiedCAP &p);
 ~ModifiedCAP();
 ModifiedCAP &operator=(const ModifiedCAP &p);
 void solveModel(std::vector<double> &results, double &objVal);
private:
 int m_N; // number of investment
 int m_T; // number of periods
 double m_R; // desired return
 Matrix m_retMatrix;
 std::vector<double> m_assetRet; // single returns
};

#endif /* defined(__ModifiedCAP__) */
