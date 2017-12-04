#ifndef SWAGGER_TYPES_LolMissionsCollectionsSummonerIcons_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsSummonerIcons_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsCollectionsSummonerIcons {
    // 
    std::vector<int32_t> icons;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsSummonerIcons& v) {
    j["icons"] = v.icons;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsSummonerIcons& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsSummonerIcons_HPP
