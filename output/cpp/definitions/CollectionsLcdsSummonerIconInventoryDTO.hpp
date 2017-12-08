#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerIcon.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO_t {
    uint64_t summonerId;
    std::string dateString;
    std::vector<CollectionsLcdsSummonerIcon_t> summonerIcons;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
    j["summonerIcons"] = v.summonerIcons;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.dateString = j.at("dateString").get<std::string>();
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon_t>>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
