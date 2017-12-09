#pragma once
#include <json.hpp>
#include <optional>
#include "basicOperatingSystemInfo.hpp"
namespace leagueapi {
  // User Experience Settings System Information
  struct basicSystemInfo_t {
    basicOperatingSystemInfo_t operatingSystem;
    uint32_t physicalProcessorCores;
    uint64_t physicalMemory;
    uint32_t processorSpeed;
  };

  inline void to_json(nlohmann::json& j, const basicSystemInfo_t& v) {
    j["operatingSystem"] = v.operatingSystem;
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["physicalMemory"] = v.physicalMemory;
    j["processorSpeed"] = v.processorSpeed;
  }

  inline void from_json(const nlohmann::json& j, basicSystemInfo_t& v) {
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo_t>();
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>();
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>();
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>();
  }
  inline std::string to_string(const basicSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
