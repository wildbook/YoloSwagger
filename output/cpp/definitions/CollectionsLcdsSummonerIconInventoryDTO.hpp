#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerIcon.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO_t {
    std::vector<CollectionsLcdsSummonerIcon_t> summonerIcons;
    uint64_t summonerId;
    std::string dateString;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    j["summonerIcons"] = v.summonerIcons;
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.dateString = j.at("dateString").get<std::string>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
