#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    std::string asset;
    int32_t count;
    std::string disenchantLootName;
    int32_t disenchantValue;
    std::string displayCategories;
    int64_t expiryTime;
    bool isNew;
    bool isRental;
    std::string itemDesc;
    LolLootItemOwnershipStatus_t itemStatus;
    std::string localizedDescription;
    std::string localizedName;
    std::string lootId;
    std::string lootName;
    LolLootItemOwnershipStatus_t parentItemStatus;
    int32_t parentStoreItemId;
    std::string rarity;
    LolLootRedeemableStatus_t redeemableStatus;
    std::string refId;
    int32_t rentalGames;
    int64_t rentalSeconds;
    std::string shadowPath;
    std::string splashPath;
    int32_t storeItemId;
    std::string tags;
    std::string tilePath;
    std::string type;
    std::string upgradeLootName;
    int32_t value;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["asset"] = v.asset;
    j["count"] = v.count;
    j["disenchantLootName"] = v.disenchantLootName;
    j["disenchantValue"] = v.disenchantValue;
    j["displayCategories"] = v.displayCategories;
    j["expiryTime"] = v.expiryTime;
    j["isNew"] = v.isNew;
    j["isRental"] = v.isRental;
    j["itemDesc"] = v.itemDesc;
    j["itemStatus"] = v.itemStatus;
    j["localizedDescription"] = v.localizedDescription;
    j["localizedName"] = v.localizedName;
    j["lootId"] = v.lootId;
    j["lootName"] = v.lootName;
    j["parentItemStatus"] = v.parentItemStatus;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["rarity"] = v.rarity;
    j["redeemableStatus"] = v.redeemableStatus;
    j["refId"] = v.refId;
    j["rentalGames"] = v.rentalGames;
    j["rentalSeconds"] = v.rentalSeconds;
    j["shadowPath"] = v.shadowPath;
    j["splashPath"] = v.splashPath;
    j["storeItemId"] = v.storeItemId;
    j["tags"] = v.tags;
    j["tilePath"] = v.tilePath;
    j["type"] = v.type;
    j["upgradeLootName"] = v.upgradeLootName;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.asset = j.at("asset").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.isNew = j.at("isNew").get<bool>();
    v.isRental = j.at("isRental").get<bool>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.lootId = j.at("lootId").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.refId = j.at("refId").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.tags = j.at("tags").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.value = j.at("value").get<int32_t>();
  }
}
