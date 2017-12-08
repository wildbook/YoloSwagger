#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta_t {
    std::vector<std::string> miniSeriesProgress;
    std::string_t reason;
    uint64_t_t timestamp;
    uint64_t_t leaguePointDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["reason"] = v.reason;
    j["timestamp"] = v.timestamp;
    j["leaguePointDelta"] = v.leaguePointDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>();
    v.reason = j.at("reason").get<std::string_t>();
    v.timestamp = j.at("timestamp").get<uint64_t_t>();
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerLeagueDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
