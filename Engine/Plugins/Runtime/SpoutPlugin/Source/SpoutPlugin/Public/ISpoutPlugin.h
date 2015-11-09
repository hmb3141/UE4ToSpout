// Copyright(c) 2015, Michael Allar
// All rights reserved.

#pragma once

#include "ModuleManager.h"


/**
 * The public interface to this module
 */
class ISpoutPlugin : public IModuleInterface
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline ISpoutPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< ISpoutPlugin >("SpoutPlugin");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("SpoutPlugin");
	}

	//virtual void SetSpoutTextureSource(class UTextureRenderTarget2D* SourceTexture) {}
	virtual void SetSpoutTextureSource(class TArray<UTextureRenderTarget2D*> SourceTextures) {}
	virtual void DrawToSender() {}
};

