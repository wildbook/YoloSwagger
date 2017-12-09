#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryInventoryDTO_t {
    std::string puuid;
    std::map<std::string, nlohmann::json> items;
    std::string itemsJwt;
    uint64_t accountId;
    uint64_t summonerId;
    std::string expires;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryDTO_t& v) {
    j["puuid"] = v.puuid;
    j["items"] = v.items;
    j["itemsJwt"] = v.itemsJwt;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["expires"] = v.expires;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryDTO_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.itemsJwt = j.at("itemsJwt").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.expires = j.at("expires").get<std::string>();
  }
  inline std::string to_string(const LolInventoryInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
