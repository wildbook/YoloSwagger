#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerSpells_t {
    std::vector<uint64_t> spells;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerSpells_t& v) {
    j["spells"] = v.spells;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerSpells_t& v) {
    v.spells = j.at("spells").get<std::vector<uint64_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
