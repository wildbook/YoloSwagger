#ifndef SWAGGER_TYPES_LolLoadoutsGetItemsRequest_HPP
#define SWAGGER_TYPES_LolLoadoutsGetItemsRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsGetItemsRequest {
    // 
    uint32_t id;
    // 
    std::vector<std::string> inventoryJWTs;
    // 
    std::vector<std::string> inventoryTypes;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGetItemsRequest& v) {
    j["id"] = v.id;
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["inventoryTypes"] = v.inventoryTypes;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGetItemsRequest& v) {
    v.id = j.at("id").get<uint32_t>;
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>;
    v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGetItemsRequest_HPP
