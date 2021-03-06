#include "bspch.h"
#include "TestsManager.h"

uint32_t TestsManager::m_WallsCount = 0;
uint32_t TestsManager::m_BulletsCount = 0;
bool TestsManager::m_GenerateObjects = false;
bool TestsManager::m_CleanupScene = false;
bool TestsManager::m_AllowMTStabilityStressTest = false;

void TestsManager::ToggleGenerateObjects(const uint32_t wallsCount, const uint32_t bulletsCount)
{
    m_WallsCount = wallsCount;
    m_BulletsCount = bulletsCount;
    m_GenerateObjects = true;
}

void TestsManager::ToggleGenerateObjects()
{
    m_GenerateObjects = !m_GenerateObjects;
}

void TestsManager::ToggleCleanupScene(bool toggle)
{
    m_CleanupScene = toggle;
}

void TestsManager::ToggleMTStressTest()
{
    m_AllowMTStabilityStressTest = !m_AllowMTStabilityStressTest;
}
