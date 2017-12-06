#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerRune_t {
    uint32_t runeId;
    uint64_t purchaseDate;
    int32_t quantity;
    uint64_t summonerId;
    uint64_t purchased;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRune_t& v) {
    j["runeId"] = v.runeId;
    j["purchaseDate"] = v.purchaseDate;
    j["quantity"] = v.quantity;
    j["summonerId"] = v.summonerId;
    j["purchased"] = v.purchased;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRune_t& v) {
    v.runeId = j.at("runeId").get<uint32_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
  }
}
