#pragma once
#include <json.hpp>
#include <optional>
#include "basicOperatingSystemInfo.hpp"
namespace leagueapi {
  // User Experience Settings System Information
  struct basicSystemInfo_t {
    uint32_t_t physicalProcessorCores;
    uint32_t_t processorSpeed;
    uint64_t_t physicalMemory;
    basicOperatingSystemInfo_t operatingSystem;
  };

  inline void to_json(nlohmann::json& j, const basicSystemInfo_t& v) {
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["processorSpeed"] = v.processorSpeed;
    j["physicalMemory"] = v.physicalMemory;
    j["operatingSystem"] = v.operatingSystem;
  }

  inline void from_json(const nlohmann::json& j, basicSystemInfo_t& v) {
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t_t>();
    v.processorSpeed = j.at("processorSpeed").get<uint32_t_t>();
    v.physicalMemory = j.at("physicalMemory").get<uint64_t_t>();
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo_t>();
  }
  inline std::string to_string(const basicSystemInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
