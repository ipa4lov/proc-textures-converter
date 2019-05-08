float4 prtex6_main(const SurfaceInfo* sHit, float4 color, _PROCTEXTAILTAG_)
{
  const int x  = 10 * readAttr_TexCoord0(sHit).x;
  const int y  = 10 * readAttr_TexCoord0(sHit).y;
  float t = (1 + x + y) % 2;
  return t * color;
  //color = make_float4(1, 1, 1, 1);
  if (t < 0.5) t = 0;
  if (t > 0.5) t = 1;
  //t = 1;
  float4 tt = make_float4(color.x * t, color.y * t, color.z * t, 1);//color;//make_float4(0.5, 1, 1, 1);
  float4 r = tt;// * make_float4(t, t, t, 1);// + color;
  return r;
}


