#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootItemClientDTO_t {
    std::string displayCategories;
    int32_t rentalGames;
    std::string rarity;
    int32_t storeItemId;
    std::string asset;
    int64_t rentalSeconds;
    int64_t expiryTime;
    int32_t value;
    std::string tags;
    std::string upgradeLootName;
    std::string lootName;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO_t& v) {
    j["displayCategories"] = v.displayCategories;
    j["rentalGames"] = v.rentalGames;
    j["rarity"] = v.rarity;
    j["storeItemId"] = v.storeItemId;
    j["asset"] = v.asset;
    j["rentalSeconds"] = v.rentalSeconds;
    j["expiryTime"] = v.expiryTime;
    j["value"] = v.value;
    j["tags"] = v.tags;
    j["upgradeLootName"] = v.upgradeLootName;
    j["lootName"] = v.lootName;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO_t& v) {
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.asset = j.at("asset").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.value = j.at("value").get<int32_t>();
    v.tags = j.at("tags").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LootItemClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
