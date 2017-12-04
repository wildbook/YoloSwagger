#ifndef SWAGGER_TYPES_LolLoadoutsInventoryDTO_HPP
#define SWAGGER_TYPES_LolLoadoutsInventoryDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsInventoryDTO {
    // 
    std::string expires;
    // 
    std::map<std::string, nlohmann::json> items;
    // 
    std::string itemsJwt;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryDTO& v) {
    j["expires"] = v.expires;
    j["items"] = v.items;
    j["itemsJwt"] = v.itemsJwt;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryDTO& v) {
    v.expires = j.at("expires").get<std::string>;
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>;
    v.itemsJwt = j.at("itemsJwt").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsInventoryDTO_HPP