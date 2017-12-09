#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    std::string usedInGameDate;
    std::string eneitlementTypeId;
    std::string instanceId;
    uint64_t wins;
    std::string instanceTypeId;
    std::string entitlementId;
    uint64_t quantity;
    std::string expirationDate;
    int32_t itemId;
    bool f2p;
    bool lsb;
    std::string inventoryType;
    std::string purchaseDate;
    bool rental;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["usedInGameDate"] = v.usedInGameDate;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["instanceId"] = v.instanceId;
    j["wins"] = v.wins;
    j["instanceTypeId"] = v.instanceTypeId;
    j["entitlementId"] = v.entitlementId;
    j["quantity"] = v.quantity;
    j["expirationDate"] = v.expirationDate;
    j["itemId"] = v.itemId;
    j["f2p"] = v.f2p;
    j["lsb"] = v.lsb;
    j["inventoryType"] = v.inventoryType;
    j["purchaseDate"] = v.purchaseDate;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.f2p = j.at("f2p").get<bool>();
    v.lsb = j.at("lsb").get<bool>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.rental = j.at("rental").get<bool>();
  }
  inline std::string to_string(const LolLoadoutsInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
