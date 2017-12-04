#ifndef SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesSummoner {
    // 
    uint64_t accountId;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeaguesSummoner& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeaguesSummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesSummoner_HPP
