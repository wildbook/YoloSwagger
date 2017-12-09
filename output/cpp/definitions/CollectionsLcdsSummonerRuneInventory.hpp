#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory_t {
    uint64_t summonerId;
    std::vector<CollectionsLcdsSummonerRune_t> summonerRunes;
    std::string dateString;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerRunes"] = v.summonerRunes;
    j["dateString"] = v.dateString;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune_t>>();
    v.dateString = j.at("dateString").get<std::string>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerRuneInventory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
