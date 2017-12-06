#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootItemClientDTO_t {
    int64_t rentalSeconds;
    std::string lootName;
    int32_t storeItemId;
    std::string upgradeLootName;
    std::string asset;
    std::string type;
    int64_t expiryTime;
    int32_t rentalGames;
    std::string displayCategories;
    std::string tags;
    std::string rarity;
    int32_t value;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO_t& v) {
    j["rentalSeconds"] = v.rentalSeconds;
    j["lootName"] = v.lootName;
    j["storeItemId"] = v.storeItemId;
    j["upgradeLootName"] = v.upgradeLootName;
    j["asset"] = v.asset;
    j["type"] = v.type;
    j["expiryTime"] = v.expiryTime;
    j["rentalGames"] = v.rentalGames;
    j["displayCategories"] = v.displayCategories;
    j["tags"] = v.tags;
    j["rarity"] = v.rarity;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO_t& v) {
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.rarity = j.at("rarity").get<std::string>();
    v.value = j.at("value").get<int32_t>();
  }
}
