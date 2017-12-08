#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    int32_t queueId;
    bool allowedPlayAgain;
    bool isSpectator;
    bool isCustom;
    bool isLeader;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["queueId"] = v.queueId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isSpectator"] = v.isSpectator;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolChampSelectLegacyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
