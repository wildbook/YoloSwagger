#ifndef SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolMissionsCollectionsSummoner {
'    // 
    int32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsSummoner_HPP
