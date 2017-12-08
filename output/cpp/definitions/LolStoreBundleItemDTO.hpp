#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    int32_t_t itemId;
    int64_t_t rp;
    std::string_t description;
    int64_t_t ip;
    bool_t owned;
    std::string_t iconUrl;
    int64_t_t discountedRp;
    std::string_t inventoryType;
    uint32_t_t quantity;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["itemId"] = v.itemId;
    j["rp"] = v.rp;
    j["description"] = v.description;
    j["ip"] = v.ip;
    j["owned"] = v.owned;
    j["iconUrl"] = v.iconUrl;
    j["discountedRp"] = v.discountedRp;
    j["inventoryType"] = v.inventoryType;
    j["quantity"] = v.quantity;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.itemId = j.at("itemId").get<int32_t_t>();
    v.rp = j.at("rp").get<int64_t_t>();
    v.description = j.at("description").get<std::string_t>();
    v.ip = j.at("ip").get<int64_t_t>();
    v.owned = j.at("owned").get<bool_t>();
    v.iconUrl = j.at("iconUrl").get<std::string_t>();
    v.discountedRp = j.at("discountedRp").get<int64_t_t>();
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.quantity = j.at("quantity").get<uint32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
