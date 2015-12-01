//--------------------------------------------------------------------------------------
// File: MobiusStrip.h
//
// This sample shows an simple implementation of the DirectX 11 Hardware Tessellator
// for rendering a Bezier Patch.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------
#pragma once

// Control point for a Bezier patch
struct BEZIER_CONTROL_POINT
{
	float m_vPosition[4];
};

// Simple Bezier patch for a Mobius strip
// 4 patches with 16 control points each
const BEZIER_CONTROL_POINT g_MobiusStrip[] = {
	{ 0.0f,  0.5f, 0.0f, 1.0f },
	{ 5.0f,  0.5f, 5.0f, 1.0f },
	{ 10.0f,  0.5f, 5.0f, 1.0f },
    { 15.0f,  0.5f, 0.0f, 2.0f },
    { 10.0f,  0.5f, -5.0f, 1.0f },
	{ 0.0f,  0.5f, 0.0f, 1.0f },
};
