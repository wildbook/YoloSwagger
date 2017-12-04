#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsSummonerSpells {
    // 
    uint64_t summonerId;
    // 
    std::vector<uint64_t> spells;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerSpells& v) {
    j["summonerId"] = v.summonerId;
    j["spells"] = v.spells;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerSpells& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.spells = j.at("spells").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
