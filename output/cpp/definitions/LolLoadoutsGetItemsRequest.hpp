#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsGetItemsRequest_t {
    std::vector<std::string> inventoryTypes;
    std::vector<std::string> inventoryJWTs;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGetItemsRequest_t& v) {
    j["inventoryTypes"] = v.inventoryTypes;
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGetItemsRequest_t& v) {
    v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>();
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolLoadoutsGetItemsRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
