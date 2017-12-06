#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsGetItemsRequest_t {
    std::vector<std::string> inventoryTypes;
    uint32_t id;
    std::vector<std::string> inventoryJWTs;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGetItemsRequest_t& v) {
    j["inventoryTypes"] = v.inventoryTypes;
    j["id"] = v.id;
    j["inventoryJWTs"] = v.inventoryJWTs;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGetItemsRequest_t& v) {
    v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>();
    v.id = j.at("id").get<uint32_t>();
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>();
  }
}
