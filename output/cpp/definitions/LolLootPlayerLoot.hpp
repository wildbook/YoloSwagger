#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    int32_t parentStoreItemId;
    int32_t disenchantValue;
    std::string disenchantLootName;
    int32_t storeItemId;
    std::string localizedDescription;
    std::string localizedName;
    LolLootItemOwnershipStatus_t itemStatus;
    std::string asset;
    int64_t rentalSeconds;
    bool isNew;
    int64_t expiryTime;
    LolLootItemOwnershipStatus_t parentItemStatus;
    int32_t value;
    std::string lootName;
    std::string shadowPath;
    std::string refId;
    std::string itemDesc;
    bool isRental;
    std::string tags;
    int32_t rentalGames;
    std::string lootId;
    std::string displayCategories;
    std::string tilePath;
    std::string rarity;
    std::string upgradeLootName;
    std::string splashPath;
    int32_t count;
    LolLootRedeemableStatus_t redeemableStatus;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["disenchantValue"] = v.disenchantValue;
    j["disenchantLootName"] = v.disenchantLootName;
    j["storeItemId"] = v.storeItemId;
    j["localizedDescription"] = v.localizedDescription;
    j["localizedName"] = v.localizedName;
    j["itemStatus"] = v.itemStatus;
    j["asset"] = v.asset;
    j["rentalSeconds"] = v.rentalSeconds;
    j["isNew"] = v.isNew;
    j["expiryTime"] = v.expiryTime;
    j["parentItemStatus"] = v.parentItemStatus;
    j["value"] = v.value;
    j["lootName"] = v.lootName;
    j["shadowPath"] = v.shadowPath;
    j["refId"] = v.refId;
    j["itemDesc"] = v.itemDesc;
    j["isRental"] = v.isRental;
    j["tags"] = v.tags;
    j["rentalGames"] = v.rentalGames;
    j["lootId"] = v.lootId;
    j["displayCategories"] = v.displayCategories;
    j["tilePath"] = v.tilePath;
    j["rarity"] = v.rarity;
    j["upgradeLootName"] = v.upgradeLootName;
    j["splashPath"] = v.splashPath;
    j["count"] = v.count;
    j["redeemableStatus"] = v.redeemableStatus;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.asset = j.at("asset").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.isNew = j.at("isNew").get<bool>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.value = j.at("value").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.refId = j.at("refId").get<std::string>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.isRental = j.at("isRental").get<bool>();
    v.tags = j.at("tags").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.lootId = j.at("lootId").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.rarity = j.at("rarity").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
