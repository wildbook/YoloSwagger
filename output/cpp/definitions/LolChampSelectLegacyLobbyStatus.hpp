#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    bool allowedPlayAgain;
    int32_t queueId;
    bool isLeader;
    bool isSpectator;
    std::vector<uint64_t> memberSummonerIds;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["queueId"] = v.queueId;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
