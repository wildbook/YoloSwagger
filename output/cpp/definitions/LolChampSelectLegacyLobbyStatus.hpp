#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    bool isLeader;
    std::vector<uint64_t> memberSummonerIds;
    bool allowedPlayAgain;
    bool isCustom;
    int32_t queueId;
    bool isSpectator;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isSpectator"] = v.isSpectator;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.isLeader = j.at("isLeader").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
