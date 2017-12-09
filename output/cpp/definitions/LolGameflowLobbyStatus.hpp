#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolGameflowLobbyStatus_t {
    std::vector<uint64_t> memberSummonerIds;
    int32_t queueId;
    std::vector<uint64_t> invitedSummonerIds;
    bool isLeader;
    bool allowedPlayAgain;
    bool isPracticeTool;
    LolGameflowQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isSpectator;
    std::optional<std::string> lobbyId;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLobbyStatus_t& v) {
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["isLeader"] = v.isLeader;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isPracticeTool"] = v.isPracticeTool;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isSpectator"] = v.isSpectator;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLobbyStatus_t& v) {
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isPracticeTool = j.at("isPracticeTool").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolGameflowQueueCustomGameSpectatorPolicy_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolGameflowLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
