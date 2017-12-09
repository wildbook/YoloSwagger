#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    std::vector<uint64_t> memberSummonerIds;
    bool isLeader;
    bool allowedPlayAgain;
    int32_t queueId;
    bool isSpectator;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus_t& v) {
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isLeader"] = v.isLeader;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["queueId"] = v.queueId;
    j["isSpectator"] = v.isSpectator;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus_t& v) {
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
