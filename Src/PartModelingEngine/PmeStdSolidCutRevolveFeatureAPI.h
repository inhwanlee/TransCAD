#pragma once

#include ".\PmeMacro.h"
#include ".\PmeHandle.h"
#include ".\PmeStdRevolveEndType.h"

class PME_API PmeStdSolidCutRevolveFeatureAPI
{
public:
	static void Create
	(
		PmeHPart hPart,
		const CString & name,
		PmeHReference hProfileSketch,
		double startAngle,
		PmeStdRevolveEndType startCondition,
		double endAngle,
		PmeStdRevolveEndType endCondition,
		bool isFlip,
		PmeHFeature & hFeature
	);

	static void GetProfileSketch(PmeHFeature hFeature, PmeHReference & hProfileSketch);
	static void GetStartAngle(PmeHFeature hFeature, double & startAngle);
	static void GetStartCondition(PmeHFeature hFeature, PmeStdRevolveEndType & startCondition);
	static void GetEndAngle(PmeHFeature hFeature, double & endAngle);
	static void GetEndCondition(PmeHFeature hFeature, PmeStdRevolveEndType & endCondition);
	static void IsFlip(PmeHFeature hFeature, bool & isFlip);

	static void SetProfileSketch(PmeHFeature hFeature, PmeHReference hProfileSketch);
	static void SetStartAngle(PmeHFeature hFeature, double startAngle);
	static void SetEndAngle(PmeHFeature hFeature, double endAngle);
	static void SetFlip(PmeHFeature hFeature, bool isFlip);
};