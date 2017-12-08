#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string image;
    std::string id;
    bool autoRedeem;
    std::string startDate;
    std::string endDate;
    std::string description;
    std::string name;
    int32_t lifetimeMax;
    LolLootLootRarity_t rarity;
    LolLootLootType_t type;
    int32_t mappedStoreId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootItemGdsResource_t& v) {
    j["image"] = v.image;
    j["id"] = v.id;
    j["autoRedeem"] = v.autoRedeem;
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["name"] = v.name;
    j["lifetimeMax"] = v.lifetimeMax;
    j["rarity"] = v.rarity;
    j["type"] = v.type;
    j["mappedStoreId"] = v.mappedStoreId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootItemGdsResource_t& v) {
    v.image = j.at("image").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.autoRedeem = j.at("autoRedeem").get<bool>();
    v.startDate = j.at("startDate").get<std::string>();
    v.endDate = j.at("endDate").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.type = j.at("type").get<LolLootLootType_t>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>();
  }
  inline std::string to_string(const LolLootLootItemGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
