#ifndef SWAGGER_TYPES_LolLoadoutsLoadout_HPP
#define SWAGGER_TYPES_LolLoadoutsLoadout_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsLoadout {
    // 
    std::map<std::string, nlohmann::json> items;
    // 
    uint32_t id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoadout& v) {
    j["items"] = v.items;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoadout& v) {
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>;
    v.id = j.at("id").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsLoadout_HPP
