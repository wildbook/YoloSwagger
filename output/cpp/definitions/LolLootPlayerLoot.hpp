#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootRedeemableStatus.hpp"
#include "LolLootItemOwnershipStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    int32_t count;
    LolLootRedeemableStatus_t redeemableStatus;
    std::string localizedDescription;
    std::string upgradeLootName;
    std::string displayCategories;
    int32_t disenchantValue;
    std::string splashPath;
    int32_t value;
    std::string tilePath;
    int64_t rentalSeconds;
    std::string itemDesc;
    int32_t storeItemId;
    int32_t parentStoreItemId;
    std::string disenchantLootName;
    std::string lootId;
    std::string shadowPath;
    bool isRental;
    int64_t expiryTime;
    std::string tags;
    std::string type;
    std::string localizedName;
    LolLootItemOwnershipStatus_t parentItemStatus;
    int32_t rentalGames;
    std::string rarity;
    std::string lootName;
    std::string refId;
    std::string asset;
    LolLootItemOwnershipStatus_t itemStatus;
    bool isNew;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLoot_t& v) {
    j["count"] = v.count;
    j["redeemableStatus"] = v.redeemableStatus;
    j["localizedDescription"] = v.localizedDescription;
    j["upgradeLootName"] = v.upgradeLootName;
    j["displayCategories"] = v.displayCategories;
    j["disenchantValue"] = v.disenchantValue;
    j["splashPath"] = v.splashPath;
    j["value"] = v.value;
    j["tilePath"] = v.tilePath;
    j["rentalSeconds"] = v.rentalSeconds;
    j["itemDesc"] = v.itemDesc;
    j["storeItemId"] = v.storeItemId;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["disenchantLootName"] = v.disenchantLootName;
    j["lootId"] = v.lootId;
    j["shadowPath"] = v.shadowPath;
    j["isRental"] = v.isRental;
    j["expiryTime"] = v.expiryTime;
    j["tags"] = v.tags;
    j["type"] = v.type;
    j["localizedName"] = v.localizedName;
    j["parentItemStatus"] = v.parentItemStatus;
    j["rentalGames"] = v.rentalGames;
    j["rarity"] = v.rarity;
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
    j["asset"] = v.asset;
    j["itemStatus"] = v.itemStatus;
    j["isNew"] = v.isNew;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLoot_t& v) {
    v.count = j.at("count").get<int32_t>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>();
    v.itemDesc = j.at("itemDesc").get<std::string>();
    v.storeItemId = j.at("storeItemId").get<int32_t>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>();
    v.lootId = j.at("lootId").get<std::string>();
    v.shadowPath = j.at("shadowPath").get<std::string>();
    v.isRental = j.at("isRental").get<bool>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.tags = j.at("tags").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.localizedName = j.at("localizedName").get<std::string>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t>();
    v.rarity = j.at("rarity").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
    v.refId = j.at("refId").get<std::string>();
    v.asset = j.at("asset").get<std::string>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.isNew = j.at("isNew").get<bool>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
