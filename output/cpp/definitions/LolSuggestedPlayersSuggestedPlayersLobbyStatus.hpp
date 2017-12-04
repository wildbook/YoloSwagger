#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus {
    // 
    int32_t queueId;
    // 
    std::vector<uint64_t> invitedSummonerIds;
    // 
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    j["queueId"] = v.queueId;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
