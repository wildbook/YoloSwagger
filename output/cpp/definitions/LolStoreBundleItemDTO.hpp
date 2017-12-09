#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    int32_t itemId;
    uint32_t quantity;
    int64_t discountedRp;
    std::string description;
    int64_t rp;
    bool owned;
    std::string name;
    std::string inventoryType;
    int64_t ip;
    std::string iconUrl;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["itemId"] = v.itemId;
    j["quantity"] = v.quantity;
    j["discountedRp"] = v.discountedRp;
    j["description"] = v.description;
    j["rp"] = v.rp;
    j["owned"] = v.owned;
    j["name"] = v.name;
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
    j["iconUrl"] = v.iconUrl;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.rp = j.at("rp").get<int64_t>();
    v.owned = j.at("owned").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
