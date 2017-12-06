#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerIcon.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO_t {
    std::string dateString;
    std::vector<CollectionsLcdsSummonerIcon_t> summonerIcons;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    j["dateString"] = v.dateString;
    j["summonerIcons"] = v.summonerIcons;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    v.dateString = j.at("dateString").get<std::string>();
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
