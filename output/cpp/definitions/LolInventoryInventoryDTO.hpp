#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryInventoryDTO_t {
    uint64_t accountId;
    std::string expires;
    std::map<std::string, nlohmann::json> items;
    std::string itemsJwt;
    std::string puuid;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryDTO_t& v) {
    j["accountId"] = v.accountId;
    j["expires"] = v.expires;
    j["items"] = v.items;
    j["itemsJwt"] = v.itemsJwt;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryDTO_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.expires = j.at("expires").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.itemsJwt = j.at("itemsJwt").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
