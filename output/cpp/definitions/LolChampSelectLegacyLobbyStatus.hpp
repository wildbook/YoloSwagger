#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    bool isSpectator;
    bool isLeader;
    bool isCustom;
    int32_t queueId;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["isSpectator"] = v.isSpectator;
    j["isLeader"] = v.isLeader;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
}
