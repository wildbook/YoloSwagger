#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory_t {
    std::string_t dateString;
    std::vector<CollectionsLcdsSummonerRune_t> summonerRunes;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory_t& v) {
    j["dateString"] = v.dateString;
    j["summonerRunes"] = v.summonerRunes;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory_t& v) {
    v.dateString = j.at("dateString").get<std::string_t>();
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerRuneInventory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
