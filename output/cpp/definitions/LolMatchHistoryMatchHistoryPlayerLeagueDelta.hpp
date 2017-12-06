#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta_t {
    uint64_t leaguePointDelta;
    std::vector<std::string> miniSeriesProgress;
    std::string reason;
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    j["leaguePointDelta"] = v.leaguePointDelta;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["reason"] = v.reason;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>();
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>();
    v.reason = j.at("reason").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
  }
}
