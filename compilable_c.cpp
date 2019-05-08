struct mfloat {
  float x, y, z, k, xy, xz, yz, xyz;
  mfloat(float a);
  //mfloat(){}
  operator float() const;
  mfloat operator *= (const mfloat &a);
  mfloat operator /= (const mfloat &a);
  mfloat operator += (const mfloat &a);
  mfloat operator -= (const mfloat &a);
  mfloat operator = (const mfloat &a);
};
struct SurfaceInfo {

};

mfloat operator + (const mfloat &a, const mfloat &b);
mfloat operator - (const mfloat &a, const mfloat &b);
mfloat operator * (const mfloat &a, const mfloat &b);
mfloat operator / (const mfloat &a, const mfloat &b);
mfloat operator + (const mfloat &a, const float &b);
mfloat operator - (const mfloat &a, const float &b);
mfloat operator * (const mfloat &a, const float &b);
mfloat operator / (const mfloat &a, const float &b);
mfloat operator + (const float &a, const mfloat &b);
mfloat operator - (const float &a, const mfloat &b);
mfloat operator * (const float &a, const mfloat &b);
mfloat operator / (const float &a, const mfloat &b);


float dot(mfloat a, mfloat b);
float sin(float a);
typedef mfloat float2;
typedef mfloat float3;
typedef mfloat float4;
float3 readAttr(const SurfaceInfo *sf, const char *str);
float max(float a, float b);
float min(float a, float b);
float fmax(float a, float b);
float fmin(float a, float b);
float floor(float a);
float2 floor(float2 a);
float2 make_float2(float a, float b);
float3 make_float3(float a, float b, float c);
float4 make_float4(float a, float b, float c, float d);