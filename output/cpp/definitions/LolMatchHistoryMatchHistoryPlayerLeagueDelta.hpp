#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta_t {
    uint64_t leaguePointDelta;
    std::vector<std::string> miniSeriesProgress;
    uint64_t timestamp;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    j["leaguePointDelta"] = v.leaguePointDelta;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["timestamp"] = v.timestamp;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>();
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
