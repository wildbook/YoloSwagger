#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory_t {
    std::vector<CollectionsLcdsSummonerRune_t> summonerRunes;
    std::string dateString;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory_t& v) {
    j["summonerRunes"] = v.summonerRunes;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory_t& v) {
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune_t>>();
    v.dateString = j.at("dateString").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerRuneInventory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
