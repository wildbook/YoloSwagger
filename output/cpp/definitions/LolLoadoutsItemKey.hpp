#ifndef SWAGGER_TYPES_LolLoadoutsItemKey_HPP
#define SWAGGER_TYPES_LolLoadoutsItemKey_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsItemKey {
    // 
    int32_t itemId;
    // 
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsItemKey& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsItemKey& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsItemKey_HPP
