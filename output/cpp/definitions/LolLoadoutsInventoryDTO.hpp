#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryDTO_t {
    std::string puuid;
    std::map<std::string, nlohmann::json> items;
    uint64_t accountId;
    uint64_t summonerId;
    std::string expires;
    std::optional<std::string> itemsJwt;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryDTO_t& v) {
    j["puuid"] = v.puuid;
    j["items"] = v.items;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["expires"] = v.expires;
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryDTO_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.expires = j.at("expires").get<std::string>();
    if(auto it = j.find("itemsJwt"); it != j.end() !it->is_null())
      v.itemsJwt = it->get<std::string>();
  }
}
