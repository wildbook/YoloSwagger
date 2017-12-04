#ifndef SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP
#define SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerSummonerCreatedId {
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerCreatedId& v) {
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerCreatedId& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP
