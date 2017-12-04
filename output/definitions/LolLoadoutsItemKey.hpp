#ifndef SWAGGER_TYPES_LolLoadoutsItemKey_HPP
#define SWAGGER_TYPES_LolLoadoutsItemKey_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsItemKey {
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
  };

  void to_json(nlohmann::json& j, const LolLoadoutsItemKey& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  void from_json(const nlohmann::json& j, LolLoadoutsItemKey& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsItemKey_HPP
