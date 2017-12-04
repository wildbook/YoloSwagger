#ifndef SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
#include <json.hpp>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  // 
  struct LolLootLootItemGdsResource {
    // 
    bool autoRedeem;
    // 
    std::string description;
    // 
    std::string endDate;
    // 
    std::string id;
    // 
    std::string image;
    // 
    int32_t lifetimeMax;
    // 
    int32_t mappedStoreId;
    // 
    std::string name;
    // 
    LolLootLootRarity rarity;
    // 
    std::string startDate;
    // 
    LolLootLootType type;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource& v) {
    j["autoRedeem"] = v.autoRedeem;
    j["description"] = v.description;
    j["endDate"] = v.endDate;
    j["id"] = v.id;
    j["image"] = v.image;
    j["lifetimeMax"] = v.lifetimeMax;
    j["mappedStoreId"] = v.mappedStoreId;
    j["name"] = v.name;
    j["rarity"] = v.rarity;
    j["startDate"] = v.startDate;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource& v) {
    v.autoRedeem = j.at("autoRedeem").get<bool>;
    v.description = j.at("description").get<std::string>;
    v.endDate = j.at("endDate").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.image = j.at("image").get<std::string>;
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>;
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.rarity = j.at("rarity").get<LolLootLootRarity>;
    v.startDate = j.at("startDate").get<std::string>;
    v.type = j.at("type").get<LolLootLootType>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
