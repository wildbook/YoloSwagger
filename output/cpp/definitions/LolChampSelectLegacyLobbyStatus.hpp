#ifndef SWAGGER_TYPES_LolChampSelectLegacyLobbyStatus_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyLobbyStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyLobbyStatus {
    // 
    int32_t queueId;
    // 
    bool allowedPlayAgain;
    // 
    bool isSpectator;
    // 
    bool isCustom;
    // 
    bool isLeader;
    // 
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLobbyStatus& v) {
    j["queueId"] = v.queueId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isSpectator"] = v.isSpectator;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>;
    v.isSpectator = j.at("isSpectator").get<bool>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isLeader = j.at("isLeader").get<bool>;
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyLobbyStatus_HPP
