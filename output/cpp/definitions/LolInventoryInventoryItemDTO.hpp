#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryInventoryItemDTO_t {
    std::string purchaseDate;
    std::string instanceId;
    bool lsb;
    std::string inventoryType;
    int32_t itemId;
    uint64_t quantity;
    bool rental;
    bool f2p;
    std::string eneitlementTypeId;
    uint64_t wins;
    std::string instanceTypeId;
    std::string expirationDate;
    std::string usedInGameDate;
    std::string entitlementId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItemDTO_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["instanceId"] = v.instanceId;
    j["lsb"] = v.lsb;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["quantity"] = v.quantity;
    j["rental"] = v.rental;
    j["f2p"] = v.f2p;
    j["eneitlementTypeId"] = v.eneitlementTypeId;
    j["wins"] = v.wins;
    j["instanceTypeId"] = v.instanceTypeId;
    j["expirationDate"] = v.expirationDate;
    j["usedInGameDate"] = v.usedInGameDate;
    j["entitlementId"] = v.entitlementId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItemDTO_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<std::string>();
    v.instanceId = j.at("instanceId").get<std::string>();
    v.lsb = j.at("lsb").get<bool>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.quantity = j.at("quantity").get<uint64_t>();
    v.rental = j.at("rental").get<bool>();
    v.f2p = j.at("f2p").get<bool>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>();
    v.entitlementId = j.at("entitlementId").get<std::string>();
  }
  inline std::string to_string(const LolInventoryInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
