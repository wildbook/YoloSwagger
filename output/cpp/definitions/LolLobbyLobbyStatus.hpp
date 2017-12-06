#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyStatus_t {
    bool isSpectator;
    bool isLeader;
    bool isCustom;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<uint64_t> invitedSummonerIds;
    int32_t queueId;
    std::optional<std::string> lobbyId;
    bool allowedPlayAgain;
    bool isPracticeTool;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyStatus_t& v) {
    j["isSpectator"] = v.isSpectator;
    j["isLeader"] = v.isLeader;
    j["isCustom"] = v.isCustom;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["queueId"] = v.queueId;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isPracticeTool"] = v.isPracticeTool;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyStatus_t& v) {
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    if(auto it = j.find("lobbyId"); it != j.end() !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
}
