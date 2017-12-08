#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyStatus_t {
    bool allowedPlayAgain;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds;
    std::vector<uint64_t> invitedSummonerIds;
    bool isLeader;
    bool isSpectator;
    bool isPracticeTool;
    std::optional<std::string> lobbyId;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyStatus_t& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["queueId"] = v.queueId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    j["isPracticeTool"] = v.isPracticeTool;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyStatus_t& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
