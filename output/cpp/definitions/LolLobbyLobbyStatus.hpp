#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyStatus_t {
    bool isPracticeTool;
    bool isLeader;
    std::vector<uint64_t> memberSummonerIds;
    bool allowedPlayAgain;
    std::optional<std::string> lobbyId;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isCustom;
    std::vector<uint64_t> invitedSummonerIds;
    int32_t queueId;
    bool isSpectator;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyStatus_t& v) {
    j["isPracticeTool"] = v.isPracticeTool;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["queueId"] = v.queueId;
    j["isSpectator"] = v.isSpectator;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyStatus_t& v) {
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
