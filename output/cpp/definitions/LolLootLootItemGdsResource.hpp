#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootRarity.hpp"
#include "LolLootLootType.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string image;
    std::string startDate;
    bool autoRedeem;
    std::string id;
    LolLootLootType_t type;
    int32_t lifetimeMax;
    std::string endDate;
    std::string description;
    std::string name;
    LolLootLootRarity_t rarity;
    int32_t mappedStoreId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
    j["image"] = v.image;
    j["startDate"] = v.startDate;
    j["autoRedeem"] = v.autoRedeem;
    j["id"] = v.id;
    j["type"] = v.type;
    j["lifetimeMax"] = v.lifetimeMax;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["name"] = v.name;
    j["rarity"] = v.rarity;
    j["mappedStoreId"] = v.mappedStoreId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.image = j.at("image").get<std::string>();
    v.startDate = j.at("startDate").get<std::string>();
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.type = j.at("type").get<LolLootLootType_t>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.endDate = j.at("endDate").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
  }
}
