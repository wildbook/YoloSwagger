#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    std::string itemDesc;
    std::string splashPath;
    int32_t parentStoreItemId;
    LolLootRedeemableStatus_t redeemableStatus;
    std::string localizedName;
    std::string lootId;
    int32_t rentalGames;
    std::string disenchantLootName;
    bool isRental;
    int64_t rentalSeconds;
    int64_t expiryTime;
    std::string localizedDescription;
    std::string rarity;
    int32_t disenchantValue;
    std::string tilePath;
    LolLootItemOwnershipStatus_t itemStatus;
    int32_t value;
    bool isNew;
    std::string lootName;
    std::string refId;
    int32_t storeItemId;
    std::string upgradeLootName;
    LolLootItemOwnershipStatus_t parentItemStatus;
    std::string type;
    std::string asset;
    std::string displayCategories;
    std::string tags;
    int32_t count;
    std::string shadowPath;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["itemDesc"] = v.itemDesc;
    j["splashPath"] = v.splashPath;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["redeemableStatus"] = v.redeemableStatus;
    j["localizedName"] = v.localizedName;
    j["lootId"] = v.lootId;
    j["rentalGames"] = v.rentalGames;
    j["disenchantLootName"] = v.disenchantLootName;
    j["isRental"] = v.isRental;
    j["rentalSeconds"] = v.rentalSeconds;
    j["expiryTime"] = v.expiryTime;
    j["localizedDescription"] = v.localizedDescription;
    j["rarity"] = v.rarity;
    j["disenchantValue"] = v.disenchantValue;
    j["tilePath"] = v.tilePath;
    j["itemStatus"] = v.itemStatus;
    j["value"] = v.value;
    j["isNew"] = v.isNew;
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
    j["storeItemId"] = v.storeItemId;
    j["upgradeLootName"] = v.upgradeLootName;
    j["parentItemStatus"] = v.parentItemStatus;
    j["type"] = v.type;
    j["asset"] = v.asset;
    j["displayCategories"] = v.displayCategories;
    j["tags"] = v.tags;
    j["count"] = v.count;
    j["shadowPath"] = v.shadowPath;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.lootId = j.at("lootId").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.isRental = j.at("isRental").get<bool>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.rarity = j.at("rarity").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.value = j.at("value").get<int32_t>();
    v.isNew = j.at("isNew").get<bool>();
    v.lootName = j.at("lootName").get<std::string>();
    v.refId = j.at("refId").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.type = j.at("type").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
  }
}
