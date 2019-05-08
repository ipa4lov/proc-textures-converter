#include "compilable_c.cpp"
// procedure texture test

float4 userProc(const SurfaceInfo* sHit, float4 inColor)
{
  const float2 texCoord = readAttr(sHit,"TexCoord0");
  return make_float4(texCoord.x, texCoord.y, 1.0f, 1.0f) * inColor;
}
