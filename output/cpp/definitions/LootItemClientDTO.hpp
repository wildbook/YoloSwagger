#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootItemClientDTO_t {
    std::string_t lootName;
    int64_t_t rentalSeconds;
    std::string_t tags;
    std::string_t upgradeLootName;
    std::string_t type;
    int64_t_t expiryTime;
    int32_t_t value;
    std::string_t rarity;
    std::string_t asset;
    int32_t_t storeItemId;
    std::string_t displayCategories;
    int32_t_t rentalGames;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO_t& v) {
    j["lootName"] = v.lootName;
    j["rentalSeconds"] = v.rentalSeconds;
    j["tags"] = v.tags;
    j["upgradeLootName"] = v.upgradeLootName;
    j["type"] = v.type;
    j["expiryTime"] = v.expiryTime;
    j["value"] = v.value;
    j["rarity"] = v.rarity;
    j["asset"] = v.asset;
    j["storeItemId"] = v.storeItemId;
    j["displayCategories"] = v.displayCategories;
    j["rentalGames"] = v.rentalGames;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO_t& v) {
    v.lootName = j.at("lootName").get<std::string_t>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t_t>();
    v.tags = j.at("tags").get<std::string_t>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t_t>();
    v.value = j.at("value").get<int32_t_t>();
    v.rarity = j.at("rarity").get<std::string_t>();
    v.asset = j.at("asset").get<std::string_t>();
    v.storeItemId = j.at("storeItemId").get<int32_t_t>();
    v.displayCategories = j.at("displayCategories").get<std::string_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t_t>();
  }
  inline std::string to_string(const LootItemClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
