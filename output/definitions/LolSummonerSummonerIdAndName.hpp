#ifndef SWAGGER_TYPES_LolSummonerSummonerIdAndName_HPP
#define SWAGGER_TYPES_LolSummonerSummonerIdAndName_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerSummonerIdAndName {
    // 
    std::string displayName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndName& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndName& v) {
    v.displayName = j.at("displayName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerIdAndName_HPP
