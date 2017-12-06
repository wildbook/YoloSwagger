#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta_t {
    bool compensationModeEnabled;
    uint64_t timestamp;
    uint64_t xpDelta;
    uint64_t ipDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta_t& v) {
    j["compensationModeEnabled"] = v.compensationModeEnabled;
    j["timestamp"] = v.timestamp;
    j["xpDelta"] = v.xpDelta;
    j["ipDelta"] = v.ipDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta_t& v) {
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.xpDelta = j.at("xpDelta").get<uint64_t>();
    v.ipDelta = j.at("ipDelta").get<uint64_t>();
  }
}
