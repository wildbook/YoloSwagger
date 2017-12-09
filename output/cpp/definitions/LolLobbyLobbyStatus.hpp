#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyStatus_t {
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds;
    bool isPracticeTool;
    bool isCustom;
    bool allowedPlayAgain;
    bool isLeader;
    std::optional<std::string> lobbyId;
    bool isSpectator;
    std::vector<uint64_t> invitedSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyStatus_t& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["queueId"] = v.queueId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isPracticeTool"] = v.isPracticeTool;
    j["isCustom"] = v.isCustom;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isLeader"] = v.isLeader;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isSpectator"] = v.isSpectator;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyStatus_t& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
