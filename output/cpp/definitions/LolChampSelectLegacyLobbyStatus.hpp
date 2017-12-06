#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    bool allowedPlayAgain;
    bool isCustom;
    bool isLeader;
    bool isSpectator;
    std::vector<uint64_t> memberSummonerIds;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
