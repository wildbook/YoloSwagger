#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    std::string instanceTypeId;
    int32_t itemId;
    std::string expirationDate;
    uint64_t wins;
    std::string instanceId;
    std::string inventoryType;
    bool rental;
    bool lsb;
    std::string eneitlementTypeId;
    bool f2p;
    std::string usedInGameDate;
    uint64_t quantity;
    std::string entitlementId;
    std::string purchaseDate;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["instanceTypeId"] = v.instanceTypeId;
    j["itemId"] = v.itemId;
    j["expirationDate"] = v.expirationDate;
    j["wins"] = v.wins;
    j["instanceId"] = v.instanceId;
    j["inventoryType"] = v.inventoryType;
    j["rental"] = v.rental;
    j["lsb"] = v.lsb;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["f2p"] = v.f2p;
    j["usedInGameDate"] = v.usedInGameDate;
    j["quantity"] = v.quantity;
    j["entitlementId"] = v.entitlementId;
    j["purchaseDate"] = v.purchaseDate;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.rental = j.at("rental").get<bool>();
    v.lsb = j.at("lsb").get<bool>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.f2p = j.at("f2p").get<bool>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
  }
  inline std::string to_string(const LolLoadoutsInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
