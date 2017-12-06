#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsCreateOrUpdateItemsRequest_t {
    uint32_t id;
    std::vector<std::string> inventoryJWTs;
    std::map<std::string, nlohmann::json> items;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    j["id"] = v.id;
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
  }
}
