#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    std::string entitlementId;
    uint64_t quantity;
    uint64_t wins;
    std::string expirationDate;
    std::string purchaseDate;
    bool f2p;
    std::string eneitlementTypeId;
    std::string instanceId;
    std::string instanceTypeId;
    int32_t itemId;
    std::string usedInGameDate;
    std::string inventoryType;
    bool rental;
    bool lsb;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["entitlementId"] = v.entitlementId;
    j["quantity"] = v.quantity;
    j["wins"] = v.wins;
    j["expirationDate"] = v.expirationDate;
    j["purchaseDate"] = v.purchaseDate;
    j["f2p"] = v.f2p;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["instanceId"] = v.instanceId;
    j["instanceTypeId"] = v.instanceTypeId;
    j["itemId"] = v.itemId;
    j["usedInGameDate"] = v.usedInGameDate;
    j["inventoryType"] = v.inventoryType;
    j["rental"] = v.rental;
    j["lsb"] = v.lsb;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.f2p = j.at("f2p").get<bool>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.rental = j.at("rental").get<bool>();
    v.lsb = j.at("lsb").get<bool>();
  }
}
