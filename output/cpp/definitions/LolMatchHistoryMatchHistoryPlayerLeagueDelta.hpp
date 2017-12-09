#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta_t {
    std::string reason;
    uint64_t timestamp;
    std::vector<std::string> miniSeriesProgress;
    uint64_t leaguePointDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    j["reason"] = v.reason;
    j["timestamp"] = v.timestamp;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["leaguePointDelta"] = v.leaguePointDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>();
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
