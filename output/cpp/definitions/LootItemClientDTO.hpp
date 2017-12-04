#ifndef SWAGGER_TYPES_LootItemClientDTO_HPP
#define SWAGGER_TYPES_LootItemClientDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootItemClientDTO {
    // 
    std::string lootName;
    // 
    int64_t rentalSeconds;
    // 
    std::string tags;
    // 
    std::string upgradeLootName;
    // 
    std::string type;
    // 
    int64_t expiryTime;
    // 
    int32_t value;
    // 
    std::string rarity;
    // 
    std::string asset;
    // 
    int32_t storeItemId;
    // 
    std::string displayCategories;
    // 
    int32_t rentalGames;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO& v) {
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

  inline void from_json(const nlohmann::json& j, LootItemClientDTO& v) {
    v.lootName = j.at("lootName").get<std::string>;
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>;
    v.tags = j.at("tags").get<std::string>;
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.expiryTime = j.at("expiryTime").get<int64_t>;
    v.value = j.at("value").get<int32_t>;
    v.rarity = j.at("rarity").get<std::string>;
    v.asset = j.at("asset").get<std::string>;
    v.storeItemId = j.at("storeItemId").get<int32_t>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.rentalGames = j.at("rentalGames").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LootItemClientDTO_HPP
