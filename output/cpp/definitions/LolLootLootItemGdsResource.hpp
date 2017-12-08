#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string startDate;
    int32_t lifetimeMax;
    std::string endDate;
    std::string description;
    int32_t mappedStoreId;
    std::string image;
    LolLootLootRarity_t rarity;
    bool autoRedeem;
    LolLootLootType_t type;
    std::string id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.startDate = j.at("startDate").get<std::string>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.endDate = j.at("endDate").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
    v.image = j.at("image").get<std::string>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.type = j.at("type").get<LolLootLootType_t>();
    v.id = j.at("id").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLootLootItemGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
