#pragma once

class PmeFeature;

class PME_API PmeFeatureTagMarker
{
public:
	static void Attach(BODY * pBody, PmeFeature * pFeature);
	static void Attach(FACE * pFace, PmeFeature * pFeature);
	static PmeFeature * FindFeature(ENTITY * pEntity);

	static void Detach(FACE * pFace);

	static void Clear(ENTITY * pEntity);
};

