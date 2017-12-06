#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyStatus_t {
    bool allowedPlayAgain;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<uint64_t> invitedSummonerIds;
    bool isCustom;
    bool isLeader;
    bool isPracticeTool;
    bool isSpectator;
    std::optional<std::string> lobbyId;
    std::vector<uint64_t> memberSummonerIds;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyStatus_t& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isPracticeTool"] = v.isPracticeTool;
    j["isSpectator"] = v.isSpectator;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyStatus_t& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
