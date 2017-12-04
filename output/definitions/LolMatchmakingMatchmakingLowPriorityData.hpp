#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingLowPriorityData_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingLowPriorityData_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchmakingMatchmakingLowPriorityData {
    // 
    std::string bustedLeaverAccessToken;
    // 
    std::vector<uint64_t> penalizedSummonerIds;
    // 
    double penaltyTime;
    // 
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingLowPriorityData& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingLowPriorityData& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>;
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>;
    v.penaltyTime = j.at("penaltyTime").get<double>;
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingLowPriorityData_HPP
