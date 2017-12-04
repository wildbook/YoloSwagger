#ifndef SWAGGER_TYPES_LeaguesLcdsAggregatedStatsKey_HPP
#define SWAGGER_TYPES_LeaguesLcdsAggregatedStatsKey_HPP
#include <json.hpp>
namespace test {
  // 
  struct LeaguesLcdsAggregatedStatsKey {
'    // 
    std::string gameMode;
    // 
    uint64_t userId;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStatsKey& v) {
    j["gameMode"] = v.gameMode;
    j["userId"] = v.userId;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStatsKey& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.userId = j.at("userId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsAggregatedStatsKey_HPP
