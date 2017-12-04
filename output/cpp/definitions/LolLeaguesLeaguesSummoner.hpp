#ifndef SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesSummoner {
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesSummoner& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
