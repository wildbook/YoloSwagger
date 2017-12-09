#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string description;
    std::string startDate;
    bool autoRedeem;
    int32_t lifetimeMax;
    LolLootLootRarity_t rarity;
    std::string image;
    LolLootLootType_t type;
    std::string id;
    std::string endDate;
    int32_t mappedStoreId;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
    j["description"] = v.description;
    j["startDate"] = v.startDate;
    j["autoRedeem"] = v.autoRedeem;
    j["lifetimeMax"] = v.lifetimeMax;
    j["rarity"] = v.rarity;
    j["image"] = v.image;
    j["type"] = v.type;
    j["id"] = v.id;
    j["endDate"] = v.endDate;
    j["mappedStoreId"] = v.mappedStoreId;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.description = j.at("description").get<std::string>();
    v.startDate = j.at("startDate").get<std::string>();
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.image = j.at("image").get<std::string>();
    v.type = j.at("type").get<LolLootLootType_t>();
    v.id = j.at("id").get<std::string>();
    v.endDate = j.at("endDate").get<std::string>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLootLootItemGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
