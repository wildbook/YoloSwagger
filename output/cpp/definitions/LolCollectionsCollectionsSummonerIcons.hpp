#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsSummonerIcons {
    // 
    uint64_t summonerId;
    // 
    std::vector<int32_t> icons;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcons& v) {
    j["summonerId"] = v.summonerId;
    j["icons"] = v.icons;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcons& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.icons = j.at("icons").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
