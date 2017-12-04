#ifndef SWAGGER_TYPES_LolLoadoutsCreateOrUpdateItemsRequest_HPP
#define SWAGGER_TYPES_LolLoadoutsCreateOrUpdateItemsRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsCreateOrUpdateItemsRequest {
    // 
    std::map<std::string, nlohmann::json> items;
    // 
    uint32_t id;
    // 
    std::vector<std::string> inventoryJWTs;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsCreateOrUpdateItemsRequest& v) {
    j["items"] = v.items;
    j["id"] = v.id;
    j["inventoryJWTs"] = v.inventoryJWTs;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsCreateOrUpdateItemsRequest& v) {
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>;
    v.id = j.at("id").get<uint32_t>;
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsCreateOrUpdateItemsRequest_HPP
