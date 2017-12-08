#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta_t {
    uint64_t timestamp;
    uint64_t leaguePointDelta;
    std::string reason;
    std::vector<std::string> miniSeriesProgress;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    j["timestamp"] = v.timestamp;
    j["leaguePointDelta"] = v.leaguePointDelta;
    j["reason"] = v.reason;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
