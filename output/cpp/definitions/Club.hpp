#ifndef SWAGGER_TYPES_Club_HPP
#define SWAGGER_TYPES_Club_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct Club {
    // 
    std::string name;
    // 
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const Club& v) {
    j["name"] = v.name;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, Club& v) {
    v.name = j.at("name").get<std::string>;
    v.key = j.at("key").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_Club_HPP
