#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootItemClientDTO_t {
    int64_t rentalSeconds;
    std::string tags;
    int64_t expiryTime;
    std::string type;
    std::string displayCategories;
    int32_t value;
    int32_t rentalGames;
    std::string rarity;
    std::string lootName;
    int32_t storeItemId;
    std::string asset;
    std::string upgradeLootName;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO_t& v) {
    j["rentalSeconds"] = v.rentalSeconds;
    j["tags"] = v.tags;
    j["expiryTime"] = v.expiryTime;
    j["type"] = v.type;
    j["displayCategories"] = v.displayCategories;
    j["value"] = v.value;
    j["rentalGames"] = v.rentalGames;
    j["rarity"] = v.rarity;
    j["lootName"] = v.lootName;
    j["storeItemId"] = v.storeItemId;
    j["asset"] = v.asset;
    j["upgradeLootName"] = v.upgradeLootName;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO_t& v) {
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.tags = j.at("tags").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.asset = j.at("asset").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
  }
  inline std::string to_string(const LootItemClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
