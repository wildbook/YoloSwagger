#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryDTO_t {
    uint64_t accountId;
    std::map<std::string, nlohmann::json> items;
    std::string expires;
    uint64_t summonerId;
    std::string puuid;
    std::optional<std::string> itemsJwt;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryDTO_t& v) {
    j["accountId"] = v.accountId;
    j["items"] = v.items;
    j["expires"] = v.expires;
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryDTO_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.expires = j.at("expires").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::string>();
  }
  inline std::string to_string(const LolLoadoutsInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
