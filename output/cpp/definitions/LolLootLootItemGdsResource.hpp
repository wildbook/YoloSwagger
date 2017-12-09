#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string name;
    LolLootLootRarity_t rarity;
    std::string description;
    int32_t mappedStoreId;
    std::string startDate;
    std::string id;
    int32_t lifetimeMax;
    bool autoRedeem;
    std::string endDate;
    std::string image;
    LolLootLootType_t type;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
    j["name"] = v.name;
    j["rarity"] = v.rarity;
    j["description"] = v.description;
    j["mappedStoreId"] = v.mappedStoreId;
    j["startDate"] = v.startDate;
    j["id"] = v.id;
    j["lifetimeMax"] = v.lifetimeMax;
    j["autoRedeem"] = v.autoRedeem;
    j["endDate"] = v.endDate;
    j["image"] = v.image;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.description = j.at("description").get<std::string>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
    v.startDate = j.at("startDate").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.endDate = j.at("endDate").get<std::string>();
    v.image = j.at("image").get<std::string>();
    v.type = j.at("type").get<LolLootLootType_t>();
  }
  inline std::string to_string(const LolLootLootItemGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
