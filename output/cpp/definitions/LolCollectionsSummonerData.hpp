#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSpellBookDTO.hpp"
#include "CollectionsLcdsMasteryBookDTO.hpp"
namespace leagueapi {
  struct LolCollectionsSummonerData_t {
    CollectionsLcdsMasteryBookDTO_t masteryBook;
    CollectionsLcdsSpellBookDTO_t spellBook;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsSummonerData_t& v) {
    j["masteryBook"] = v.masteryBook;
    j["spellBook"] = v.spellBook;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsSummonerData_t& v) {
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO_t>();
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO_t>();
  }
}
