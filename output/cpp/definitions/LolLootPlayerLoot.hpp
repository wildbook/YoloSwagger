#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    bool isNew;
    std::string splashPath;
    int32_t disenchantValue;
    std::string refId;
    LolLootItemOwnershipStatus_t parentItemStatus;
    std::string displayCategories;
    bool isRental;
    std::string localizedDescription;
    std::string localizedName;
    std::string asset;
    int32_t storeItemId;
    std::string lootId;
    std::string type;
    std::string tags;
    int64_t expiryTime;
    int32_t parentStoreItemId;
    std::string lootName;
    LolLootItemOwnershipStatus_t itemStatus;
    int32_t count;
    std::string shadowPath;
    int64_t rentalSeconds;
    std::string itemDesc;
    std::string upgradeLootName;
    int32_t value;
    std::string rarity;
    std::string disenchantLootName;
    std::string tilePath;
    int32_t rentalGames;
    LolLootRedeemableStatus_t redeemableStatus;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["isNew"] = v.isNew;
    j["splashPath"] = v.splashPath;
    j["disenchantValue"] = v.disenchantValue;
    j["refId"] = v.refId;
    j["parentItemStatus"] = v.parentItemStatus;
    j["displayCategories"] = v.displayCategories;
    j["isRental"] = v.isRental;
    j["localizedDescription"] = v.localizedDescription;
    j["localizedName"] = v.localizedName;
    j["asset"] = v.asset;
    j["storeItemId"] = v.storeItemId;
    j["lootId"] = v.lootId;
    j["type"] = v.type;
    j["tags"] = v.tags;
    j["expiryTime"] = v.expiryTime;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["lootName"] = v.lootName;
    j["itemStatus"] = v.itemStatus;
    j["count"] = v.count;
    j["shadowPath"] = v.shadowPath;
    j["rentalSeconds"] = v.rentalSeconds;
    j["itemDesc"] = v.itemDesc;
    j["upgradeLootName"] = v.upgradeLootName;
    j["value"] = v.value;
    j["rarity"] = v.rarity;
    j["disenchantLootName"] = v.disenchantLootName;
    j["tilePath"] = v.tilePath;
    j["rentalGames"] = v.rentalGames;
    j["redeemableStatus"] = v.redeemableStatus;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.isNew = j.at("isNew").get<bool>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.refId = j.at("refId").get<std::string>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.isRental = j.at("isRental").get<bool>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.lootId = j.at("lootId").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.count = j.at("count").get<int32_t>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
