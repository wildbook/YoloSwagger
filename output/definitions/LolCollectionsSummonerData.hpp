#ifndef SWAGGER_TYPES_LolCollectionsSummonerData_HPP
#define SWAGGER_TYPES_LolCollectionsSummonerData_HPP
#include <json.hpp>
#include "CollectionsLcdsSpellBookDTO.hpp"
#include "CollectionsLcdsMasteryBookDTO.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsSummonerData {
    // 
    CollectionsLcdsMasteryBookDTO masteryBook;
    // 
    CollectionsLcdsSpellBookDTO spellBook;
  };

  void to_json(nlohmann::json& j, const LolCollectionsSummonerData& v) {
    j["masteryBook"] = v.masteryBook;
    j["spellBook"] = v.spellBook;
  }

  void from_json(const nlohmann::json& j, LolCollectionsSummonerData& v) {
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO>;
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsSummonerData_HPP
