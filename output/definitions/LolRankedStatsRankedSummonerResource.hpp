#ifndef SWAGGER_TYPES_LolRankedStatsRankedSummonerResource_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedSummonerResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolRankedStatsRankedSummonerResource {
    // 
    uint64_t accountId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedSummonerResource& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedSummonerResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedSummonerResource_HPP
