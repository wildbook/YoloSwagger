#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryInventoryItemDTO_t {
    int32_t_t itemId;
    std::string_t entitlementId;
    std::string_t instanceTypeId;
    std::string_t instanceId;
    std::string_t purchaseDate;
    std::string_t usedInGameDate;
    bool_t lsb;
    bool_t f2p;
    std::string_t expirationDate;
    uint64_t_t wins;
    std::string_t inventoryType;
    bool_t rental;
    std::string_t eneitlementTypeId;
    uint64_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItemDTO_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItemDTO_t& v) {
    v.itemId = j.at("itemId").get<int32_t_t>();
    v.entitlementId = j.at("entitlementId").get<std::string_t>();
    v.instanceTypeId = j.at("instanceTypeId").get<std::string_t>();
    v.instanceId = j.at("instanceId").get<std::string_t>();
    v.purchaseDate = j.at("purchaseDate").get<std::string_t>();
    v.usedInGameDate = j.at("usedInGameDate").get<std::string_t>();
    v.lsb = j.at("lsb").get<bool_t>();
    v.f2p = j.at("f2p").get<bool_t>();
    v.expirationDate = j.at("expirationDate").get<std::string_t>();
    v.wins = j.at("wins").get<uint64_t_t>();
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.rental = j.at("rental").get<bool_t>();
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string_t>();
    v.quantity = j.at("quantity").get<uint64_t_t>();
  }
  inline std::string to_string(const LolInventoryInventoryItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
