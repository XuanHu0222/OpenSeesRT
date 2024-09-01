template <class TC, class TA>
static inline int
//blk3x12x3(const MatrixND<3, 3> B, const MatrixND<12, 12>& C, MatrixND<12, 12>& A)
blk3x12x3(const MatrixND<3, 3> B, const TC& C, TA& A)
{
  A( 0,  0) = (B(0, 0) * C( 0,  0) + B(0, 1) * C( 1,  0) + B(0, 2) * C( 2,  0)) * B(0, 0) 
            + (B(0, 0) * C( 0,  1) + B(0, 1) * C( 1,  1) + B(0, 2) * C( 2,  1)) * B(0, 1) 
            + (B(0, 0) * C( 0,  2) + B(0, 1) * C( 1,  2) + B(0, 2) * C( 2,  2)) * B(0, 2);
  A( 1,  0) = (B(1, 0) * C( 0,  0) + B(1, 1) * C( 1,  0) + B(1, 2) * C( 2,  0)) * B(0, 0) 
            + (B(1, 0) * C( 0,  1) + B(1, 1) * C( 1,  1) + B(1, 2) * C( 2,  1)) * B(0, 1) 
            + (B(1, 0) * C( 0,  2) + B(1, 1) * C( 1,  2) + B(1, 2) * C( 2,  2)) * B(0, 2);
  A( 2,  0) = (B(2, 0) * C( 0,  0) + B(2, 1) * C( 1,  0) + B(2, 2) * C( 2,  0)) * B(0, 0) 
            + (B(2, 0) * C( 0,  1) + B(2, 1) * C( 1,  1) + B(2, 2) * C( 2,  1)) * B(0, 1) 
            + (B(2, 0) * C( 0,  2) + B(2, 1) * C( 1,  2) + B(2, 2) * C( 2,  2)) * B(0, 2);
  A( 3,  0) = (B(0, 0) * C( 3,  0) + B(0, 1) * C( 4,  0) + B(0, 2) * C( 5,  0)) * B(0, 0) 
            + (B(0, 0) * C( 3,  1) + B(0, 1) * C( 4,  1) + B(0, 2) * C( 5,  1)) * B(0, 1) 
            + (B(0, 0) * C( 3,  2) + B(0, 1) * C( 4,  2) + B(0, 2) * C( 5,  2)) * B(0, 2);
  A( 4,  0) = (B(1, 0) * C( 3,  0) + B(1, 1) * C( 4,  0) + B(1, 2) * C( 5,  0)) * B(0, 0) 
            + (B(1, 0) * C( 3,  1) + B(1, 1) * C( 4,  1) + B(1, 2) * C( 5,  1)) * B(0, 1) 
            + (B(1, 0) * C( 3,  2) + B(1, 1) * C( 4,  2) + B(1, 2) * C( 5,  2)) * B(0, 2);
  A( 5,  0) = (B(2, 0) * C( 3,  0) + B(2, 1) * C( 4,  0) + B(2, 2) * C( 5,  0)) * B(0, 0) 
            + (B(2, 0) * C( 3,  1) + B(2, 1) * C( 4,  1) + B(2, 2) * C( 5,  1)) * B(0, 1) 
            + (B(2, 0) * C( 3,  2) + B(2, 1) * C( 4,  2) + B(2, 2) * C( 5,  2)) * B(0, 2);
  A( 6,  0) = (B(0, 0) * C( 6,  0) + B(0, 1) * C( 7,  0) + B(0, 2) * C( 8,  0)) * B(0, 0) 
            + (B(0, 0) * C( 6,  1) + B(0, 1) * C( 7,  1) + B(0, 2) * C( 8,  1)) * B(0, 1) 
            + (B(0, 0) * C( 6,  2) + B(0, 1) * C( 7,  2) + B(0, 2) * C( 8,  2)) * B(0, 2);
  A( 7,  0) = (B(1, 0) * C( 6,  0) + B(1, 1) * C( 7,  0) + B(1, 2) * C( 8,  0)) * B(0, 0) 
            + (B(1, 0) * C( 6,  1) + B(1, 1) * C( 7,  1) + B(1, 2) * C( 8,  1)) * B(0, 1) 
            + (B(1, 0) * C( 6,  2) + B(1, 1) * C( 7,  2) + B(1, 2) * C( 8,  2)) * B(0, 2);
  A( 8,  0) = (B(2, 0) * C( 6,  0) + B(2, 1) * C( 7,  0) + B(2, 2) * C( 8,  0)) * B(0, 0) 
            + (B(2, 0) * C( 6,  1) + B(2, 1) * C( 7,  1) + B(2, 2) * C( 8,  1)) * B(0, 1) 
            + (B(2, 0) * C( 6,  2) + B(2, 1) * C( 7,  2) + B(2, 2) * C( 8,  2)) * B(0, 2);
  A( 9,  0) = (B(0, 0) * C( 9,  0) + B(0, 1) * C(10,  0) + B(0, 2) * C(11,  0)) * B(0, 0) 
            + (B(0, 0) * C( 9,  1) + B(0, 1) * C(10,  1) + B(0, 2) * C(11,  1)) * B(0, 1) 
            + (B(0, 0) * C( 9,  2) + B(0, 1) * C(10,  2) + B(0, 2) * C(11,  2)) * B(0, 2);
  A(10,  0) = (B(1, 0) * C( 9,  0) + B(1, 1) * C(10,  0) + B(1, 2) * C(11,  0)) * B(0, 0) 
            + (B(1, 0) * C( 9,  1) + B(1, 1) * C(10,  1) + B(1, 2) * C(11,  1)) * B(0, 1) 
            + (B(1, 0) * C( 9,  2) + B(1, 1) * C(10,  2) + B(1, 2) * C(11,  2)) * B(0, 2);
  A(11,  0) = (B(2, 0) * C( 9,  0) + B(2, 1) * C(10,  0) + B(2, 2) * C(11,  0)) * B(0, 0) 
            + (B(2, 0) * C( 9,  1) + B(2, 1) * C(10,  1) + B(2, 2) * C(11,  1)) * B(0, 1) 
            + (B(2, 0) * C( 9,  2) + B(2, 1) * C(10,  2) + B(2, 2) * C(11,  2)) * B(0, 2);
  A( 0,  1) = (B(0, 0) * C( 0,  0) + B(0, 1) * C( 1,  0) + B(0, 2) * C( 2,  0)) * B(1, 0) 
            + (B(0, 0) * C( 0,  1) + B(0, 1) * C( 1,  1) + B(0, 2) * C( 2,  1)) * B(1, 1) 
            + (B(0, 0) * C( 0,  2) + B(0, 1) * C( 1,  2) + B(0, 2) * C( 2,  2)) * B(1, 2);
  A( 1,  1) = (B(1, 0) * C( 0,  0) + B(1, 1) * C( 1,  0) + B(1, 2) * C( 2,  0)) * B(1, 0) 
            + (B(1, 0) * C( 0,  1) + B(1, 1) * C( 1,  1) + B(1, 2) * C( 2,  1)) * B(1, 1) 
            + (B(1, 0) * C( 0,  2) + B(1, 1) * C( 1,  2) + B(1, 2) * C( 2,  2)) * B(1, 2);
  A( 2,  1) = (B(2, 0) * C( 0,  0) + B(2, 1) * C( 1,  0) + B(2, 2) * C( 2,  0)) * B(1, 0) 
            + (B(2, 0) * C( 0,  1) + B(2, 1) * C( 1,  1) + B(2, 2) * C( 2,  1)) * B(1, 1) 
            + (B(2, 0) * C( 0,  2) + B(2, 1) * C( 1,  2) + B(2, 2) * C( 2,  2)) * B(1, 2);
  A( 3,  1) = (B(0, 0) * C( 3,  0) + B(0, 1) * C( 4,  0) + B(0, 2) * C( 5,  0)) * B(1, 0) 
            + (B(0, 0) * C( 3,  1) + B(0, 1) * C( 4,  1) + B(0, 2) * C( 5,  1)) * B(1, 1) 
            + (B(0, 0) * C( 3,  2) + B(0, 1) * C( 4,  2) + B(0, 2) * C( 5,  2)) * B(1, 2);
  A( 4,  1) = (B(1, 0) * C( 3,  0) + B(1, 1) * C( 4,  0) + B(1, 2) * C( 5,  0)) * B(1, 0) 
            + (B(1, 0) * C( 3,  1) + B(1, 1) * C( 4,  1) + B(1, 2) * C( 5,  1)) * B(1, 1) 
            + (B(1, 0) * C( 3,  2) + B(1, 1) * C( 4,  2) + B(1, 2) * C( 5,  2)) * B(1, 2);
  A( 5,  1) = (B(2, 0) * C( 3,  0) + B(2, 1) * C( 4,  0) + B(2, 2) * C( 5,  0)) * B(1, 0) 
            + (B(2, 0) * C( 3,  1) + B(2, 1) * C( 4,  1) + B(2, 2) * C( 5,  1)) * B(1, 1) 
            + (B(2, 0) * C( 3,  2) + B(2, 1) * C( 4,  2) + B(2, 2) * C( 5,  2)) * B(1, 2);
  A( 6,  1) = (B(0, 0) * C( 6,  0) + B(0, 1) * C( 7,  0) + B(0, 2) * C( 8,  0)) * B(1, 0) 
            + (B(0, 0) * C( 6,  1) + B(0, 1) * C( 7,  1) + B(0, 2) * C( 8,  1)) * B(1, 1) 
            + (B(0, 0) * C( 6,  2) + B(0, 1) * C( 7,  2) + B(0, 2) * C( 8,  2)) * B(1, 2);
  A( 7,  1) = (B(1, 0) * C( 6,  0) + B(1, 1) * C( 7,  0) + B(1, 2) * C( 8,  0)) * B(1, 0) 
            + (B(1, 0) * C( 6,  1) + B(1, 1) * C( 7,  1) + B(1, 2) * C( 8,  1)) * B(1, 1) 
            + (B(1, 0) * C( 6,  2) + B(1, 1) * C( 7,  2) + B(1, 2) * C( 8,  2)) * B(1, 2);
  A( 8,  1) = (B(2, 0) * C( 6,  0) + B(2, 1) * C( 7,  0) + B(2, 2) * C( 8,  0)) * B(1, 0) 
            + (B(2, 0) * C( 6,  1) + B(2, 1) * C( 7,  1) + B(2, 2) * C( 8,  1)) * B(1, 1) 
            + (B(2, 0) * C( 6,  2) + B(2, 1) * C( 7,  2) + B(2, 2) * C( 8,  2)) * B(1, 2);
  A( 9,  1) = (B(0, 0) * C( 9,  0) + B(0, 1) * C(10,  0) + B(0, 2) * C(11,  0)) * B(1, 0) 
            + (B(0, 0) * C( 9,  1) + B(0, 1) * C(10,  1) + B(0, 2) * C(11,  1)) * B(1, 1) 
            + (B(0, 0) * C( 9,  2) + B(0, 1) * C(10,  2) + B(0, 2) * C(11,  2)) * B(1, 2);
  A(10,  1) = (B(1, 0) * C( 9,  0) + B(1, 1) * C(10,  0) + B(1, 2) * C(11,  0)) * B(1, 0) 
            + (B(1, 0) * C( 9,  1) + B(1, 1) * C(10,  1) + B(1, 2) * C(11,  1)) * B(1, 1) 
            + (B(1, 0) * C( 9,  2) + B(1, 1) * C(10,  2) + B(1, 2) * C(11,  2)) * B(1, 2);
  A(11,  1) = (B(2, 0) * C( 9,  0) + B(2, 1) * C(10,  0) + B(2, 2) * C(11,  0)) * B(1, 0) 
            + (B(2, 0) * C( 9,  1) + B(2, 1) * C(10,  1) + B(2, 2) * C(11,  1)) * B(1, 1) 
            + (B(2, 0) * C( 9,  2) + B(2, 1) * C(10,  2) + B(2, 2) * C(11,  2)) * B(1, 2);
  A( 0,  2) = (B(0, 0) * C( 0,  0) + B(0, 1) * C( 1,  0) + B(0, 2) * C( 2,  0)) * B(2, 0) 
            + (B(0, 0) * C( 0,  1) + B(0, 1) * C( 1,  1) + B(0, 2) * C( 2,  1)) * B(2, 1) 
            + (B(0, 0) * C( 0,  2) + B(0, 1) * C( 1,  2) + B(0, 2) * C( 2,  2)) * B(2, 2);
  A( 1,  2) = (B(1, 0) * C( 0,  0) + B(1, 1) * C( 1,  0) + B(1, 2) * C( 2,  0)) * B(2, 0) 
            + (B(1, 0) * C( 0,  1) + B(1, 1) * C( 1,  1) + B(1, 2) * C( 2,  1)) * B(2, 1) 
            + (B(1, 0) * C( 0,  2) + B(1, 1) * C( 1,  2) + B(1, 2) * C( 2,  2)) * B(2, 2);
  A( 2,  2) = (B(2, 0) * C( 0,  0) + B(2, 1) * C( 1,  0) + B(2, 2) * C( 2,  0)) * B(2, 0) 
            + (B(2, 0) * C( 0,  1) + B(2, 1) * C( 1,  1) + B(2, 2) * C( 2,  1)) * B(2, 1) 
            + (B(2, 0) * C( 0,  2) + B(2, 1) * C( 1,  2) + B(2, 2) * C( 2,  2)) * B(2, 2);
  A( 3,  2) = (B(0, 0) * C( 3,  0) + B(0, 1) * C( 4,  0) + B(0, 2) * C( 5,  0)) * B(2, 0) 
            + (B(0, 0) * C( 3,  1) + B(0, 1) * C( 4,  1) + B(0, 2) * C( 5,  1)) * B(2, 1) 
            + (B(0, 0) * C( 3,  2) + B(0, 1) * C( 4,  2) + B(0, 2) * C( 5,  2)) * B(2, 2);
  A( 4,  2) = (B(1, 0) * C( 3,  0) + B(1, 1) * C( 4,  0) + B(1, 2) * C( 5,  0)) * B(2, 0) 
            + (B(1, 0) * C( 3,  1) + B(1, 1) * C( 4,  1) + B(1, 2) * C( 5,  1)) * B(2, 1) 
            + (B(1, 0) * C( 3,  2) + B(1, 1) * C( 4,  2) + B(1, 2) * C( 5,  2)) * B(2, 2);
  A( 5,  2) = (B(2, 0) * C( 3,  0) + B(2, 1) * C( 4,  0) + B(2, 2) * C( 5,  0)) * B(2, 0) 
            + (B(2, 0) * C( 3,  1) + B(2, 1) * C( 4,  1) + B(2, 2) * C( 5,  1)) * B(2, 1) 
            + (B(2, 0) * C( 3,  2) + B(2, 1) * C( 4,  2) + B(2, 2) * C( 5,  2)) * B(2, 2);
  A( 6,  2) = (B(0, 0) * C( 6,  0) + B(0, 1) * C( 7,  0) + B(0, 2) * C( 8,  0)) * B(2, 0) 
            + (B(0, 0) * C( 6,  1) + B(0, 1) * C( 7,  1) + B(0, 2) * C( 8,  1)) * B(2, 1) 
            + (B(0, 0) * C( 6,  2) + B(0, 1) * C( 7,  2) + B(0, 2) * C( 8,  2)) * B(2, 2);
  A( 7,  2) = (B(1, 0) * C( 6,  0) + B(1, 1) * C( 7,  0) + B(1, 2) * C( 8,  0)) * B(2, 0) 
            + (B(1, 0) * C( 6,  1) + B(1, 1) * C( 7,  1) + B(1, 2) * C( 8,  1)) * B(2, 1) 
            + (B(1, 0) * C( 6,  2) + B(1, 1) * C( 7,  2) + B(1, 2) * C( 8,  2)) * B(2, 2);
  A( 8,  2) = (B(2, 0) * C( 6,  0) + B(2, 1) * C( 7,  0) + B(2, 2) * C( 8,  0)) * B(2, 0) 
            + (B(2, 0) * C( 6,  1) + B(2, 1) * C( 7,  1) + B(2, 2) * C( 8,  1)) * B(2, 1) 
            + (B(2, 0) * C( 6,  2) + B(2, 1) * C( 7,  2) + B(2, 2) * C( 8,  2)) * B(2, 2);
  A( 9,  2) = (B(0, 0) * C( 9,  0) + B(0, 1) * C(10,  0) + B(0, 2) * C(11,  0)) * B(2, 0) 
            + (B(0, 0) * C( 9,  1) + B(0, 1) * C(10,  1) + B(0, 2) * C(11,  1)) * B(2, 1) 
            + (B(0, 0) * C( 9,  2) + B(0, 1) * C(10,  2) + B(0, 2) * C(11,  2)) * B(2, 2);
  A(10,  2) = (B(1, 0) * C( 9,  0) + B(1, 1) * C(10,  0) + B(1, 2) * C(11,  0)) * B(2, 0) 
            + (B(1, 0) * C( 9,  1) + B(1, 1) * C(10,  1) + B(1, 2) * C(11,  1)) * B(2, 1) 
            + (B(1, 0) * C( 9,  2) + B(1, 1) * C(10,  2) + B(1, 2) * C(11,  2)) * B(2, 2);
  A(11,  2) = (B(2, 0) * C( 9,  0) + B(2, 1) * C(10,  0) + B(2, 2) * C(11,  0)) * B(2, 0) 
            + (B(2, 0) * C( 9,  1) + B(2, 1) * C(10,  1) + B(2, 2) * C(11,  1)) * B(2, 1) 
            + (B(2, 0) * C( 9,  2) + B(2, 1) * C(10,  2) + B(2, 2) * C(11,  2)) * B(2, 2);

  A( 0,  3) = (B(0, 0) * C( 0,  3) + B(0, 1) * C( 1,  3) + B(0, 2) * C( 2,  3)) * B(0, 0) 
            + (B(0, 0) * C( 0,  4) + B(0, 1) * C( 1,  4) + B(0, 2) * C( 2,  4)) * B(0, 1) 
            + (B(0, 0) * C( 0,  5) + B(0, 1) * C( 1,  5) + B(0, 2) * C( 2,  5)) * B(0, 2);
  A( 1,  3) = (B(1, 0) * C( 0,  3) + B(1, 1) * C( 1,  3) + B(1, 2) * C( 2,  3)) * B(0, 0) 
            + (B(1, 0) * C( 0,  4) + B(1, 1) * C( 1,  4) + B(1, 2) * C( 2,  4)) * B(0, 1) 
            + (B(1, 0) * C( 0,  5) + B(1, 1) * C( 1,  5) + B(1, 2) * C( 2,  5)) * B(0, 2);
  A( 2,  3) = (B(2, 0) * C( 0,  3) + B(2, 1) * C( 1,  3) + B(2, 2) * C( 2,  3)) * B(0, 0) 
            + (B(2, 0) * C( 0,  4) + B(2, 1) * C( 1,  4) + B(2, 2) * C( 2,  4)) * B(0, 1) 
            + (B(2, 0) * C( 0,  5) + B(2, 1) * C( 1,  5) + B(2, 2) * C( 2,  5)) * B(0, 2);
  A( 3,  3) = (B(0, 0) * C( 3,  3) + B(0, 1) * C( 4,  3) + B(0, 2) * C( 5,  3)) * B(0, 0) 
            + (B(0, 0) * C( 3,  4) + B(0, 1) * C( 4,  4) + B(0, 2) * C( 5,  4)) * B(0, 1) 
            + (B(0, 0) * C( 3,  5) + B(0, 1) * C( 4,  5) + B(0, 2) * C( 5,  5)) * B(0, 2);
  A( 4,  3) = (B(1, 0) * C( 3,  3) + B(1, 1) * C( 4,  3) + B(1, 2) * C( 5,  3)) * B(0, 0) 
            + (B(1, 0) * C( 3,  4) + B(1, 1) * C( 4,  4) + B(1, 2) * C( 5,  4)) * B(0, 1) 
            + (B(1, 0) * C( 3,  5) + B(1, 1) * C( 4,  5) + B(1, 2) * C( 5,  5)) * B(0, 2);
  A( 5,  3) = (B(2, 0) * C( 3,  3) + B(2, 1) * C( 4,  3) + B(2, 2) * C( 5,  3)) * B(0, 0) 
            + (B(2, 0) * C( 3,  4) + B(2, 1) * C( 4,  4) + B(2, 2) * C( 5,  4)) * B(0, 1) 
            + (B(2, 0) * C( 3,  5) + B(2, 1) * C( 4,  5) + B(2, 2) * C( 5,  5)) * B(0, 2);
  A( 6,  3) = (B(0, 0) * C( 6,  3) + B(0, 1) * C( 7,  3) + B(0, 2) * C( 8,  3)) * B(0, 0) 
            + (B(0, 0) * C( 6,  4) + B(0, 1) * C( 7,  4) + B(0, 2) * C( 8,  4)) * B(0, 1) 
            + (B(0, 0) * C( 6,  5) + B(0, 1) * C( 7,  5) + B(0, 2) * C( 8,  5)) * B(0, 2);
  A( 7,  3) = (B(1, 0) * C( 6,  3) + B(1, 1) * C( 7,  3) + B(1, 2) * C( 8,  3)) * B(0, 0) 
            + (B(1, 0) * C( 6,  4) + B(1, 1) * C( 7,  4) + B(1, 2) * C( 8,  4)) * B(0, 1) 
            + (B(1, 0) * C( 6,  5) + B(1, 1) * C( 7,  5) + B(1, 2) * C( 8,  5)) * B(0, 2);
  A( 8,  3) = (B(2, 0) * C( 6,  3) + B(2, 1) * C( 7,  3) + B(2, 2) * C( 8,  3)) * B(0, 0) 
            + (B(2, 0) * C( 6,  4) + B(2, 1) * C( 7,  4) + B(2, 2) * C( 8,  4)) * B(0, 1) 
            + (B(2, 0) * C( 6,  5) + B(2, 1) * C( 7,  5) + B(2, 2) * C( 8,  5)) * B(0, 2);
  A( 9,  3) = (B(0, 0) * C( 9,  3) + B(0, 1) * C(10,  3) + B(0, 2) * C(11,  3)) * B(0, 0) 
            + (B(0, 0) * C( 9,  4) + B(0, 1) * C(10,  4) + B(0, 2) * C(11,  4)) * B(0, 1) 
            + (B(0, 0) * C( 9,  5) + B(0, 1) * C(10,  5) + B(0, 2) * C(11,  5)) * B(0, 2);
  A(10,  3) = (B(1, 0) * C( 9,  3) + B(1, 1) * C(10,  3) + B(1, 2) * C(11,  3)) * B(0, 0) 
            + (B(1, 0) * C( 9,  4) + B(1, 1) * C(10,  4) + B(1, 2) * C(11,  4)) * B(0, 1) 
            + (B(1, 0) * C( 9,  5) + B(1, 1) * C(10,  5) + B(1, 2) * C(11,  5)) * B(0, 2);
  A(11,  3) = (B(2, 0) * C( 9,  3) + B(2, 1) * C(10,  3) + B(2, 2) * C(11,  3)) * B(0, 0) 
            + (B(2, 0) * C( 9,  4) + B(2, 1) * C(10,  4) + B(2, 2) * C(11,  4)) * B(0, 1) 
            + (B(2, 0) * C( 9,  5) + B(2, 1) * C(10,  5) + B(2, 2) * C(11,  5)) * B(0, 2);
  A( 0,  4) = (B(0, 0) * C( 0,  3) + B(0, 1) * C( 1,  3) + B(0, 2) * C( 2,  3)) * B(1, 0) 
            + (B(0, 0) * C( 0,  4) + B(0, 1) * C( 1,  4) + B(0, 2) * C( 2,  4)) * B(1, 1) 
            + (B(0, 0) * C( 0,  5) + B(0, 1) * C( 1,  5) + B(0, 2) * C( 2,  5)) * B(1, 2);
  A( 1,  4) = (B(1, 0) * C( 0,  3) + B(1, 1) * C( 1,  3) + B(1, 2) * C( 2,  3)) * B(1, 0) 
            + (B(1, 0) * C( 0,  4) + B(1, 1) * C( 1,  4) + B(1, 2) * C( 2,  4)) * B(1, 1) 
            + (B(1, 0) * C( 0,  5) + B(1, 1) * C( 1,  5) + B(1, 2) * C( 2,  5)) * B(1, 2);
  A( 2,  4) = (B(2, 0) * C( 0,  3) + B(2, 1) * C( 1,  3) + B(2, 2) * C( 2,  3)) * B(1, 0) 
            + (B(2, 0) * C( 0,  4) + B(2, 1) * C( 1,  4) + B(2, 2) * C( 2,  4)) * B(1, 1) 
            + (B(2, 0) * C( 0,  5) + B(2, 1) * C( 1,  5) + B(2, 2) * C( 2,  5)) * B(1, 2);
  A( 3,  4) = (B(0, 0) * C( 3,  3) + B(0, 1) * C( 4,  3) + B(0, 2) * C( 5,  3)) * B(1, 0) 
            + (B(0, 0) * C( 3,  4) + B(0, 1) * C( 4,  4) + B(0, 2) * C( 5,  4)) * B(1, 1) 
            + (B(0, 0) * C( 3,  5) + B(0, 1) * C( 4,  5) + B(0, 2) * C( 5,  5)) * B(1, 2);
  A( 4,  4) = (B(1, 0) * C( 3,  3) + B(1, 1) * C( 4,  3) + B(1, 2) * C( 5,  3)) * B(1, 0) 
            + (B(1, 0) * C( 3,  4) + B(1, 1) * C( 4,  4) + B(1, 2) * C( 5,  4)) * B(1, 1) 
            + (B(1, 0) * C( 3,  5) + B(1, 1) * C( 4,  5) + B(1, 2) * C( 5,  5)) * B(1, 2);
  A( 5,  4) = (B(2, 0) * C( 3,  3) + B(2, 1) * C( 4,  3) + B(2, 2) * C( 5,  3)) * B(1, 0) 
            + (B(2, 0) * C( 3,  4) + B(2, 1) * C( 4,  4) + B(2, 2) * C( 5,  4)) * B(1, 1) 
            + (B(2, 0) * C( 3,  5) + B(2, 1) * C( 4,  5) + B(2, 2) * C( 5,  5)) * B(1, 2);
  A( 6,  4) = (B(0, 0) * C( 6,  3) + B(0, 1) * C( 7,  3) + B(0, 2) * C( 8,  3)) * B(1, 0) 
            + (B(0, 0) * C( 6,  4) + B(0, 1) * C( 7,  4) + B(0, 2) * C( 8,  4)) * B(1, 1) 
            + (B(0, 0) * C( 6,  5) + B(0, 1) * C( 7,  5) + B(0, 2) * C( 8,  5)) * B(1, 2);
  A( 7,  4) = (B(1, 0) * C( 6,  3) + B(1, 1) * C( 7,  3) + B(1, 2) * C( 8,  3)) * B(1, 0) 
            + (B(1, 0) * C( 6,  4) + B(1, 1) * C( 7,  4) + B(1, 2) * C( 8,  4)) * B(1, 1) 
            + (B(1, 0) * C( 6,  5) + B(1, 1) * C( 7,  5) + B(1, 2) * C( 8,  5)) * B(1, 2);
  A( 8,  4) = (B(2, 0) * C( 6,  3) + B(2, 1) * C( 7,  3) + B(2, 2) * C( 8,  3)) * B(1, 0) 
            + (B(2, 0) * C( 6,  4) + B(2, 1) * C( 7,  4) + B(2, 2) * C( 8,  4)) * B(1, 1) 
            + (B(2, 0) * C( 6,  5) + B(2, 1) * C( 7,  5) + B(2, 2) * C( 8,  5)) * B(1, 2);
  A( 9,  4) = (B(0, 0) * C( 9,  3) + B(0, 1) * C(10,  3) + B(0, 2) * C(11,  3)) * B(1, 0) 
            + (B(0, 0) * C( 9,  4) + B(0, 1) * C(10,  4) + B(0, 2) * C(11,  4)) * B(1, 1) 
            + (B(0, 0) * C( 9,  5) + B(0, 1) * C(10,  5) + B(0, 2) * C(11,  5)) * B(1, 2);
  A(10,  4) = (B(1, 0) * C( 9,  3) + B(1, 1) * C(10,  3) + B(1, 2) * C(11,  3)) * B(1, 0) 
            + (B(1, 0) * C( 9,  4) + B(1, 1) * C(10,  4) + B(1, 2) * C(11,  4)) * B(1, 1) 
            + (B(1, 0) * C( 9,  5) + B(1, 1) * C(10,  5) + B(1, 2) * C(11,  5)) * B(1, 2);
  A(11,  4) = (B(2, 0) * C( 9,  3) + B(2, 1) * C(10,  3) + B(2, 2) * C(11,  3)) * B(1, 0) 
            + (B(2, 0) * C( 9,  4) + B(2, 1) * C(10,  4) + B(2, 2) * C(11,  4)) * B(1, 1) 
            + (B(2, 0) * C( 9,  5) + B(2, 1) * C(10,  5) + B(2, 2) * C(11,  5)) * B(1, 2);
  A( 0,  5) = (B(0, 0) * C( 0,  3) + B(0, 1) * C( 1,  3) + B(0, 2) * C( 2,  3)) * B(2, 0) 
            + (B(0, 0) * C( 0,  4) + B(0, 1) * C( 1,  4) + B(0, 2) * C( 2,  4)) * B(2, 1) 
            + (B(0, 0) * C( 0,  5) + B(0, 1) * C( 1,  5) + B(0, 2) * C( 2,  5)) * B(2, 2);
  A( 1,  5) = (B(1, 0) * C( 0,  3) + B(1, 1) * C( 1,  3) + B(1, 2) * C( 2,  3)) * B(2, 0) 
            + (B(1, 0) * C( 0,  4) + B(1, 1) * C( 1,  4) + B(1, 2) * C( 2,  4)) * B(2, 1) 
            + (B(1, 0) * C( 0,  5) + B(1, 1) * C( 1,  5) + B(1, 2) * C( 2,  5)) * B(2, 2);
  A( 2,  5) = (B(2, 0) * C( 0,  3) + B(2, 1) * C( 1,  3) + B(2, 2) * C( 2,  3)) * B(2, 0) 
            + (B(2, 0) * C( 0,  4) + B(2, 1) * C( 1,  4) + B(2, 2) * C( 2,  4)) * B(2, 1) 
            + (B(2, 0) * C( 0,  5) + B(2, 1) * C( 1,  5) + B(2, 2) * C( 2,  5)) * B(2, 2);
  A( 3,  5) = (B(0, 0) * C( 3,  3) + B(0, 1) * C( 4,  3) + B(0, 2) * C( 5,  3)) * B(2, 0) 
            + (B(0, 0) * C( 3,  4) + B(0, 1) * C( 4,  4) + B(0, 2) * C( 5,  4)) * B(2, 1) 
            + (B(0, 0) * C( 3,  5) + B(0, 1) * C( 4,  5) + B(0, 2) * C( 5,  5)) * B(2, 2);
  A( 4,  5) = (B(1, 0) * C( 3,  3) + B(1, 1) * C( 4,  3) + B(1, 2) * C( 5,  3)) * B(2, 0) 
            + (B(1, 0) * C( 3,  4) + B(1, 1) * C( 4,  4) + B(1, 2) * C( 5,  4)) * B(2, 1) 
            + (B(1, 0) * C( 3,  5) + B(1, 1) * C( 4,  5) + B(1, 2) * C( 5,  5)) * B(2, 2);
  A( 5,  5) = (B(2, 0) * C( 3,  3) + B(2, 1) * C( 4,  3) + B(2, 2) * C( 5,  3)) * B(2, 0) 
            + (B(2, 0) * C( 3,  4) + B(2, 1) * C( 4,  4) + B(2, 2) * C( 5,  4)) * B(2, 1) 
            + (B(2, 0) * C( 3,  5) + B(2, 1) * C( 4,  5) + B(2, 2) * C( 5,  5)) * B(2, 2);
  A( 6,  5) = (B(0, 0) * C( 6,  3) + B(0, 1) * C( 7,  3) + B(0, 2) * C( 8,  3)) * B(2, 0) 
            + (B(0, 0) * C( 6,  4) + B(0, 1) * C( 7,  4) + B(0, 2) * C( 8,  4)) * B(2, 1) 
            + (B(0, 0) * C( 6,  5) + B(0, 1) * C( 7,  5) + B(0, 2) * C( 8,  5)) * B(2, 2);
  A( 7,  5) = (B(1, 0) * C( 6,  3) + B(1, 1) * C( 7,  3) + B(1, 2) * C( 8,  3)) * B(2, 0) 
            + (B(1, 0) * C( 6,  4) + B(1, 1) * C( 7,  4) + B(1, 2) * C( 8,  4)) * B(2, 1) 
            + (B(1, 0) * C( 6,  5) + B(1, 1) * C( 7,  5) + B(1, 2) * C( 8,  5)) * B(2, 2);
  A( 8,  5) = (B(2, 0) * C( 6,  3) + B(2, 1) * C( 7,  3) + B(2, 2) * C( 8,  3)) * B(2, 0) 
            + (B(2, 0) * C( 6,  4) + B(2, 1) * C( 7,  4) + B(2, 2) * C( 8,  4)) * B(2, 1) 
            + (B(2, 0) * C( 6,  5) + B(2, 1) * C( 7,  5) + B(2, 2) * C( 8,  5)) * B(2, 2);
  A( 9,  5) = (B(0, 0) * C( 9,  3) + B(0, 1) * C(10,  3) + B(0, 2) * C(11,  3)) * B(2, 0) 
            + (B(0, 0) * C( 9,  4) + B(0, 1) * C(10,  4) + B(0, 2) * C(11,  4)) * B(2, 1) 
            + (B(0, 0) * C( 9,  5) + B(0, 1) * C(10,  5) + B(0, 2) * C(11,  5)) * B(2, 2);
  A(10,  5) = (B(1, 0) * C( 9,  3) + B(1, 1) * C(10,  3) + B(1, 2) * C(11,  3)) * B(2, 0) 
            + (B(1, 0) * C( 9,  4) + B(1, 1) * C(10,  4) + B(1, 2) * C(11,  4)) * B(2, 1) 
            + (B(1, 0) * C( 9,  5) + B(1, 1) * C(10,  5) + B(1, 2) * C(11,  5)) * B(2, 2);
  A(11,  5) = (B(2, 0) * C( 9,  3) + B(2, 1) * C(10,  3) + B(2, 2) * C(11,  3)) * B(2, 0) 
            + (B(2, 0) * C( 9,  4) + B(2, 1) * C(10,  4) + B(2, 2) * C(11,  4)) * B(2, 1) 
            + (B(2, 0) * C( 9,  5) + B(2, 1) * C(10,  5) + B(2, 2) * C(11,  5)) * B(2, 2);

  A( 0,  6) = (B(0, 0) * C( 0,  6) + B(0, 1) * C( 1,  6) + B(0, 2) * C( 2,  6)) * B(0, 0) 
            + (B(0, 0) * C( 0,  7) + B(0, 1) * C( 1,  7) + B(0, 2) * C( 2,  7)) * B(0, 1) 
            + (B(0, 0) * C( 0,  8) + B(0, 1) * C( 1,  8) + B(0, 2) * C( 2,  8)) * B(0, 2);
  A( 1,  6) = (B(1, 0) * C( 0,  6) + B(1, 1) * C( 1,  6) + B(1, 2) * C( 2,  6)) * B(0, 0) 
            + (B(1, 0) * C( 0,  7) + B(1, 1) * C( 1,  7) + B(1, 2) * C( 2,  7)) * B(0, 1) 
            + (B(1, 0) * C( 0,  8) + B(1, 1) * C( 1,  8) + B(1, 2) * C( 2,  8)) * B(0, 2);
  A( 2,  6) = (B(2, 0) * C( 0,  6) + B(2, 1) * C( 1,  6) + B(2, 2) * C( 2,  6)) * B(0, 0) 
            + (B(2, 0) * C( 0,  7) + B(2, 1) * C( 1,  7) + B(2, 2) * C( 2,  7)) * B(0, 1) 
            + (B(2, 0) * C( 0,  8) + B(2, 1) * C( 1,  8) + B(2, 2) * C( 2,  8)) * B(0, 2);
  A( 3,  6) = (B(0, 0) * C( 3,  6) + B(0, 1) * C( 4,  6) + B(0, 2) * C( 5,  6)) * B(0, 0) 
            + (B(0, 0) * C( 3,  7) + B(0, 1) * C( 4,  7) + B(0, 2) * C( 5,  7)) * B(0, 1) 
            + (B(0, 0) * C( 3,  8) + B(0, 1) * C( 4,  8) + B(0, 2) * C( 5,  8)) * B(0, 2);
  A( 4,  6) = (B(1, 0) * C( 3,  6) + B(1, 1) * C( 4,  6) + B(1, 2) * C( 5,  6)) * B(0, 0) 
            + (B(1, 0) * C( 3,  7) + B(1, 1) * C( 4,  7) + B(1, 2) * C( 5,  7)) * B(0, 1) 
            + (B(1, 0) * C( 3,  8) + B(1, 1) * C( 4,  8) + B(1, 2) * C( 5,  8)) * B(0, 2);
  A( 5,  6) = (B(2, 0) * C( 3,  6) + B(2, 1) * C( 4,  6) + B(2, 2) * C( 5,  6)) * B(0, 0) 
            + (B(2, 0) * C( 3,  7) + B(2, 1) * C( 4,  7) + B(2, 2) * C( 5,  7)) * B(0, 1) 
            + (B(2, 0) * C( 3,  8) + B(2, 1) * C( 4,  8) + B(2, 2) * C( 5,  8)) * B(0, 2);
  A( 6,  6) = (B(0, 0) * C( 6,  6) + B(0, 1) * C( 7,  6) + B(0, 2) * C( 8,  6)) * B(0, 0) 
            + (B(0, 0) * C( 6,  7) + B(0, 1) * C( 7,  7) + B(0, 2) * C( 8,  7)) * B(0, 1) 
            + (B(0, 0) * C( 6,  8) + B(0, 1) * C( 7,  8) + B(0, 2) * C( 8,  8)) * B(0, 2);
  A( 7,  6) = (B(1, 0) * C( 6,  6) + B(1, 1) * C( 7,  6) + B(1, 2) * C( 8,  6)) * B(0, 0) 
            + (B(1, 0) * C( 6,  7) + B(1, 1) * C( 7,  7) + B(1, 2) * C( 8,  7)) * B(0, 1) 
            + (B(1, 0) * C( 6,  8) + B(1, 1) * C( 7,  8) + B(1, 2) * C( 8,  8)) * B(0, 2);
  A( 8,  6) = (B(2, 0) * C( 6,  6) + B(2, 1) * C( 7,  6) + B(2, 2) * C( 8,  6)) * B(0, 0) 
            + (B(2, 0) * C( 6,  7) + B(2, 1) * C( 7,  7) + B(2, 2) * C( 8,  7)) * B(0, 1) 
            + (B(2, 0) * C( 6,  8) + B(2, 1) * C( 7,  8) + B(2, 2) * C( 8,  8)) * B(0, 2);
  A( 9,  6) = (B(0, 0) * C( 9,  6) + B(0, 1) * C(10,  6) + B(0, 2) * C(11,  6)) * B(0, 0) 
            + (B(0, 0) * C( 9,  7) + B(0, 1) * C(10,  7) + B(0, 2) * C(11,  7)) * B(0, 1) 
            + (B(0, 0) * C( 9,  8) + B(0, 1) * C(10,  8) + B(0, 2) * C(11,  8)) * B(0, 2);
  A(10,  6) = (B(1, 0) * C( 9,  6) + B(1, 1) * C(10,  6) + B(1, 2) * C(11,  6)) * B(0, 0) 
            + (B(1, 0) * C( 9,  7) + B(1, 1) * C(10,  7) + B(1, 2) * C(11,  7)) * B(0, 1) 
            + (B(1, 0) * C( 9,  8) + B(1, 1) * C(10,  8) + B(1, 2) * C(11,  8)) * B(0, 2);
  A(11,  6) = (B(2, 0) * C( 9,  6) + B(2, 1) * C(10,  6) + B(2, 2) * C(11,  6)) * B(0, 0) 
            + (B(2, 0) * C( 9,  7) + B(2, 1) * C(10,  7) + B(2, 2) * C(11,  7)) * B(0, 1) 
            + (B(2, 0) * C( 9,  8) + B(2, 1) * C(10,  8) + B(2, 2) * C(11,  8)) * B(0, 2);
  A( 0,  7) = (B(0, 0) * C( 0,  6) + B(0, 1) * C( 1,  6) + B(0, 2) * C( 2,  6)) * B(1, 0) 
            + (B(0, 0) * C( 0,  7) + B(0, 1) * C( 1,  7) + B(0, 2) * C( 2,  7)) * B(1, 1) 
            + (B(0, 0) * C( 0,  8) + B(0, 1) * C( 1,  8) + B(0, 2) * C( 2,  8)) * B(1, 2);
  A( 1,  7) = (B(1, 0) * C( 0,  6) + B(1, 1) * C( 1,  6) + B(1, 2) * C( 2,  6)) * B(1, 0) 
            + (B(1, 0) * C( 0,  7) + B(1, 1) * C( 1,  7) + B(1, 2) * C( 2,  7)) * B(1, 1) 
            + (B(1, 0) * C( 0,  8) + B(1, 1) * C( 1,  8) + B(1, 2) * C( 2,  8)) * B(1, 2);
  A( 2,  7) = (B(2, 0) * C( 0,  6) + B(2, 1) * C( 1,  6) + B(2, 2) * C( 2,  6)) * B(1, 0) 
            + (B(2, 0) * C( 0,  7) + B(2, 1) * C( 1,  7) + B(2, 2) * C( 2,  7)) * B(1, 1) 
            + (B(2, 0) * C( 0,  8) + B(2, 1) * C( 1,  8) + B(2, 2) * C( 2,  8)) * B(1, 2);
  A( 3,  7) = (B(0, 0) * C( 3,  6) + B(0, 1) * C( 4,  6) + B(0, 2) * C( 5,  6)) * B(1, 0) 
            + (B(0, 0) * C( 3,  7) + B(0, 1) * C( 4,  7) + B(0, 2) * C( 5,  7)) * B(1, 1) 
            + (B(0, 0) * C( 3,  8) + B(0, 1) * C( 4,  8) + B(0, 2) * C( 5,  8)) * B(1, 2);
  A( 4,  7) = (B(1, 0) * C( 3,  6) + B(1, 1) * C( 4,  6) + B(1, 2) * C( 5,  6)) * B(1, 0) 
            + (B(1, 0) * C( 3,  7) + B(1, 1) * C( 4,  7) + B(1, 2) * C( 5,  7)) * B(1, 1) 
            + (B(1, 0) * C( 3,  8) + B(1, 1) * C( 4,  8) + B(1, 2) * C( 5,  8)) * B(1, 2);
  A( 5,  7) = (B(2, 0) * C( 3,  6) + B(2, 1) * C( 4,  6) + B(2, 2) * C( 5,  6)) * B(1, 0) 
            + (B(2, 0) * C( 3,  7) + B(2, 1) * C( 4,  7) + B(2, 2) * C( 5,  7)) * B(1, 1) 
            + (B(2, 0) * C( 3,  8) + B(2, 1) * C( 4,  8) + B(2, 2) * C( 5,  8)) * B(1, 2);
  A( 6,  7) = (B(0, 0) * C( 6,  6) + B(0, 1) * C( 7,  6) + B(0, 2) * C( 8,  6)) * B(1, 0) 
            + (B(0, 0) * C( 6,  7) + B(0, 1) * C( 7,  7) + B(0, 2) * C( 8,  7)) * B(1, 1) 
            + (B(0, 0) * C( 6,  8) + B(0, 1) * C( 7,  8) + B(0, 2) * C( 8,  8)) * B(1, 2);
  A( 7,  7) = (B(1, 0) * C( 6,  6) + B(1, 1) * C( 7,  6) + B(1, 2) * C( 8,  6)) * B(1, 0) 
            + (B(1, 0) * C( 6,  7) + B(1, 1) * C( 7,  7) + B(1, 2) * C( 8,  7)) * B(1, 1) 
            + (B(1, 0) * C( 6,  8) + B(1, 1) * C( 7,  8) + B(1, 2) * C( 8,  8)) * B(1, 2);
  A( 8,  7) = (B(2, 0) * C( 6,  6) + B(2, 1) * C( 7,  6) + B(2, 2) * C( 8,  6)) * B(1, 0) 
            + (B(2, 0) * C( 6,  7) + B(2, 1) * C( 7,  7) + B(2, 2) * C( 8,  7)) * B(1, 1) 
            + (B(2, 0) * C( 6,  8) + B(2, 1) * C( 7,  8) + B(2, 2) * C( 8,  8)) * B(1, 2);
  A( 9,  7) = (B(0, 0) * C( 9,  6) + B(0, 1) * C(10,  6) + B(0, 2) * C(11,  6)) * B(1, 0) 
            + (B(0, 0) * C( 9,  7) + B(0, 1) * C(10,  7) + B(0, 2) * C(11,  7)) * B(1, 1) 
            + (B(0, 0) * C( 9,  8) + B(0, 1) * C(10,  8) + B(0, 2) * C(11,  8)) * B(1, 2);
  A(10,  7) = (B(1, 0) * C( 9,  6) + B(1, 1) * C(10,  6) + B(1, 2) * C(11,  6)) * B(1, 0) 
            + (B(1, 0) * C( 9,  7) + B(1, 1) * C(10,  7) + B(1, 2) * C(11,  7)) * B(1, 1) 
            + (B(1, 0) * C( 9,  8) + B(1, 1) * C(10,  8) + B(1, 2) * C(11,  8)) * B(1, 2);
  A(11,  7) = (B(2, 0) * C( 9,  6) + B(2, 1) * C(10,  6) + B(2, 2) * C(11,  6)) * B(1, 0) 
            + (B(2, 0) * C( 9,  7) + B(2, 1) * C(10,  7) + B(2, 2) * C(11,  7)) * B(1, 1) 
            + (B(2, 0) * C( 9,  8) + B(2, 1) * C(10,  8) + B(2, 2) * C(11,  8)) * B(1, 2);
  A( 0,  8) = (B(0, 0) * C( 0,  6) + B(0, 1) * C( 1,  6) + B(0, 2) * C( 2,  6)) * B(2, 0) 
            + (B(0, 0) * C( 0,  7) + B(0, 1) * C( 1,  7) + B(0, 2) * C( 2,  7)) * B(2, 1) 
            + (B(0, 0) * C( 0,  8) + B(0, 1) * C( 1,  8) + B(0, 2) * C( 2,  8)) * B(2, 2);
  A( 1,  8) = (B(1, 0) * C( 0,  6) + B(1, 1) * C( 1,  6) + B(1, 2) * C( 2,  6)) * B(2, 0) 
            + (B(1, 0) * C( 0,  7) + B(1, 1) * C( 1,  7) + B(1, 2) * C( 2,  7)) * B(2, 1) 
            + (B(1, 0) * C( 0,  8) + B(1, 1) * C( 1,  8) + B(1, 2) * C( 2,  8)) * B(2, 2);
  A( 2,  8) = (B(2, 0) * C( 0,  6) + B(2, 1) * C( 1,  6) + B(2, 2) * C( 2,  6)) * B(2, 0) 
            + (B(2, 0) * C( 0,  7) + B(2, 1) * C( 1,  7) + B(2, 2) * C( 2,  7)) * B(2, 1) 
            + (B(2, 0) * C( 0,  8) + B(2, 1) * C( 1,  8) + B(2, 2) * C( 2,  8)) * B(2, 2);
  A( 3,  8) = (B(0, 0) * C( 3,  6) + B(0, 1) * C( 4,  6) + B(0, 2) * C( 5,  6)) * B(2, 0) 
            + (B(0, 0) * C( 3,  7) + B(0, 1) * C( 4,  7) + B(0, 2) * C( 5,  7)) * B(2, 1) 
            + (B(0, 0) * C( 3,  8) + B(0, 1) * C( 4,  8) + B(0, 2) * C( 5,  8)) * B(2, 2);
  A( 4,  8) = (B(1, 0) * C( 3,  6) + B(1, 1) * C( 4,  6) + B(1, 2) * C( 5,  6)) * B(2, 0) 
            + (B(1, 0) * C( 3,  7) + B(1, 1) * C( 4,  7) + B(1, 2) * C( 5,  7)) * B(2, 1) 
            + (B(1, 0) * C( 3,  8) + B(1, 1) * C( 4,  8) + B(1, 2) * C( 5,  8)) * B(2, 2);
  A( 5,  8) = (B(2, 0) * C( 3,  6) + B(2, 1) * C( 4,  6) + B(2, 2) * C( 5,  6)) * B(2, 0) 
            + (B(2, 0) * C( 3,  7) + B(2, 1) * C( 4,  7) + B(2, 2) * C( 5,  7)) * B(2, 1) 
            + (B(2, 0) * C( 3,  8) + B(2, 1) * C( 4,  8) + B(2, 2) * C( 5,  8)) * B(2, 2);
  A( 6,  8) = (B(0, 0) * C( 6,  6) + B(0, 1) * C( 7,  6) + B(0, 2) * C( 8,  6)) * B(2, 0) 
            + (B(0, 0) * C( 6,  7) + B(0, 1) * C( 7,  7) + B(0, 2) * C( 8,  7)) * B(2, 1) 
            + (B(0, 0) * C( 6,  8) + B(0, 1) * C( 7,  8) + B(0, 2) * C( 8,  8)) * B(2, 2);
  A( 7,  8) = (B(1, 0) * C( 6,  6) + B(1, 1) * C( 7,  6) + B(1, 2) * C( 8,  6)) * B(2, 0) 
            + (B(1, 0) * C( 6,  7) + B(1, 1) * C( 7,  7) + B(1, 2) * C( 8,  7)) * B(2, 1) 
            + (B(1, 0) * C( 6,  8) + B(1, 1) * C( 7,  8) + B(1, 2) * C( 8,  8)) * B(2, 2);
  A( 8,  8) = (B(2, 0) * C( 6,  6) + B(2, 1) * C( 7,  6) + B(2, 2) * C( 8,  6)) * B(2, 0) 
            + (B(2, 0) * C( 6,  7) + B(2, 1) * C( 7,  7) + B(2, 2) * C( 8,  7)) * B(2, 1) 
            + (B(2, 0) * C( 6,  8) + B(2, 1) * C( 7,  8) + B(2, 2) * C( 8,  8)) * B(2, 2);
  A( 9,  8) = (B(0, 0) * C( 9,  6) + B(0, 1) * C(10,  6) + B(0, 2) * C(11,  6)) * B(2, 0) 
            + (B(0, 0) * C( 9,  7) + B(0, 1) * C(10,  7) + B(0, 2) * C(11,  7)) * B(2, 1) 
            + (B(0, 0) * C( 9,  8) + B(0, 1) * C(10,  8) + B(0, 2) * C(11,  8)) * B(2, 2);
  A(10,  8) = (B(1, 0) * C( 9,  6) + B(1, 1) * C(10,  6) + B(1, 2) * C(11,  6)) * B(2, 0) 
            + (B(1, 0) * C( 9,  7) + B(1, 1) * C(10,  7) + B(1, 2) * C(11,  7)) * B(2, 1) 
            + (B(1, 0) * C( 9,  8) + B(1, 1) * C(10,  8) + B(1, 2) * C(11,  8)) * B(2, 2);
  A(11,  8) = (B(2, 0) * C( 9,  6) + B(2, 1) * C(10,  6) + B(2, 2) * C(11,  6)) * B(2, 0) 
            + (B(2, 0) * C( 9,  7) + B(2, 1) * C(10,  7) + B(2, 2) * C(11,  7)) * B(2, 1) 
            + (B(2, 0) * C( 9,  8) + B(2, 1) * C(10,  8) + B(2, 2) * C(11,  8)) * B(2, 2);

// 9-11
  A( 0,  9) = (B(0, 0) * C( 0,  9) + B(0, 1) * C( 1,  9) + B(0, 2) * C( 2,  9)) * B(0, 0) 
            + (B(0, 0) * C( 0, 10) + B(0, 1) * C( 1, 10) + B(0, 2) * C( 2, 10)) * B(0, 1) 
            + (B(0, 0) * C( 0, 11) + B(0, 1) * C( 1, 11) + B(0, 2) * C( 2, 11)) * B(0, 2);
  A( 1,  9) = (B(1, 0) * C( 0,  9) + B(1, 1) * C( 1,  9) + B(1, 2) * C( 2,  9)) * B(0, 0) 
            + (B(1, 0) * C( 0, 10) + B(1, 1) * C( 1, 10) + B(1, 2) * C( 2, 10)) * B(0, 1) 
            + (B(1, 0) * C( 0, 11) + B(1, 1) * C( 1, 11) + B(1, 2) * C( 2, 11)) * B(0, 2);
  A( 2,  9) = (B(2, 0) * C( 0,  9) + B(2, 1) * C( 1,  9) + B(2, 2) * C( 2,  9)) * B(0, 0) 
            + (B(2, 0) * C( 0, 10) + B(2, 1) * C( 1, 10) + B(2, 2) * C( 2, 10)) * B(0, 1) 
            + (B(2, 0) * C( 0, 11) + B(2, 1) * C( 1, 11) + B(2, 2) * C( 2, 11)) * B(0, 2);
  A( 3,  9) = (B(0, 0) * C( 3,  9) + B(0, 1) * C( 4,  9) + B(0, 2) * C( 5,  9)) * B(0, 0) 
            + (B(0, 0) * C( 3, 10) + B(0, 1) * C( 4, 10) + B(0, 2) * C( 5, 10)) * B(0, 1) 
            + (B(0, 0) * C( 3, 11) + B(0, 1) * C( 4, 11) + B(0, 2) * C( 5, 11)) * B(0, 2);
  A( 4,  9) = (B(1, 0) * C( 3,  9) + B(1, 1) * C( 4,  9) + B(1, 2) * C( 5,  9)) * B(0, 0) 
            + (B(1, 0) * C( 3, 10) + B(1, 1) * C( 4, 10) + B(1, 2) * C( 5, 10)) * B(0, 1) 
            + (B(1, 0) * C( 3, 11) + B(1, 1) * C( 4, 11) + B(1, 2) * C( 5, 11)) * B(0, 2);
  A( 5,  9) = (B(2, 0) * C( 3,  9) + B(2, 1) * C( 4,  9) + B(2, 2) * C( 5,  9)) * B(0, 0) 
            + (B(2, 0) * C( 3, 10) + B(2, 1) * C( 4, 10) + B(2, 2) * C( 5, 10)) * B(0, 1) 
            + (B(2, 0) * C( 3, 11) + B(2, 1) * C( 4, 11) + B(2, 2) * C( 5, 11)) * B(0, 2);
  A( 6,  9) = (B(0, 0) * C( 6,  9) + B(0, 1) * C( 7,  9) + B(0, 2) * C( 8,  9)) * B(0, 0) 
            + (B(0, 0) * C( 6, 10) + B(0, 1) * C( 7, 10) + B(0, 2) * C( 8, 10)) * B(0, 1) 
            + (B(0, 0) * C( 6, 11) + B(0, 1) * C( 7, 11) + B(0, 2) * C( 8, 11)) * B(0, 2);
  A( 7,  9) = (B(1, 0) * C( 6,  9) + B(1, 1) * C( 7,  9) + B(1, 2) * C( 8,  9)) * B(0, 0) 
            + (B(1, 0) * C( 6, 10) + B(1, 1) * C( 7, 10) + B(1, 2) * C( 8, 10)) * B(0, 1) 
            + (B(1, 0) * C( 6, 11) + B(1, 1) * C( 7, 11) + B(1, 2) * C( 8, 11)) * B(0, 2);
  A( 8,  9) = (B(2, 0) * C( 6,  9) + B(2, 1) * C( 7,  9) + B(2, 2) * C( 8,  9)) * B(0, 0) 
            + (B(2, 0) * C( 6, 10) + B(2, 1) * C( 7, 10) + B(2, 2) * C( 8, 10)) * B(0, 1) 
            + (B(2, 0) * C( 6, 11) + B(2, 1) * C( 7, 11) + B(2, 2) * C( 8, 11)) * B(0, 2);

  A( 9,  9) = (B(0, 0) * C( 9,  9) + B(0, 1) * C(10,  9) + B(0, 2) * C(11,  9)) * B(0, 0) 
            + (B(0, 0) * C( 9, 10) + B(0, 1) * C(10, 10) + B(0, 2) * C(11, 10)) * B(0, 1) 
            + (B(0, 0) * C( 9, 11) + B(0, 1) * C(10, 11) + B(0, 2) * C(11, 11)) * B(0, 2);
  A(10,  9) = (B(1, 0) * C( 9,  9) + B(1, 1) * C(10,  9) + B(1, 2) * C(11,  9)) * B(0, 0) 
            + (B(1, 0) * C( 9, 10) + B(1, 1) * C(10, 10) + B(1, 2) * C(11, 10)) * B(0, 1) 
            + (B(1, 0) * C( 9, 11) + B(1, 1) * C(10, 11) + B(1, 2) * C(11, 11)) * B(0, 2);
  A(11,  9) = (B(2, 0) * C( 9,  9) + B(2, 1) * C(10,  9) + B(2, 2) * C(11,  9)) * B(0, 0) 
            + (B(2, 0) * C( 9, 10) + B(2, 1) * C(10, 10) + B(2, 2) * C(11, 10)) * B(0, 1) 
            + (B(2, 0) * C( 9, 11) + B(2, 1) * C(10, 11) + B(2, 2) * C(11, 11)) * B(0, 2);
  A( 0, 10) = (B(0, 0) * C( 0,  9) + B(0, 1) * C( 1,  9) + B(0, 2) * C( 2,  9)) * B(1, 0) 
            + (B(0, 0) * C( 0, 10) + B(0, 1) * C( 1, 10) + B(0, 2) * C( 2, 10)) * B(1, 1) 
            + (B(0, 0) * C( 0, 11) + B(0, 1) * C( 1, 11) + B(0, 2) * C( 2, 11)) * B(1, 2);
  A( 1, 10) = (B(1, 0) * C( 0,  9) + B(1, 1) * C( 1,  9) + B(1, 2) * C( 2,  9)) * B(1, 0) 
            + (B(1, 0) * C( 0, 10) + B(1, 1) * C( 1, 10) + B(1, 2) * C( 2, 10)) * B(1, 1) 
            + (B(1, 0) * C( 0, 11) + B(1, 1) * C( 1, 11) + B(1, 2) * C( 2, 11)) * B(1, 2);
  A( 2, 10) = (B(2, 0) * C( 0,  9) + B(2, 1) * C( 1,  9) + B(2, 2) * C( 2,  9)) * B(1, 0) 
            + (B(2, 0) * C( 0, 10) + B(2, 1) * C( 1, 10) + B(2, 2) * C( 2, 10)) * B(1, 1) 
            + (B(2, 0) * C( 0, 11) + B(2, 1) * C( 1, 11) + B(2, 2) * C( 2, 11)) * B(1, 2);
  A( 3, 10) = (B(0, 0) * C( 3,  9) + B(0, 1) * C( 4,  9) + B(0, 2) * C( 5,  9)) * B(1, 0) 
            + (B(0, 0) * C( 3, 10) + B(0, 1) * C( 4, 10) + B(0, 2) * C( 5, 10)) * B(1, 1) 
            + (B(0, 0) * C( 3, 11) + B(0, 1) * C( 4, 11) + B(0, 2) * C( 5, 11)) * B(1, 2);
  A( 4, 10) = (B(1, 0) * C( 3,  9) + B(1, 1) * C( 4,  9) + B(1, 2) * C( 5,  9)) * B(1, 0) 
            + (B(1, 0) * C( 3, 10) + B(1, 1) * C( 4, 10) + B(1, 2) * C( 5, 10)) * B(1, 1) 
            + (B(1, 0) * C( 3, 11) + B(1, 1) * C( 4, 11) + B(1, 2) * C( 5, 11)) * B(1, 2);
  A( 5, 10) = (B(2, 0) * C( 3,  9) + B(2, 1) * C( 4,  9) + B(2, 2) * C( 5,  9)) * B(1, 0) 
            + (B(2, 0) * C( 3, 10) + B(2, 1) * C( 4, 10) + B(2, 2) * C( 5, 10)) * B(1, 1) 
            + (B(2, 0) * C( 3, 11) + B(2, 1) * C( 4, 11) + B(2, 2) * C( 5, 11)) * B(1, 2);
  A( 6, 10) = (B(0, 0) * C( 6,  9) + B(0, 1) * C( 7,  9) + B(0, 2) * C( 8,  9)) * B(1, 0) 
            + (B(0, 0) * C( 6, 10) + B(0, 1) * C( 7, 10) + B(0, 2) * C( 8, 10)) * B(1, 1) 
            + (B(0, 0) * C( 6, 11) + B(0, 1) * C( 7, 11) + B(0, 2) * C( 8, 11)) * B(1, 2);
  A( 7, 10) = (B(1, 0) * C( 6,  9) + B(1, 1) * C( 7,  9) + B(1, 2) * C( 8,  9)) * B(1, 0) 
            + (B(1, 0) * C( 6, 10) + B(1, 1) * C( 7, 10) + B(1, 2) * C( 8, 10)) * B(1, 1) 
            + (B(1, 0) * C( 6, 11) + B(1, 1) * C( 7, 11) + B(1, 2) * C( 8, 11)) * B(1, 2);
  A( 8, 10) = (B(2, 0) * C( 6,  9) + B(2, 1) * C( 7,  9) + B(2, 2) * C( 8,  9)) * B(1, 0) 
            + (B(2, 0) * C( 6, 10) + B(2, 1) * C( 7, 10) + B(2, 2) * C( 8, 10)) * B(1, 1) 
            + (B(2, 0) * C( 6, 11) + B(2, 1) * C( 7, 11) + B(2, 2) * C( 8, 11)) * B(1, 2);
  A( 9, 10) = (B(0, 0) * C( 9,  9) + B(0, 1) * C(10,  9) + B(0, 2) * C(11,  9)) * B(1, 0) 
            + (B(0, 0) * C( 9, 10) + B(0, 1) * C(10, 10) + B(0, 2) * C(11, 10)) * B(1, 1) 
            + (B(0, 0) * C( 9, 11) + B(0, 1) * C(10, 11) + B(0, 2) * C(11, 11)) * B(1, 2);
  A(10, 10) = (B(1, 0) * C( 9,  9) + B(1, 1) * C(10,  9) + B(1, 2) * C(11,  9)) * B(1, 0) 
            + (B(1, 0) * C( 9, 10) + B(1, 1) * C(10, 10) + B(1, 2) * C(11, 10)) * B(1, 1) 
            + (B(1, 0) * C( 9, 11) + B(1, 1) * C(10, 11) + B(1, 2) * C(11, 11)) * B(1, 2);
  A(11, 10) = (B(2, 0) * C( 9,  9) + B(2, 1) * C(10,  9) + B(2, 2) * C(11,  9)) * B(1, 0) 
            + (B(2, 0) * C( 9, 10) + B(2, 1) * C(10, 10) + B(2, 2) * C(11, 10)) * B(1, 1) 
            + (B(2, 0) * C( 9, 11) + B(2, 1) * C(10, 11) + B(2, 2) * C(11, 11)) * B(1, 2);

  A( 0, 11) = (B(0, 0) * C( 0,  9) + B(0, 1) * C( 1,  9) + B(0, 2) * C( 2,  9)) * B(2, 0) 
            + (B(0, 0) * C( 0, 10) + B(0, 1) * C( 1, 10) + B(0, 2) * C( 2, 10)) * B(2, 1) 
            + (B(0, 0) * C( 0, 11) + B(0, 1) * C( 1, 11) + B(0, 2) * C( 2, 11)) * B(2, 2);
  A( 1, 11) = (B(1, 0) * C( 0,  9) + B(1, 1) * C( 1,  9) + B(1, 2) * C( 2,  9)) * B(2, 0) 
            + (B(1, 0) * C( 0, 10) + B(1, 1) * C( 1, 10) + B(1, 2) * C( 2, 10)) * B(2, 1) 
            + (B(1, 0) * C( 0, 11) + B(1, 1) * C( 1, 11) + B(1, 2) * C( 2, 11)) * B(2, 2);
  A( 2, 11) = (B(2, 0) * C( 0,  9) + B(2, 1) * C( 1,  9) + B(2, 2) * C( 2,  9)) * B(2, 0) 
            + (B(2, 0) * C( 0, 10) + B(2, 1) * C( 1, 10) + B(2, 2) * C( 2, 10)) * B(2, 1) 
            + (B(2, 0) * C( 0, 11) + B(2, 1) * C( 1, 11) + B(2, 2) * C( 2, 11)) * B(2, 2);
  A( 3, 11) = (B(0, 0) * C( 3,  9) + B(0, 1) * C( 4,  9) + B(0, 2) * C( 5,  9)) * B(2, 0) 
            + (B(0, 0) * C( 3, 10) + B(0, 1) * C( 4, 10) + B(0, 2) * C( 5, 10)) * B(2, 1) 
            + (B(0, 0) * C( 3, 11) + B(0, 1) * C( 4, 11) + B(0, 2) * C( 5, 11)) * B(2, 2);
  A( 4, 11) = (B(1, 0) * C( 3,  9) + B(1, 1) * C( 4,  9) + B(1, 2) * C( 5,  9)) * B(2, 0) 
            + (B(1, 0) * C( 3, 10) + B(1, 1) * C( 4, 10) + B(1, 2) * C( 5, 10)) * B(2, 1) 
            + (B(1, 0) * C( 3, 11) + B(1, 1) * C( 4, 11) + B(1, 2) * C( 5, 11)) * B(2, 2);
  A( 5, 11) = (B(2, 0) * C( 3,  9) + B(2, 1) * C( 4,  9) + B(2, 2) * C( 5,  9)) * B(2, 0) 
            + (B(2, 0) * C( 3, 10) + B(2, 1) * C( 4, 10) + B(2, 2) * C( 5, 10)) * B(2, 1) 
            + (B(2, 0) * C( 3, 11) + B(2, 1) * C( 4, 11) + B(2, 2) * C( 5, 11)) * B(2, 2);

  A( 6, 11) = (B(0, 0) * C( 6,  9) + B(0, 1) * C( 7,  9) + B(0, 2) * C( 8,  9)) * B(2, 0) 
            + (B(0, 0) * C( 6, 10) + B(0, 1) * C( 7, 10) + B(0, 2) * C( 8, 10)) * B(2, 1) 
            + (B(0, 0) * C( 6, 11) + B(0, 1) * C( 7, 11) + B(0, 2) * C( 8, 11)) * B(2, 2);
  A( 7, 11) = (B(1, 0) * C( 6,  9) + B(1, 1) * C( 7,  9) + B(1, 2) * C( 8,  9)) * B(2, 0) 
            + (B(1, 0) * C( 6, 10) + B(1, 1) * C( 7, 10) + B(1, 2) * C( 8, 10)) * B(2, 1) 
            + (B(1, 0) * C( 6, 11) + B(1, 1) * C( 7, 11) + B(1, 2) * C( 8, 11)) * B(2, 2);
  A( 8, 11) = (B(2, 0) * C( 6,  9) + B(2, 1) * C( 7,  9) + B(2, 2) * C( 8,  9)) * B(2, 0) 
            + (B(2, 0) * C( 6, 10) + B(2, 1) * C( 7, 10) + B(2, 2) * C( 8, 10)) * B(2, 1) 
            + (B(2, 0) * C( 6, 11) + B(2, 1) * C( 7, 11) + B(2, 2) * C( 8, 11)) * B(2, 2);

  A( 9, 11) = (B(0, 0) * C( 9,  9) + B(0, 1) * C(10,  9) + B(0, 2) * C(11,  9)) * B(2, 0) 
            + (B(0, 0) * C( 9, 10) + B(0, 1) * C(10, 10) + B(0, 2) * C(11, 10)) * B(2, 1) 
            + (B(0, 0) * C( 9, 11) + B(0, 1) * C(10, 11) + B(0, 2) * C(11, 11)) * B(2, 2);
  A(10, 11) = (B(1, 0) * C( 9,  9) + B(1, 1) * C(10,  9) + B(1, 2) * C(11,  9)) * B(2, 0) 
            + (B(1, 0) * C( 9, 10) + B(1, 1) * C(10, 10) + B(1, 2) * C(11, 10)) * B(2, 1) 
            + (B(1, 0) * C( 9, 11) + B(1, 1) * C(10, 11) + B(1, 2) * C(11, 11)) * B(2, 2);
  A(11, 11) = (B(2, 0) * C( 9,  9) + B(2, 1) * C(10,  9) + B(2, 2) * C(11,  9)) * B(2, 0) 
            + (B(2, 0) * C( 9, 10) + B(2, 1) * C(10, 10) + B(2, 2) * C(11, 10)) * B(2, 1) 
            + (B(2, 0) * C( 9, 11) + B(2, 1) * C(10, 11) + B(2, 2) * C(11, 11)) * B(2, 2);

  return 0;
}