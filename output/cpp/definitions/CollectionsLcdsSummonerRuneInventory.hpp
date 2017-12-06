#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory_t {
    std::vector<CollectionsLcdsSummonerRune_t> summonerRunes;
    uint64_t summonerId;
    std::string dateString;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory_t& v) {
    j["summonerRunes"] = v.summonerRunes;
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory_t& v) {
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.dateString = j.at("dateString").get<std::string>();
  }
}
