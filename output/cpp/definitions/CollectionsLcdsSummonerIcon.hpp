#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerIcon_t {
    int32_t iconId;
    uint64_t purchaseDate;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIcon_t& v) {
    j["iconId"] = v.iconId;
    j["purchaseDate"] = v.purchaseDate;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIcon_t& v) {
    v.iconId = j.at("iconId").get<int32_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
