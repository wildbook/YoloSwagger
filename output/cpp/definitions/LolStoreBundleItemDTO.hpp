#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    std::string description;
    int64_t rp;
    std::string iconUrl;
    std::string name;
    bool owned;
    int32_t itemId;
    int64_t discountedRp;
    uint32_t quantity;
    std::string inventoryType;
    int64_t ip;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["description"] = v.description;
    j["rp"] = v.rp;
    j["iconUrl"] = v.iconUrl;
    j["name"] = v.name;
    j["owned"] = v.owned;
    j["itemId"] = v.itemId;
    j["discountedRp"] = v.discountedRp;
    j["quantity"] = v.quantity;
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.rp = j.at("rp").get<int64_t>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
