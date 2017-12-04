#ifndef SWAGGER_TYPES_LcdsInviter_HPP
#define SWAGGER_TYPES_LcdsInviter_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsInviter {
    // 
    std::string previousSeasonHighestTier;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LcdsInviter& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LcdsInviter& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsInviter_HPP
