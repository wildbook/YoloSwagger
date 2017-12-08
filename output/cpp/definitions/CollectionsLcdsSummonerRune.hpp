#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerRune_t {
    uint64_t_t purchaseDate;
    uint32_t_t runeId;
    uint64_t_t summonerId;
    uint64_t_t purchased;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRune_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["runeId"] = v.runeId;
    j["summonerId"] = v.summonerId;
    j["purchased"] = v.purchased;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRune_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t_t>();
    v.runeId = j.at("runeId").get<uint32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.purchased = j.at("purchased").get<uint64_t_t>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerRune_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
