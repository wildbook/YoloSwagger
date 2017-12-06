#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsLoadout_t {
    uint32_t id;
    std::map<std::string, nlohmann::json> items;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoadout_t& v) {
    j["id"] = v.id;
    j["items"] = v.items;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoadout_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.name = j.at("name").get<std::string>();
  }
}
