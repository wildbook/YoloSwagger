#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerSpells_t {
    uint64_t summonerId;
    std::vector<uint64_t> spells;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerSpells_t& v) {
    j["summonerId"] = v.summonerId;
    j["spells"] = v.spells;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerSpells_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.spells = j.at("spells").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerSpells_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
