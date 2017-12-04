#ifndef SWAGGER_TYPES_basicSystemInfo_HPP
#define SWAGGER_TYPES_basicSystemInfo_HPP
#include <json.hpp>
#include "basicOperatingSystemInfo.hpp"
namespace leagueapi {
  // User Experience Settings System Information
  struct basicSystemInfo {
    // 
    uint32_t physicalProcessorCores;
    // 
    uint32_t processorSpeed;
    // 
    uint64_t physicalMemory;
    // 
    basicOperatingSystemInfo operatingSystem;
  };

  inline void to_json(nlohmann::json& j, const basicSystemInfo& v) {
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["processorSpeed"] = v.processorSpeed;
    j["physicalMemory"] = v.physicalMemory;
    j["operatingSystem"] = v.operatingSystem;
  }

  inline void from_json(const nlohmann::json& j, basicSystemInfo& v) {
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>;
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>;
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>;
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>;
  }

}
#endif // SWAGGER_TYPES_basicSystemInfo_HPP
