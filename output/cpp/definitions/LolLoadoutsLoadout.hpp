#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsLoadout_t {
    std::string name;
    std::map<std::string, nlohmann::json> items;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoadout_t& v) {
    j["name"] = v.name;
    j["items"] = v.items;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoadout_t& v) {
    v.name = j.at("name").get<std::string>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolLoadoutsLoadout_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
