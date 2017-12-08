#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta_t {
    uint64_t ipDelta;
    uint64_t timestamp;
    bool compensationModeEnabled;
    uint64_t xpDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta_t& v) {
    j["ipDelta"] = v.ipDelta;
    j["timestamp"] = v.timestamp;
    j["compensationModeEnabled"] = v.compensationModeEnabled;
    j["xpDelta"] = v.xpDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta_t& v) {
    v.ipDelta = j.at("ipDelta").get<uint64_t>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>();
    v.xpDelta = j.at("xpDelta").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerPlatformDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
