#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsLoadout_t {
    std::map<std::string, nlohmann::json> items;
    std::string name;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoadout_t& v) {
    j["items"] = v.items;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoadout_t& v) {
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolLoadoutsLoadout_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
