#ifndef SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
#include <json.hpp>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  // 
  struct LolLootLootItemGdsResource {
    // 
    std::string startDate;
    // 
    int32_t lifetimeMax;
    // 
    std::string endDate;
    // 
    std::string description;
    // 
    int32_t mappedStoreId;
    // 
    std::string image;
    // 
    LolLootLootRarity rarity;
    // 
    bool autoRedeem;
    // 
    LolLootLootType type;
    // 
    std::string id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource& v) {
    j["startDate"] = v.startDate;
    j["lifetimeMax"] = v.lifetimeMax;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["mappedStoreId"] = v.mappedStoreId;
    j["image"] = v.image;
    j["rarity"] = v.rarity;
    j["autoRedeem"] = v.autoRedeem;
    j["type"] = v.type;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource& v) {
    v.startDate = j.at("startDate").get<std::string>;
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>;
    v.endDate = j.at("endDate").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>;
    v.image = j.at("image").get<std::string>;
    v.rarity = j.at("rarity").get<LolLootLootRarity>;
    v.autoRedeem = j.at("autoRedeem").get<bool>;
    v.type = j.at("type").get<LolLootLootType>;
    v.id = j.at("id").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootItemGdsResource_HPP
