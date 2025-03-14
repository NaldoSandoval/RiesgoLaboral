// This file is part of the FidelityFX Super Resolution 2.2 Unreal Engine Plugin.
//
// Copyright (c) 2022-2023 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
#pragma once

#include "FSR2TemporalUpscalerEditor.h"
#include "FSR2TemporalUpscaling.h"
#include "LegacyScreenPercentageDriver.h"

#include "Editor.h"
#include "SLevelViewportToolBar.h"
#include "ToolMenus.h"

#define LOCTEXT_NAMESPACE "FSR2TemporalUpscalerEditor"

class FFSR2EditorViewportClientData final : public FEditorViewportClient::ICustomTemporalUpscalerData
{
public:
	bool bIsFSR2Enabled;
	uint32 FSR2Quality;
};

FFSR2TemporalUpscalerEditor::FFSR2TemporalUpscalerEditor(IFSR2TemporalUpscalingModule* Module)
: TemporalUpscalingModule(Module)
{

}

#undef LOCTEXT_NAMESPACE