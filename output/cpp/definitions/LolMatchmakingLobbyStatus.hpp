#ifndef SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
#define SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
#include <json.hpp>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingLobbyStatus {
    // 
    std::string lobbyId;
    // 
    int32_t queueId;
    // 
    bool allowedPlayAgain;
    // 
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    bool isSpectator;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus& v) {
    j["lobbyId"] = v.lobbyId;
    j["queueId"] = v.queueId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isSpectator"] = v.isSpectator;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
