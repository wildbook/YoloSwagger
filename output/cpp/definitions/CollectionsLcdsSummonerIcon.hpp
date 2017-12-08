#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerIcon_t {
    uint64_t_t purchaseDate;
    int32_t_t iconId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIcon_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["iconId"] = v.iconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIcon_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t_t>();
    v.iconId = j.at("iconId").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
