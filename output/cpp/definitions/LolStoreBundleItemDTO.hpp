#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    bool owned;
    std::string iconUrl;
    int64_t ip;
    std::string description;
    std::string name;
    int32_t itemId;
    std::string inventoryType;
    int64_t discountedRp;
    int64_t rp;
    uint32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["owned"] = v.owned;
    j["iconUrl"] = v.iconUrl;
    j["ip"] = v.ip;
    j["description"] = v.description;
    j["name"] = v.name;
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["discountedRp"] = v.discountedRp;
    j["rp"] = v.rp;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
    v.rp = j.at("rp").get<int64_t>();
    v.quantity = j.at("quantity").get<uint32_t>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
