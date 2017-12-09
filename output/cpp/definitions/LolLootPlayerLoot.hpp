#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    LolLootRedeemableStatus_t redeemableStatus;
    std::string upgradeLootName;
    int32_t parentStoreItemId;
    std::string displayCategories;
    std::string refId;
    int32_t count;
    LolLootItemOwnershipStatus_t parentItemStatus;
    std::string type;
    std::string disenchantLootName;
    int32_t storeItemId;
    std::string splashPath;
    int64_t expiryTime;
    std::string lootId;
    std::string localizedDescription;
    LolLootItemOwnershipStatus_t itemStatus;
    int64_t rentalSeconds;
    std::string shadowPath;
    std::string tags;
    int32_t disenchantValue;
    std::string lootName;
    int32_t value;
    bool isRental;
    int32_t rentalGames;
    std::string itemDesc;
    std::string rarity;
    std::string tilePath;
    std::string localizedName;
    std::string asset;
    bool isNew;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["redeemableStatus"] = v.redeemableStatus;
    j["upgradeLootName"] = v.upgradeLootName;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["displayCategories"] = v.displayCategories;
    j["refId"] = v.refId;
    j["count"] = v.count;
    j["parentItemStatus"] = v.parentItemStatus;
    j["type"] = v.type;
    j["disenchantLootName"] = v.disenchantLootName;
    j["storeItemId"] = v.storeItemId;
    j["splashPath"] = v.splashPath;
    j["expiryTime"] = v.expiryTime;
    j["lootId"] = v.lootId;
    j["localizedDescription"] = v.localizedDescription;
    j["itemStatus"] = v.itemStatus;
    j["rentalSeconds"] = v.rentalSeconds;
    j["shadowPath"] = v.shadowPath;
    j["tags"] = v.tags;
    j["disenchantValue"] = v.disenchantValue;
    j["lootName"] = v.lootName;
    j["value"] = v.value;
    j["isRental"] = v.isRental;
    j["rentalGames"] = v.rentalGames;
    j["itemDesc"] = v.itemDesc;
    j["rarity"] = v.rarity;
    j["tilePath"] = v.tilePath;
    j["localizedName"] = v.localizedName;
    j["asset"] = v.asset;
    j["isNew"] = v.isNew;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.refId = j.at("refId").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.type = j.at("type").get<std::string>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.lootId = j.at("lootId").get<std::string>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.isRental = j.at("isRental").get<bool>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.rarity = j.at("rarity").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
