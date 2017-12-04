#ifndef SWAGGER_TYPES_LolLobbyLobbyMatchmakingLowPriorityDataResource_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMatchmakingLowPriorityDataResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource {
'    // 
    std::string bustedLeaverAccessToken;
    // 
    std::vector<uint64_t> penalizedSummonerIds;
    // 
    double penaltyTime;
    // 
    double penaltyTimeRemaining;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>;
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>;
    v.penaltyTime = j.at("penaltyTime").get<double>;
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMatchmakingLowPriorityDataResource_HPP
