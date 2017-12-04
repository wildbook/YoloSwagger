#ifndef SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsCollectionsSummoner {
    // 
    int32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
