#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory_t {
    std::string dateString;
    uint64_t summonerId;
    std::vector<CollectionsLcdsSummonerRune_t> summonerRunes;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory_t& v) {
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
    j["summonerRunes"] = v.summonerRunes;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory_t& v) {
    v.dateString = j.at("dateString").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune_t>>();
  }
}
