class Solution {
public:
  int compareVersion( const string& version1, const string& version2 ) {
    const int n1 = version1.size(), n2 = version2.size();

    for ( int i = 0, j = 0; i < n1 || j < n2; ++i, ++j ) {
      const int istart = i, jstart = j;
      for ( ; i < n1 && version1[ i ] != '.'; ++i )
        ;
      for ( ; j < n2 && version2[ j ] != '.'; ++j )
        ;
      const int num1 = i == istart
                         ? 0
                         : stoi( version1.substr( istart, i - istart ) ),
                num2 = j == jstart
                         ? 0
                         : stoi( version2.substr( jstart, j - jstart ) );
      if ( num1 > num2 ) {
        return 1;
      } else if ( num1 < num2 ) {
        return -1;
      }
    }
    return 0;
  }
};