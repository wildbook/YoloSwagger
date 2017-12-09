#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryInventoryDTO_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::string puuid;
    std::string itemsJwt;
    std::map<std::string, nlohmann::json> items;
    std::string expires;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryDTO_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["itemsJwt"] = v.itemsJwt;
    j["items"] = v.items;
    j["expires"] = v.expires;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryDTO_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.itemsJwt = j.at("itemsJwt").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.expires = j.at("expires").get<std::string>();
  }
  inline std::string to_string(const LolInventoryInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
