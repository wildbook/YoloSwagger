#ifndef SWAGGER_TYPES_LolStoreBundleItemDTO_HPP
#define SWAGGER_TYPES_LolStoreBundleItemDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreBundleItemDTO {
    // 
    std::string description;
    // 
    int64_t discountedRp;
    // 
    std::string iconUrl;
    // 
    std::string inventoryType;
    // 
    int64_t ip;
    // 
    int32_t itemId;
    // 
    std::string name;
    // 
    bool owned;
    // 
    uint32_t quantity;
    // 
    int64_t rp;
  };

  void to_json(nlohmann::json& j, const LolStoreBundleItemDTO& v) {
    j["description"] = v.description;
    j["discountedRp"] = v.discountedRp;
    j["iconUrl"] = v.iconUrl;
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
    j["itemId"] = v.itemId;
    j["name"] = v.name;
    j["owned"] = v.owned;
    j["quantity"] = v.quantity;
    j["rp"] = v.rp;
  }

  void from_json(const nlohmann::json& j, LolStoreBundleItemDTO& v) {
    v.description = j.at("description").get<std::string>;
    v.discountedRp = j.at("discountedRp").get<int64_t>;
    v.iconUrl = j.at("iconUrl").get<std::string>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.ip = j.at("ip").get<int64_t>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.owned = j.at("owned").get<bool>;
    v.quantity = j.at("quantity").get<uint32_t>;
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundleItemDTO_HPP
