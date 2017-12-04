#ifndef SWAGGER_TYPES_basicSystemInfo_HPP
#define SWAGGER_TYPES_basicSystemInfo_HPP
#include <json.hpp>
#include "basicOperatingSystemInfo.hpp"
namespace leagueapi {
  // User Experience Settings System Information
  struct basicSystemInfo {
    // 
    basicOperatingSystemInfo operatingSystem;
    // 
    uint64_t physicalMemory;
    // 
    uint32_t physicalProcessorCores;
    // 
    uint32_t processorSpeed;
  };

  void to_json(nlohmann::json& j, const basicSystemInfo& v) {
    j["operatingSystem"] = v.operatingSystem;
    j["physicalMemory"] = v.physicalMemory;
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["processorSpeed"] = v.processorSpeed;
  }

  void from_json(const nlohmann::json& j, basicSystemInfo& v) {
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>;
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>;
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>;
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_basicSystemInfo_HPP
