#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace leagueapi {
  struct LolLootPlayerLoot_t {
    bool_t isNew;
    std::string_t splashPath;
    int32_t_t disenchantValue;
    std::string_t refId;
    LolLootItemOwnershipStatus_t parentItemStatus;
    std::string_t displayCategories;
    bool_t isRental;
    std::string_t localizedDescription;
    std::string_t localizedName;
    std::string_t asset;
    int32_t_t storeItemId;
    std::string_t lootId;
    std::string_t type;
    std::string_t tags;
    int64_t_t expiryTime;
    int32_t_t parentStoreItemId;
    std::string_t lootName;
    LolLootItemOwnershipStatus_t itemStatus;
    int32_t_t count;
    std::string_t shadowPath;
    int64_t_t rentalSeconds;
    std::string_t itemDesc;
    std::string_t upgradeLootName;
    int32_t_t value;
    std::string_t rarity;
    std::string_t disenchantLootName;
    std::string_t tilePath;
    int32_t_t rentalGames;
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
    v.isNew = j.at("isNew").get<bool_t>();
    v.splashPath = j.at("splashPath").get<std::string_t>();
    v.disenchantValue = j.at("disenchantValue").get<int32_t_t>();
    v.refId = j.at("refId").get<std::string_t>();
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus_t>();
    v.displayCategories = j.at("displayCategories").get<std::string_t>();
    v.isRental = j.at("isRental").get<bool_t>();
    v.localizedDescription = j.at("localizedDescription").get<std::string_t>();
    v.localizedName = j.at("localizedName").get<std::string_t>();
    v.asset = j.at("asset").get<std::string_t>();
    v.storeItemId = j.at("storeItemId").get<int32_t_t>();
    v.lootId = j.at("lootId").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.tags = j.at("tags").get<std::string_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t_t>();
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t_t>();
    v.lootName = j.at("lootName").get<std::string_t>();
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus_t>();
    v.count = j.at("count").get<int32_t_t>();
    v.shadowPath = j.at("shadowPath").get<std::string_t>();
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t_t>();
    v.itemDesc = j.at("itemDesc").get<std::string_t>();
    v.upgradeLootName = j.at("upgradeLootName").get<std::string_t>();
    v.value = j.at("value").get<int32_t_t>();
    v.rarity = j.at("rarity").get<std::string_t>();
    v.disenchantLootName = j.at("disenchantLootName").get<std::string_t>();
    v.tilePath = j.at("tilePath").get<std::string_t>();
    v.rentalGames = j.at("rentalGames").get<int32_t_t>();
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus_t>();
  }
  inline std::string to_string(const LolLootPlayerLoot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
