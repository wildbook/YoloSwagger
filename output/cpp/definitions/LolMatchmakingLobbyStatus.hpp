#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolMatchmakingLobbyStatus_t {
    LolMatchmakingQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<uint64_t> memberSummonerIds;
    std::optional<std::string> lobbyId;
    bool isCustom;
    bool allowedPlayAgain;
    bool isSpectator;
    int32_t queueId;
    bool isLeader;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus_t& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["memberSummonerIds"] = v.memberSummonerIds;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isCustom"] = v.isCustom;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isSpectator"] = v.isSpectator;
    j["queueId"] = v.queueId;
    j["isLeader"] = v.isLeader;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus_t& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isLeader = j.at("isLeader").get<bool>();
  }
  inline std::string to_string(const LolMatchmakingLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
