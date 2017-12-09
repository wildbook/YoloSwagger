#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootItemClientDTO_t {
    std::string upgradeLootName;
    int64_t rentalSeconds;
    std::string displayCategories;
    std::string tags;
    std::string type;
    std::string lootName;
    int32_t rentalGames;
    int32_t storeItemId;
    int64_t expiryTime;
    std::string rarity;
    int32_t value;
    std::string asset;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO_t& v) {
    j["upgradeLootName"] = v.upgradeLootName;
    j["rentalSeconds"] = v.rentalSeconds;
    j["displayCategories"] = v.displayCategories;
    j["tags"] = v.tags;
    j["type"] = v.type;
    j["lootName"] = v.lootName;
    j["rentalGames"] = v.rentalGames;
    j["storeItemId"] = v.storeItemId;
    j["expiryTime"] = v.expiryTime;
    j["rarity"] = v.rarity;
    j["value"] = v.value;
    j["asset"] = v.asset;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO_t& v) {
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.asset = j.at("asset").get<std::string>();
  }
  inline std::string to_string(const LootItemClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
