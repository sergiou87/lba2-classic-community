#pragma once

#include <SYSTEM/ADELINE_TYPES.H>

// -----------------------------------------------------------------------------
#ifdef __cplusplus
extern "C" {
#endif

// -----------------------------------------------------------------------------
#pragma pack(push, 1)
typedef union {
  struct {
    float M11;
    float M12;
    float M13;
    float M21;
    float M22;
    float M23;
    float M31;
    float M32;
    float M33;
    float TX;
    float TY;
    float TZ;
  } F;
  struct {
    S32 M11;
    S32 M12;
    S32 M13;
    S32 M21;
    S32 M22;
    S32 M23;
    S32 M31;
    S32 M32;
    S32 M33;
    S32 TX;
    S32 TY;
    S32 TZ;
  } I;
  struct {
    S16 M11;
    S16 M12;
    S16 M13;
    S16 M14;
    S16 M21;
    S16 M22;
    S16 M23;
    S16 M24;
    S16 M31;
    S16 M32;
    S16 M33;
    S16 M34;
    S16 TX;
    S16 TY;
    S16 TZ;
  } M;
} TYPE_MAT;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  S16 X;
  S16 Y;
  S16 Z;
  S16 Grp;
} TYPE_VT16;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  S32 X;
  S32 Y;
  S32 Z;
} TYPE_VT32;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  S16 X;
  S16 Y;
} TYPE_PT;
#pragma pack(pop)

// -----------------------------------------------------------------------------
extern TYPE_MAT MatriceWorld;
extern TYPE_MAT MatrixLib1;
extern TYPE_MAT MatrixLib2;
extern TYPE_MAT MatriceRot;

// =============================================================================
#ifdef __cplusplus
}
#endif
