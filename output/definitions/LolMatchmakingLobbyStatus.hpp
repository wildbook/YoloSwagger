#ifndef SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
#define SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
#include <json.hpp>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingLobbyStatus {
    // 
    bool allowedPlayAgain;
    // 
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    bool isSpectator;
    // 
    std::string lobbyId;
    // 
    std::vector<uint64_t> memberSummonerIds;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    j["lobbyId"] = v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingLobbyStatus_HPP
