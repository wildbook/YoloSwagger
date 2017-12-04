#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus {
'    // 
    std::vector<uint64_t> invitedSummonerIds;
    // 
    std::vector<uint64_t> memberSummonerIds;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersLobbyStatus_HPP
