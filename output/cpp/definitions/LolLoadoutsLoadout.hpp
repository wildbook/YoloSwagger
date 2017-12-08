#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsLoadout_t {
    std::string name;
    uint32_t id;
    std::map<std::string, nlohmann::json> items;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoadout_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoadout_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
  }
  inline std::string to_string(const LolLoadoutsLoadout_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
