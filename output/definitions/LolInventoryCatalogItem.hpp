#ifndef SWAGGER_TYPES_LolInventoryCatalogItem_HPP
#define SWAGGER_TYPES_LolInventoryCatalogItem_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolInventoryCatalogItem {
'    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    std::string itemInstanceId;
  };

  void to_json(nlohmann::json& j, const LolInventoryCatalogItem& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["itemInstanceId"] = v.itemInstanceId;
  }

  void from_json(const nlohmann::json& j, LolInventoryCatalogItem& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.itemInstanceId = j.at("itemInstanceId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryCatalogItem_HPP
