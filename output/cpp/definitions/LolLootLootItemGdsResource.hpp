#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootRarity.hpp"
#include "LolLootLootType.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    bool autoRedeem;
    std::string description;
    std::string endDate;
    std::string id;
    std::string image;
    int32_t lifetimeMax;
    int32_t mappedStoreId;
    std::string name;
    LolLootLootRarity_t rarity;
    std::string startDate;
    LolLootLootType_t type;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.endDate = j.at("endDate").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.image = j.at("image").get<std::string>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.startDate = j.at("startDate").get<std::string>();
    v.type = j.at("type").get<LolLootLootType_t>();
  }
}
