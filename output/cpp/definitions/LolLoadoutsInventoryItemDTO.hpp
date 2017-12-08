#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    int32_t itemId;
    std::string entitlementId;
    std::string instanceTypeId;
    std::string instanceId;
    std::string purchaseDate;
    std::string usedInGameDate;
    bool lsb;
    bool f2p;
    std::string expirationDate;
    uint64_t wins;
    std::string inventoryType;
    bool rental;
    std::string eneitlementTypeId;
    uint64_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["itemId"] = v.itemId;
    j["entitlementId"] = v.entitlementId;
    j["instanceTypeId"] = v.instanceTypeId;
    j["instanceId"] = v.instanceId;
    j["purchaseDate"] = v.purchaseDate;
    j["usedInGameDate"] = v.usedInGameDate;
    j["lsb"] = v.lsb;
    j["f2p"] = v.f2p;
    j["expirationDate"] = v.expirationDate;
    j["wins"] = v.wins;
    j["inventoryType"] = v.inventoryType;
    j["rental"] = v.rental;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.lsb = j.at("lsb").get<bool>();
    v.f2p = j.at("f2p").get<bool>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.rental = j.at("rental").get<bool>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
  }
  inline std::string to_string(const LolLoadoutsInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
