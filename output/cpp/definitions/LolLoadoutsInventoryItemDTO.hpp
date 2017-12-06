#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    std::string eneitlementTypeId;
    std::string entitlementId;
    std::string expirationDate;
    bool f2p;
    std::string instanceId;
    std::string instanceTypeId;
    std::string inventoryType;
    int32_t itemId;
    bool lsb;
    std::string purchaseDate;
    uint64_t quantity;
    bool rental;
    std::string usedInGameDate;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["entitlementId"] = v.entitlementId;
    j["expirationDate"] = v.expirationDate;
    j["f2p"] = v.f2p;
    j["instanceId"] = v.instanceId;
    j["instanceTypeId"] = v.instanceTypeId;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["lsb"] = v.lsb;
    j["purchaseDate"] = v.purchaseDate;
    j["quantity"] = v.quantity;
    j["rental"] = v.rental;
    j["usedInGameDate"] = v.usedInGameDate;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.f2p = j.at("f2p").get<bool>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.lsb = j.at("lsb").get<bool>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.rental = j.at("rental").get<bool>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
  }
}
