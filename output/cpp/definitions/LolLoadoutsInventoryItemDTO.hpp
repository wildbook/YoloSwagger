#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryItemDTO_t {
    bool rental;
    std::string usedInGameDate;
    std::string eneitlementTypeId;
    std::string purchaseDate;
    int32_t itemId;
    std::string inventoryType;
    bool lsb;
    std::string entitlementId;
    std::string expirationDate;
    std::string instanceId;
    uint64_t quantity;
    bool f2p;
    uint64_t wins;
    std::string instanceTypeId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryItemDTO_t& v) {
    j["rental"] = v.rental;
    j["usedInGameDate"] = v.usedInGameDate;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["purchaseDate"] = v.purchaseDate;
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["lsb"] = v.lsb;
    j["entitlementId"] = v.entitlementId;
    j["expirationDate"] = v.expirationDate;
    j["instanceId"] = v.instanceId;
    j["quantity"] = v.quantity;
    j["f2p"] = v.f2p;
    j["wins"] = v.wins;
    j["instanceTypeId"] = v.instanceTypeId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryItemDTO_t& v) {
    v.rental = j.at("rental").get<bool>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.lsb = j.at("lsb").get<bool>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.f2p = j.at("f2p").get<bool>();
    v.wins = j.at("wins").get<uint64_t>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
  }
  inline std::string to_string(const LolLoadoutsInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
