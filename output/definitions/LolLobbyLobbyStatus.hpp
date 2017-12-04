#ifndef SWAGGER_TYPES_LolLobbyLobbyStatus_HPP
#define SWAGGER_TYPES_LolLobbyLobbyStatus_HPP
#include <json.hpp>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyStatus {
    // 
    bool allowedPlayAgain;
    // 
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    std::vector<uint64_t> invitedSummonerIds;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    bool isPracticeTool;
    // 
    bool isSpectator;
    // 
    std::string lobbyId;
    // 
    std::vector<uint64_t> memberSummonerIds;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyStatus& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["isSpectator"] = v.isSpectator;
    j["lobbyId"] = v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyStatus& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>;
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.isPracticeTool = j.at("isPracticeTool").get<bool>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyStatus_HPP
