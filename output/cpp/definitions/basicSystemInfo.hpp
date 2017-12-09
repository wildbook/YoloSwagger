#pragma once
#include <json.hpp>
#include <optional>
#include "basicOperatingSystemInfo.hpp"
namespace leagueapi {
  // User Experience Settings System Information
  struct basicSystemInfo_t {
    uint64_t physicalMemory;
    uint32_t physicalProcessorCores;
    uint32_t processorSpeed;
    basicOperatingSystemInfo_t operatingSystem;
  };

  inline void to_json(nlohmann::json& j, const basicSystemInfo_t& v) {
    j["physicalMemory"] = v.physicalMemory;
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["processorSpeed"] = v.processorSpeed;
    j["operatingSystem"] = v.operatingSystem;
  }

  inline void from_json(const nlohmann::json& j, basicSystemInfo_t& v) {
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>();
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>();
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>();
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo_t>();
  }
  inline std::string to_string(const basicSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
