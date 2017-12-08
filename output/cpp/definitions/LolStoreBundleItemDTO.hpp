#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    uint32_t quantity;
    bool owned;
    int64_t rp;
    std::string inventoryType;
    int32_t itemId;
    std::string iconUrl;
    std::string description;
    int64_t ip;
    int64_t discountedRp;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["quantity"] = v.quantity;
    j["owned"] = v.owned;
    j["rp"] = v.rp;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["iconUrl"] = v.iconUrl;
    j["description"] = v.description;
    j["ip"] = v.ip;
    j["discountedRp"] = v.discountedRp;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.quantity = j.at("quantity").get<uint32_t>();
    v.owned = j.at("owned").get<bool>();
    v.rp = j.at("rp").get<int64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
