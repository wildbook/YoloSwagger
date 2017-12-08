#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus_t {
    int32_t_t queueId;
    bool_t allowedPlayAgain;
    bool_t isSpectator;
    bool_t isCustom;
    bool_t isLeader;
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
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool_t>();
    v.isSpectator = j.at("isSpectator").get<bool_t>();
    v.isCustom = j.at("isCustom").get<bool_t>();
    v.isLeader = j.at("isLeader").get<bool_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolChampSelectLegacyLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
