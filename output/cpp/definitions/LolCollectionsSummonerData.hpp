#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSpellBookDTO.hpp"
#include "CollectionsLcdsMasteryBookDTO.hpp"
namespace leagueapi {
  struct LolCollectionsSummonerData_t {
    CollectionsLcdsSpellBookDTO_t spellBook;
    CollectionsLcdsMasteryBookDTO_t masteryBook;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsSummonerData_t& v) {
    j["spellBook"] = v.spellBook;
    j["masteryBook"] = v.masteryBook;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsSummonerData_t& v) {
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO_t>();
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO_t>();
  }
  inline std::string to_string(const LolCollectionsSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
