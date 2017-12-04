#ifndef SWAGGER_TYPES_LolGameflowLobbyStatus_HPP
#define SWAGGER_TYPES_LolGameflowLobbyStatus_HPP
#include <json.hpp>
#include "LolGameflowQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolGameflowLobbyStatus {
    // 
    std::string lobbyId;
    // 
    int32_t queueId;
    // 
    std::vector<uint64_t> invitedSummonerIds;
    // 
    bool allowedPlayAgain;
    // 
    LolGameflowQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    bool isSpectator;
    // 
    bool isPracticeTool;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLobbyStatus& v) {
    j["lobbyId"] = v.lobbyId;
    j["queueId"] = v.queueId;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isSpectator"] = v.isSpectator;
    j["isPracticeTool"] = v.isPracticeTool;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLobbyStatus& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>;
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolGameflowQueueCustomGameSpectatorPolicy>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.isPracticeTool = j.at("isPracticeTool").get<bool>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowLobbyStatus_HPP
