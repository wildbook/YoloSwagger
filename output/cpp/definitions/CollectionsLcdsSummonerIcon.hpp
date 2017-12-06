#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerIcon_t {
    uint64_t purchaseDate;
    uint64_t summonerId;
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIcon_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["summonerId"] = v.summonerId;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIcon_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.iconId = j.at("iconId").get<int32_t>();
  }
}
