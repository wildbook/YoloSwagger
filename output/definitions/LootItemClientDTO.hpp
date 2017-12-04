#ifndef SWAGGER_TYPES_LootItemClientDTO_HPP
#define SWAGGER_TYPES_LootItemClientDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootItemClientDTO {
    // 
    std::string asset;
    // 
    std::string displayCategories;
    // 
    int64_t expiryTime;
    // 
    std::string lootName;
    // 
    std::string rarity;
    // 
    int32_t rentalGames;
    // 
    int64_t rentalSeconds;
    // 
    int32_t storeItemId;
    // 
    std::string tags;
    // 
    std::string type;
    // 
    std::string upgradeLootName;
    // 
    int32_t value;
  };

  inline void to_json(nlohmann::json& j, const LootItemClientDTO& v) {
    j["asset"] = v.asset;
    j["displayCategories"] = v.displayCategories;
    j["expiryTime"] = v.expiryTime;
    j["lootName"] = v.lootName;
    j["rarity"] = v.rarity;
    j["rentalGames"] = v.rentalGames;
    j["rentalSeconds"] = v.rentalSeconds;
    j["storeItemId"] = v.storeItemId;
    j["tags"] = v.tags;
    j["type"] = v.type;
    j["upgradeLootName"] = v.upgradeLootName;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LootItemClientDTO& v) {
    v.asset = j.at("asset").get<std::string>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.expiryTime = j.at("expiryTime").get<int64_t>;
    v.lootName = j.at("lootName").get<std::string>;
    v.rarity = j.at("rarity").get<std::string>;
    v.rentalGames = j.at("rentalGames").get<int32_t>;
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>;
    v.storeItemId = j.at("storeItemId").get<int32_t>;
    v.tags = j.at("tags").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>;
    v.value = j.at("value").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LootItemClientDTO_HPP
