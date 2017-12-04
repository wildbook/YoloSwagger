#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerDelta_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerDelta {
    // 
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta> deltas;
    // 
    uint64_t originalAccountId;
    // 
    std::string originalPlatformId;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerDelta& v) {
    j["deltas"] = v.deltas;
    j["originalAccountId"] = v.originalAccountId;
    j["originalPlatformId"] = v.originalPlatformId;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerDelta& v) {
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta>>;
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>;
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerDelta_HPP
