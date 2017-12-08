#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    int64_t expiryTime;
    int32_t storeItemId;
    std::string displayCategories;
    std::string tags;
    int64_t rentalSeconds;
    LolLootItemOwnershipStatus_t parentItemStatus;
    std::string itemDesc;
    std::string upgradeLootName;
    std::string shadowPath;
    LolLootRedeemableStatus_t redeemableStatus;
    std::string rarity;
    std::string lootName;
    std::string asset;
    std::string disenchantLootName;
    bool isNew;
    std::string localizedName;
    bool isRental;
    std::string lootId;
    std::string tilePath;
    std::string splashPath;
    int32_t disenchantValue;
    LolLootItemOwnershipStatus_t itemStatus;
    int32_t count;
    std::string type;
    int32_t parentStoreItemId;
    int32_t rentalGames;
    std::string refId;
    int32_t value;
    std::string localizedDescription;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["expiryTime"] = v.expiryTime;
    j["storeItemId"] = v.storeItemId;
    j["displayCategories"] = v.displayCategories;
    j["tags"] = v.tags;
    j["rentalSeconds"] = v.rentalSeconds;
    j["parentItemStatus"] = v.parentItemStatus;
    j["itemDesc"] = v.itemDesc;
    j["upgradeLootName"] = v.upgradeLootName;
    j["shadowPath"] = v.shadowPath;
    j["redeemableStatus"] = v.redeemableStatus;
    j["rarity"] = v.rarity;
    j["lootName"] = v.lootName;
    j["asset"] = v.asset;
    j["disenchantLootName"] = v.disenchantLootName;
    j["isNew"] = v.isNew;
    j["localizedName"] = v.localizedName;
    j["isRental"] = v.isRental;
    j["lootId"] = v.lootId;
    j["tilePath"] = v.tilePath;
    j["splashPath"] = v.splashPath;
    j["disenchantValue"] = v.disenchantValue;
    j["itemStatus"] = v.itemStatus;
    j["count"] = v.count;
    j["type"] = v.type;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["rentalGames"] = v.rentalGames;
    j["refId"] = v.refId;
    j["value"] = v.value;
    j["localizedDescription"] = v.localizedDescription;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.isRental = j.at("isRental").get<bool>();
    v.lootId = j.at("lootId").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.count = j.at("count").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.refId = j.at("refId").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
