#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta {
    // 
    uint64_t leaguePointDelta;
    // 
    std::vector<std::string> miniSeriesProgress;
    // 
    std::string reason;
    // 
    uint64_t timestamp;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["leaguePointDelta"] = v.leaguePointDelta;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["reason"] = v.reason;
    j["timestamp"] = v.timestamp;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>;
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>;
    v.reason = j.at("reason").get<std::string>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
