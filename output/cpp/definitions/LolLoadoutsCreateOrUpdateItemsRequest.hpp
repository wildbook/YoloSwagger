#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsCreateOrUpdateItemsRequest_t {
    std::map<std::string, nlohmann::json> items;
    std::vector<std::string> inventoryJWTs;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    j["items"] = v.items;
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
