#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace leagueapi {
  struct LolLootLootItemGdsResource_t {
    std::string_t startDate;
    int32_t_t lifetimeMax;
    std::string_t endDate;
    std::string_t description;
    int32_t_t mappedStoreId;
    std::string_t image;
    LolLootLootRarity_t rarity;
    bool_t autoRedeem;
    LolLootLootType_t type;
    std::string_t id;
    std::string_t name;
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
    v.startDate = j.at("startDate").get<std::string_t>();
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t_t>();
    v.endDate = j.at("endDate").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t_t>();
    v.image = j.at("image").get<std::string_t>();
    v.rarity = j.at("rarity").get<LolLootLootRarity_t>();
    v.autoRedeem = j.at("autoRedeem").get<bool_t>();
    v.type = j.at("type").get<LolLootLootType_t>();
    v.id = j.at("id").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLootLootItemGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
