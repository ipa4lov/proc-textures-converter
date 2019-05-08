#include "compilable_c.cpp"
// procedure texture test

float4 prtex4_userProc(const SurfaceInfo* sHit, float4 inColor)
{
  const float2 texCoord = readAttr_TexCoord0(sHit);
  return make_float4(texCoord.x, texCoord.y, 1.0f, 1.0f) * inColor;
}
