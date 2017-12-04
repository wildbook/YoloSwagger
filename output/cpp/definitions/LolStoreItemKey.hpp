#ifndef SWAGGER_TYPES_LolStoreItemKey_HPP
#define SWAGGER_TYPES_LolStoreItemKey_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreItemKey {
    // 
    int32_t itemId;
    // 
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemKey& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemKey& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreItemKey_HPP
