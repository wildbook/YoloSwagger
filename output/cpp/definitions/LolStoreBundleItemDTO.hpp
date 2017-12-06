#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    std::string iconUrl;
    uint32_t quantity;
    std::string name;
    int64_t rp;
    std::string description;
    bool owned;
    std::string inventoryType;
    int32_t itemId;
    int64_t ip;
    int64_t discountedRp;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["quantity"] = v.quantity;
    j["name"] = v.name;
    j["rp"] = v.rp;
    j["description"] = v.description;
    j["owned"] = v.owned;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["ip"] = v.ip;
    j["discountedRp"] = v.discountedRp;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.rp = j.at("rp").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.ip = j.at("ip").get<int64_t>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
  }
}
