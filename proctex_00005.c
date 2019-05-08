float4 prtex5_main(const SurfaceInfo* sHit, float4 a, float4 b, _PROCTEXTAILTAG_)
{
  const float4 res = a * b;
  //return make_float4(1, 1, 1, 1);
  return make_float4(res.x, res.y, res.z, 1);
}


