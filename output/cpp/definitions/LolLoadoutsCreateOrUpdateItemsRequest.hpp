#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsCreateOrUpdateItemsRequest_t {
    std::vector<std::string> inventoryJWTs;
    uint32_t id;
    std::map<std::string, nlohmann::json> items;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["id"] = v.id;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>();
    v.id = j.at("id").get<uint32_t>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
  }
  inline std::string to_string(const LolLoadoutsCreateOrUpdateItemsRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
