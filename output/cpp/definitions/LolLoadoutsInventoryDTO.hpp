#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryDTO_t {
    uint64_t accountId;
    std::string expires;
    std::map<std::string, nlohmann::json> items;
    std::optional<std::string> itemsJwt;
    std::string puuid;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryDTO_t& v) {
    j["accountId"] = v.accountId;
    j["expires"] = v.expires;
    j["items"] = v.items;
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryDTO_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.expires = j.at("expires").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    if(auto it = j.find("itemsJwt"); it != j.end() !it->is_null())
      v.itemsJwt = it->get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
