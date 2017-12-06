#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherComponentStateProgress_t {
    uint64_t bytesRequired;
    double bytesPerSecond;
    uint64_t bytesComplete;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateProgress_t& v) {
    j["bytesRequired"] = v.bytesRequired;
    j["bytesPerSecond"] = v.bytesPerSecond;
    j["bytesComplete"] = v.bytesComplete;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateProgress_t& v) {
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>();
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>();
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>();
  }
}
