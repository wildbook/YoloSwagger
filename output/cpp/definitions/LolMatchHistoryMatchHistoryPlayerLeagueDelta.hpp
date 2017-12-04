#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta {
    // 
    std::vector<std::string> miniSeriesProgress;
    // 
    std::string reason;
    // 
    uint64_t timestamp;
    // 
    uint64_t leaguePointDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["miniSeriesProgress"] = v.miniSeriesProgress;
    j["reason"] = v.reason;
    j["timestamp"] = v.timestamp;
    j["leaguePointDelta"] = v.leaguePointDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>;
    v.reason = j.at("reason").get<std::string>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerLeagueDelta_HPP
