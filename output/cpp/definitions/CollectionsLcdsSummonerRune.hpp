#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerRune_t {
    int32_t quantity;
    uint64_t purchased;
    uint32_t runeId;
    uint64_t summonerId;
    uint64_t purchaseDate;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRune_t& v) {
    j["quantity"] = v.quantity;
    j["purchased"] = v.purchased;
    j["runeId"] = v.runeId;
    j["summonerId"] = v.summonerId;
    j["purchaseDate"] = v.purchaseDate;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRune_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.runeId = j.at("runeId").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerRune_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
